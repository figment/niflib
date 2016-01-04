/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIPSYSMODIFIER_H_
#define _NIPSYSMODIFIER_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "NiObject.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class NiParticleSystem;
	class NiPSysModifier;
	typedef Ref<NiPSysModifier> NiPSysModifierRef;

	/*! Generic particle system modifier object. */
	class NiPSysModifier : public NiObject
	{
	public:
		/*! Constructor */
		NIFLIB_API NiPSysModifier();

		/*! Destructor */
		NIFLIB_API virtual ~NiPSysModifier();

		/*!
		 * A constant value which uniquly identifies objects of this type.
		 */
		NIFLIB_API static const Type TYPE;

		/*!
		 * A factory function used during file reading to create an instance of this type of object.
		 * \return A pointer to a newly allocated instance of this type of object.
		 */
		NIFLIB_API static NiObject * Create();

		/*!
		 * Summarizes the information contained in this object in English.
		 * \param[in] verbose Determines whether or not detailed information about large areas of data will be printed out.
		 * \return A string containing a summary of the information within the object in English.  This is the function that Niflyze calls to generate its analysis, so the output is the same.
		 */
		NIFLIB_API virtual string asString(bool verbose = false) const;

		/*!
		 * Used to determine the type of a particular instance of this object.
		 * \return The type constant for the actual type of the object.
		 */
		NIFLIB_API virtual const Type & GetType() const;

		/***Begin Example Naive Implementation****

		// The object name.
		// \return The current value.
		IndexString GetName() const;

		// The object name.
		// \param[in] value The new value.
		void SetName( const IndexString & value );

		// Modifier ID in the particle modifier chain (always a multiple of 1000)?
		// \return The current value.
		unsigned int GetOrder() const;

		// Modifier ID in the particle modifier chain (always a multiple of 1000)?
		// \param[in] value The new value.
		void SetOrder( unsigned int value );

		// NiParticleSystem parent of this modifier.
		// \return The current value.
		NiParticleSystem * GetTarget() const;

		// NiParticleSystem parent of this modifier.
		// \param[in] value The new value.
		void SetTarget( NiParticleSystem * value );

		// Whether the modifier is currently in effect?  Usually true.
		// \return The current value.
		bool GetActive() const;

		// Whether the modifier is currently in effect?  Usually true.
		// \param[in] value The new value.
		void SetActive( bool value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	protected:
		/*! The object name. */
		IndexString name;
		/*! Modifier ID in the particle modifier chain (always a multiple of 1000)? */
		unsigned int order;
		/*! NiParticleSystem parent of this modifier. */
		NiParticleSystem * target;
		/*! Whether the modifier is currently in effect?  Usually true. */
		bool active;
	public:
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual void Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info);
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual void Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const;
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual void FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info);
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual list<NiObjectRef> GetRefs() const;
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual list<NiObject *> GetPtrs() const;
	};

	//--BEGIN FILE FOOT CUSTOM CODE--//
	//--END CUSTOM CODE--//
} //End Niflib namespace
#endif
