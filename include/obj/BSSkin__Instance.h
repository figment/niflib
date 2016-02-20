/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BSSKIN__INSTANCE_H_
#define _BSSKIN__INSTANCE_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "NiObject.h"

// Include structures
#include "../Ref.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class BSSkin__BoneData;
	class NiNode;
	class BSSkin__Instance;
	typedef Ref<BSSkin__Instance> BSSkin__InstanceRef;

	/*! Fallout 4 Skin Instance */
	class BSSkin__Instance : public NiObject
	{
	public:
		/*! Constructor */
		NIFLIB_API BSSkin__Instance();

		/*! Destructor */
		NIFLIB_API virtual ~BSSkin__Instance();

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
		Ref<BSSkin__BoneData > GetBoneData() const;

		// Unknown.
		// \param[in] value The new value.
		void SetBoneData( Ref<BSSkin__BoneData > value );

		// Unknown.
		// \return The current value.
		vector<NiNode * > GetBones() const;

		// Unknown.
		// \param[in] value The new value.
		void SetBones( const vector<NiNode * >& value );

		// default : 0.0f,1.0f,1.0f
		// \return The current value.
		vector<Vector3 > GetVector31() const;

		// default : 0.0f,1.0f,1.0f
		// \param[in] value The new value.
		void SetVector31( const vector<Vector3 >& value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		// Unknown.
		// \return The current value.
		Ref<BSSkin__BoneData> GetBoneData() const;

		// Unknown.
		// \param[in] value The new value.
		void SetBoneData(Ref<BSSkin__BoneData > value);

		// Unknown.
		// \return The current value.
		vector<Ref<NiNode>> GetBones() const;

		// Unknown.
		// \param[in] value The new value.
		void SetBones(const vector<Ref<NiNode> >& value);

		//--END CUSTOM CODE--//
	protected:
		/*! Unknown. */
		unsigned int unknownInt1;
		/*! Unknown. */
		Ref<BSSkin__BoneData > boneData;
		/*! Unknown. */
		mutable unsigned int numBones;
		/*! Unknown. */
		vector<NiNode * > bones;
		/*! Unknown. */
		mutable unsigned int numVector31;
		/*! default : 0.0f,1.0f,1.0f */
		vector<Vector3 > vector31;
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
