/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIDATASTREAM_H_
#define _NIDATASTREAM_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "NiObject.h"

// Include structures
#include "../gen/Region.h"
namespace Niflib
{
	class NiDataStream;
	typedef Ref<NiDataStream> NiDataStreamRef;

	/*!  */
	class NiDataStream : public NiObject
	{
	public:
		/*! Constructor */
		NIFLIB_API NiDataStream();

		/*! Destructor */
		NIFLIB_API virtual ~NiDataStream();

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

		// Unknown.
		// \return The current value.
		DataStreamUsage GetUsage() const;

		// Unknown.
		// \param[in] value The new value.
		void SetUsage( const DataStreamUsage & value );

		// Unknown.
		// \return The current value.
		DataStreamAccess GetAccess() const;

		// Unknown.
		// \param[in] value The new value.
		void SetAccess( const DataStreamAccess & value );

		// Unknown.
		// \return The current value.
		CloningBehavior GetCloningBehavior() const;

		// Unknown.
		// \param[in] value The new value.
		void SetCloningBehavior( const CloningBehavior & value );

		// The regions in the mesh. Regions can be used to mark off submeshes which are
		// independent draw calls.
		// \return The current value.
		vector<Region > GetRegions() const;

		// The regions in the mesh. Regions can be used to mark off submeshes which are
		// independent draw calls.
		// \param[in] value The new value.
		void SetRegions( const vector<Region >& value );

		// The format of each component in this data stream.
		// \return The current value.
		vector<ComponentFormat > GetComponentFormats() const;

		// The format of each component in this data stream.
		// \param[in] value The new value.
		void SetComponentFormats( const vector<ComponentFormat >& value );

		// Unknown.
		// \return The current value.
		vector<byte > GetData() const;

		// Unknown.
		// \param[in] value The new value.
		void SetData( const vector<byte >& value );

		// Unknown.
		// \return The current value.
		bool GetStreamable() const;

		// Unknown.
		// \param[in] value The new value.
		void SetStreamable( bool value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	protected:
		/*! Unknown. */
		DataStreamUsage usage;
		/*! Unknown. */
		DataStreamAccess access;
		/*! The size in bytes of this data stream. */
		mutable unsigned int numBytes;
		/*! Unknown. */
		CloningBehavior cloningBehavior;
		/*! Number of regions (such as submeshes). */
		mutable unsigned int numRegions;
		/*!
		 * The regions in the mesh. Regions can be used to mark off submeshes which are
		 * independent draw calls.
		 */
		vector<Region > regions;
		/*! Number of components of the data (matches corresponding field in MeshData). */
		mutable unsigned int numComponents;
		/*! The format of each component in this data stream. */
		vector<ComponentFormat > componentFormats;
		/*! Unknown. */
		vector<byte > data;
		/*! Unknown. */
		bool streamable;
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
