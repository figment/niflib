/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIEXTRADATA_H_
#define _NIEXTRADATA_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "NiObject.h"

// Include structures
#include "../Ref.h"
namespace Niflib
{
	class NiExtraData;
	typedef Ref<NiExtraData> NiExtraDataRef;

	/*! A generic extra data object. */
	class NiExtraData : public NiObject
	{
	public:
		/*! Constructor */
		NIFLIB_API NiExtraData();

		/*! Destructor */
		NIFLIB_API virtual ~NiExtraData();

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

		// Name of this object.
		// \return The current value.
		IndexString GetName() const;

		// Name of this object.
		// \param[in] value The new value.
		void SetName( const IndexString & value );

		// Block number of the next extra data object.
		// \return The current value.
		Ref<NiExtraData > GetNextExtraData() const;

		// Block number of the next extra data object.
		// \param[in] value The new value.
		void SetNextExtraData( Ref<NiExtraData > value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		/*!
		 * Retrieve the name of this NiExtraData object.  Names are only stored
		 * in later version NIF files so this may not be necessary depending on
		 * the target version.
		 * \return The name of this NiExtraData object.
		 */
		NIFLIB_API string GetName();

		/*!
		 * Sets the name of this NiExtraData object.  Will only be written to later
		 * version NIF files.
		 * \param new_name The new name for this NiExtraData object.
		 */
		NIFLIB_API void SetName(const string & new_name);

		/*!
		 * Formats a human readable string that includes the type of the object
		 * \return A string in the form:  address(type) {name}
		 */
		NIFLIB_API virtual string GetIDString() const;

		/*!
		 * NIFLIB HIDDEN function.  For internal use only.
		 * Returns a reference to the next extra data used in early version NIF
		 * files which store extra data in a linked list.  This function should
		 * only be called by NiObjectNET as it is not always meaningful.
		 * \return A reference to the next extra data in early version NIF files.  May not always be meaningful.
		 */
		NIFLIB_HIDDEN NiExtraDataRef GetNextExtraData() const;

		/*!
		 * NIFLIB HIDDEN function.  For internal use only.
		 * Sets the next extra data in early version NIF files which store extra
		 * data in a linked list.  This function should only be called by
		 * NiObjectNET.
		 * \param obj A reference to the object to set as the one after this in the chain.
		 */
		NIFLIB_HIDDEN void SetNextExtraData(NiExtraData * obj);

		//--END CUSTOM CODE--//
	protected:
		/*! Name of this object. */
		IndexString name;
		/*! Block number of the next extra data object. */
		Ref<NiExtraData > nextExtraData;
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
