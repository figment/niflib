/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BSPSYSSUBTEXMODIFIER_H_
#define _BSPSYSSUBTEXMODIFIER_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "NiPSysModifier.h"
namespace Niflib
{
	class BSPSysSubTexModifier;
	typedef Ref<BSPSysSubTexModifier> BSPSysSubTexModifierRef;

	/*!
	 * Similar to a Flip Controller, this handles particle texture animation on a
	 * single texture atlas
	 */
	class BSPSysSubTexModifier : public NiPSysModifier
	{
	public:
		/*! Constructor */
		NIFLIB_API BSPSysSubTexModifier();

		/*! Destructor */
		NIFLIB_API virtual ~BSPSysSubTexModifier();

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

		// Starting frame/position on atlas
		// \return The current value.
		unsigned int GetStartFrame() const;

		// Starting frame/position on atlas
		// \param[in] value The new value.
		void SetStartFrame( unsigned int value );

		// Random chance to start on a different frame?
		// \return The current value.
		float GetStartFrameFudge() const;

		// Random chance to start on a different frame?
		// \param[in] value The new value.
		void SetStartFrameFudge( float value );

		// Ending frame/position on atlas
		// \return The current value.
		float GetEndFrame() const;

		// Ending frame/position on atlas
		// \param[in] value The new value.
		void SetEndFrame( float value );

		// Frame to start looping
		// \return The current value.
		float GetLoopStartFrame() const;

		// Frame to start looping
		// \param[in] value The new value.
		void SetLoopStartFrame( float value );

		// Unknown.
		// \return The current value.
		float GetLoopStartFrameFudge() const;

		// Unknown.
		// \param[in] value The new value.
		void SetLoopStartFrameFudge( float value );

		// Unknown
		// \return The current value.
		float GetFrameCount() const;

		// Unknown
		// \param[in] value The new value.
		void SetFrameCount( float value );

		// Unknown
		// \return The current value.
		float GetFrameCountFudge() const;

		// Unknown
		// \param[in] value The new value.
		void SetFrameCountFudge( float value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	protected:
		/*! Starting frame/position on atlas */
		unsigned int startFrame;
		/*! Random chance to start on a different frame? */
		float startFrameFudge;
		/*! Ending frame/position on atlas */
		float endFrame;
		/*! Frame to start looping */
		float loopStartFrame;
		/*! Unknown. */
		float loopStartFrameFudge;
		/*! Unknown */
		float frameCount;
		/*! Unknown */
		float frameCountFudge;
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
