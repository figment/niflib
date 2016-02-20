/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "../../include/FixLink.h"
#include "../../include/ObjectRegistry.h"
#include "../../include/NIF_IO.h"
#include "../../include/obj/BSSkin__BoneData.h"
#include "../../include/gen/BSSkinBoneTrans.h"
#include "../../include/gen/SphereBV.h"
using namespace Niflib;

//Definition of TYPE constant
const Type BSSkin__BoneData::TYPE("BSSkin::BoneData", &NiObject::TYPE);

BSSkin__BoneData::BSSkin__BoneData() : numBones((unsigned int) 0)
{
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

BSSkin__BoneData::~BSSkin__BoneData()
{
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & BSSkin__BoneData::GetType() const
{
	return TYPE;
}

NiObject * BSSkin__BoneData::Create()
{
	return new BSSkin__BoneData;
}

void BSSkin__BoneData::Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info)
{
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiObject::Read(in, link_stack, info);
	NifStream(numBones, in, info);
	bones.resize(numBones);
	for(unsigned int i1 = 0; i1 < bones.size(); i1++)
	{
		NifStream(bones[i1].bounds.center, in, info);
		NifStream(bones[i1].bounds.radius, in, info);
		NifStream(bones[i1].rotation, in, info);
		NifStream(bones[i1].translation, in, info);
		NifStream(bones[i1].scale, in, info);
	};

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSSkin__BoneData::Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const
{
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiObject::Write(out, link_map, missing_link_stack, info);
	numBones = (unsigned int) (bones.size());
	NifStream(numBones, out, info);
	for(unsigned int i1 = 0; i1 < bones.size(); i1++)
	{
		NifStream(bones[i1].bounds.center, out, info);
		NifStream(bones[i1].bounds.radius, out, info);
		NifStream(bones[i1].rotation, out, info);
		NifStream(bones[i1].translation, out, info);
		NifStream(bones[i1].scale, out, info);
	};

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string BSSkin__BoneData::asString(bool verbose) const
{
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << NiObject::asString(verbose);
	numBones = (unsigned int) (bones.size());
	out << "  Num Bones:  " << numBones << endl;
	array_output_count = 0;
	for(unsigned int i1 = 0; i1 < bones.size(); i1++)
	{
		if(!verbose && (array_output_count > MAXARRAYDUMP))
		{
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		out << "    Center:  " << bones[i1].bounds.center << endl;
		out << "    Radius:  " << bones[i1].bounds.radius << endl;
		out << "    Rotation:  " << bones[i1].rotation << endl;
		out << "    Translation:  " << bones[i1].translation << endl;
		out << "    Scale:  " << bones[i1].scale << endl;
	};
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSSkin__BoneData::FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info)
{
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiObject::FixLinks(objects, link_stack, missing_link_stack, info);

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> BSSkin__BoneData::GetRefs() const
{
	list<Ref<NiObject> > refs;
	refs = NiObject::GetRefs();
	return refs;
}

std::list<NiObject *> BSSkin__BoneData::GetPtrs() const
{
	list<NiObject *> ptrs;
	ptrs = NiObject::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

vector<BSSkinBoneTrans > BSSkin::BoneData::GetBones() const {
return bones;
}

void BSSkin::BoneData::SetBones( const vector<BSSkinBoneTrans >& value ) {
bones = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//

Matrix44 BSSkin__BoneData::GetOverallTransform() const
{
	//return Matrix44(skinTransform.translation, skinTransform.rotation, skinTransform.scale);
	return Matrix44::IDENTITY;
}

void BSSkin__BoneData::SetOverallTransform(const Matrix44 & transform)
{
	//transform.Decompose(skinTransform.translation, skinTransform.rotation, skinTransform.scale);
}

vector<BSSkinBoneTrans > BSSkin__BoneData::GetBones() const
{
	return bones;
}

void BSSkin__BoneData::SetBoneTransforms(const vector<BSSkinBoneTrans >& value)
{
	bones = value;
}

unsigned int BSSkin__BoneData::GetBoneCount() const
{
	return (unsigned int) (bones.size());
}

Matrix44 BSSkin__BoneData::GetBoneTransform(unsigned int bone_index) const
{
	if(bone_index > bones.size())
	{
		throw runtime_error("The specified bone index was larger than the number of bones in this BSSkin::BoneData.");
	}
	return Matrix44(bones[bone_index].translation
		, bones[bone_index].rotation
		, bones[bone_index].scale);
}

//--END CUSTOM CODE--//