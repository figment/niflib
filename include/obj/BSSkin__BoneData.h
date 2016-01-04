/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BSSKIN__BONEDATA_H_
#define _BSSKIN__BONEDATA_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "NiObject.h"

// Include structures
#include "../gen/BSSkinBoneTrans.h"
namespace Niflib
{
	class BSSkin__BoneData;
	typedef Ref<BSSkin__BoneData> BSSkin__BoneDataRef;

	/*! Fallout 4 Bone Data */
	class BSSkin__BoneData : public NiObject
	{
	public:
		/*! Constructor */
		NIFLIB_API BSSkin__BoneData();

		/*! Destructor */
		NIFLIB_API virtual ~BSSkin__BoneData();

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
		vector<BSSkinBoneTrans > GetBones() const;

		// Unknown.
		// \param[in] value The new value.
		void SetBones( const vector<BSSkinBoneTrans >& value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		/*!
		* Retrieves the current overall transform for this skin.  This is the transform from the geometry node back to its skeleton root.
		* \return The current overall transform for this skin.
		*/
		NIFLIB_API Matrix44 GetOverallTransform() const;

		/*!
		* Sets the overall transform for this skin.  This is the transform from the geometry node back to the skeleton root.
		* \param[in] transform The new overall transform for this skin.
		*/
		NIFLIB_API void SetOverallTransform(const Matrix44 & transform);

		/*!
		* Retrieves the number of bones influences affecting this skin.  These are NiNodes which cause the skin to deform when they move.
		* \return The number of bonees influencing this skin.
		*/
		NIFLIB_API unsigned int GetBoneCount() const;

		/*!
		* Retrieves the transform for a particular bone.  This is the transform from geometry node back to this bone in skeleton root coordinates.
		* \param[in] bone_index The numeric index of the bone that the transform matrix should be returned for.  Must be >= zero and < the number returned by GetBoneCount.
		* \return The transform matrix for the specified bone.
		*/
		NIFLIB_API Matrix44 GetBoneTransform(unsigned int bone_index) const;

		// Unknown.
		// \return The current value.
		NIFLIB_API vector<BSSkinBoneTrans > GetBones() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetBoneTransforms(const vector<BSSkinBoneTrans >& value);

		//--END CUSTOM CODE--//
	protected:
		/*! Unknown. */
		mutable unsigned int numBones;
		/*! Unknown. */
		vector<BSSkinBoneTrans > bones;
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
