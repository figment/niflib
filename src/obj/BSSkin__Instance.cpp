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
#include "../../include/obj/BSSkin__Instance.h"
#include "../../include/obj/BSSkin__BoneData.h"
#include "../../include/obj/NiNode.h"
using namespace Niflib;

//Definition of TYPE constant
const Type BSSkin__Instance::TYPE("BSSkin::Instance", &NiObject::TYPE);

BSSkin__Instance::BSSkin__Instance() : unknownInt1((unsigned int) 0), boneData(NULL), numBones((unsigned int) 0), numVector31((unsigned int) 0)
{
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

BSSkin__Instance::~BSSkin__Instance()
{
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & BSSkin__Instance::GetType() const
{
	return TYPE;
}

NiObject * BSSkin__Instance::Create()
{
	return new BSSkin__Instance;
}

void BSSkin__Instance::Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info)
{
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	unsigned int block_num;
	NiObject::Read(in, link_stack, info);
	NifStream(unknownInt1, in, info);
	NifStream(block_num, in, info);
	link_stack.push_back(block_num);
	NifStream(numBones, in, info);
	bones.resize(numBones);
	for(unsigned int i1 = 0; i1 < bones.size(); i1++)
	{
		NifStream(block_num, in, info);
		link_stack.push_back(block_num);
	};
	NifStream(numVector31, in, info);
	vector31.resize(numVector31);
	for(unsigned int i1 = 0; i1 < vector31.size(); i1++)
	{
		NifStream(vector31[i1], in, info);
	};

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSSkin__Instance::Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const
{
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiObject::Write(out, link_map, missing_link_stack, info);
	numVector31 = (unsigned int) (vector31.size());
	numBones = (unsigned int) (bones.size());
	NifStream(unknownInt1, out, info);
	if(info.version < VER_3_3_0_13)
	{
		WritePtr32(&(*boneData), out);
	}
	else
	{
		if(boneData != NULL)
		{
			map<NiObjectRef, unsigned int>::const_iterator it = link_map.find(StaticCast<NiObject>(boneData));
			if(it != link_map.end())
			{
				NifStream(it->second, out, info);
				missing_link_stack.push_back(NULL);
			}
			else
			{
				NifStream(0xFFFFFFFF, out, info);
				missing_link_stack.push_back(boneData);
			}
		}
		else
		{
			NifStream(0xFFFFFFFF, out, info);
			missing_link_stack.push_back(NULL);
		}
	}
	NifStream(numBones, out, info);
	for(unsigned int i1 = 0; i1 < bones.size(); i1++)
	{
		if(info.version < VER_3_3_0_13)
		{
			WritePtr32(&(*bones[i1]), out);
		}
		else
		{
			if(bones[i1] != NULL)
			{
				map<NiObjectRef, unsigned int>::const_iterator it = link_map.find(StaticCast<NiObject>(bones[i1]));
				if(it != link_map.end())
				{
					NifStream(it->second, out, info);
					missing_link_stack.push_back(NULL);
				}
				else
				{
					NifStream(0xFFFFFFFF, out, info);
					missing_link_stack.push_back(bones[i1]);
				}
			}
			else
			{
				NifStream(0xFFFFFFFF, out, info);
				missing_link_stack.push_back(NULL);
			}
		}
	};
	NifStream(numVector31, out, info);
	for(unsigned int i1 = 0; i1 < vector31.size(); i1++)
	{
		NifStream(vector31[i1], out, info);
	};

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string BSSkin__Instance::asString(bool verbose) const
{
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << NiObject::asString(verbose);
	numVector31 = (unsigned int) (vector31.size());
	numBones = (unsigned int) (bones.size());
	out << "  Unknown Int 1:  " << unknownInt1 << endl;
	out << "  Bone Data:  " << boneData << endl;
	out << "  Num Bones:  " << numBones << endl;
	array_output_count = 0;
	for(unsigned int i1 = 0; i1 < bones.size(); i1++)
	{
		if(!verbose && (array_output_count > MAXARRAYDUMP))
		{
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if(!verbose && (array_output_count > MAXARRAYDUMP))
		{
			break;
		};
		out << "    Bones[" << i1 << "]:  " << bones[i1] << endl;
		array_output_count++;
	};
	out << "  Num Vector3 1:  " << numVector31 << endl;
	array_output_count = 0;
	for(unsigned int i1 = 0; i1 < vector31.size(); i1++)
	{
		if(!verbose && (array_output_count > MAXARRAYDUMP))
		{
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if(!verbose && (array_output_count > MAXARRAYDUMP))
		{
			break;
		};
		out << "    Vector3 1[" << i1 << "]:  " << vector31[i1] << endl;
		array_output_count++;
	};
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSSkin__Instance::FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info)
{
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiObject::FixLinks(objects, link_stack, missing_link_stack, info);
	boneData = FixLink<BSSkin__BoneData>(objects, link_stack, missing_link_stack, info);
	for(unsigned int i1 = 0; i1 < bones.size(); i1++)
	{
		bones[i1] = FixLink<NiNode>(objects, link_stack, missing_link_stack, info);
	};

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> BSSkin__Instance::GetRefs() const
{
	list<Ref<NiObject> > refs;
	refs = NiObject::GetRefs();
	if(boneData != NULL)
		refs.push_back(StaticCast<NiObject>(boneData));
	for(unsigned int i1 = 0; i1 < bones.size(); i1++)
	{
	};
	return refs;
}

std::list<NiObject *> BSSkin__Instance::GetPtrs() const
{
	list<NiObject *> ptrs;
	ptrs = NiObject::GetPtrs();
	for(unsigned int i1 = 0; i1 < bones.size(); i1++)
	{
		if(bones[i1] != NULL)
			ptrs.push_back((NiObject *) (bones[i1]));
	};
	return ptrs;
}

/***Begin Example Naive Implementation****

Ref<BSSkin__BoneData > BSSkin::Instance::GetBoneData() const {
return boneData;
}

void BSSkin::Instance::SetBoneData( Ref<BSSkin__BoneData > value ) {
boneData = value;
}

vector<NiNode * > BSSkin::Instance::GetBones() const {
return bones;
}

void BSSkin::Instance::SetBones( const vector<NiNode * >& value ) {
bones = value;
}

vector<Vector3 > BSSkin::Instance::GetVector31() const {
return vector31;
}

void BSSkin::Instance::SetVector31( const vector<Vector3 >& value ) {
vector31 = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//

Ref<BSSkin__BoneData > BSSkin__Instance::GetBoneData() const
{
	return boneData;
}

void BSSkin__Instance::SetBoneData(Ref<BSSkin__BoneData > value)
{
	boneData = value;
}

vector<NiNodeRef > BSSkin__Instance::GetBones() const
{
	vector<NiNodeRef> result;
	result.reserve(bones.size());
	for(vector<NiNode*>::const_iterator itr = bones.begin(); itr != bones.end(); ++itr)
		result.push_back(*itr);
	return result;
}

void BSSkin__Instance::SetBones(const vector<Ref<NiNode> >& value)
{
	//Add the bones to the internal list
	bones.resize(value.size());
	for(unsigned int i = 0; i < value.size(); ++i)
	{
		bones[i] = value[i];
	}

	//Flag any bones that are part of this skin instance
	for(unsigned int i = 0; i < bones.size(); ++i)
	{
		if(bones[i] != nullptr)
		{
			bones[i]->SetSkinFlag(true);
		}
	}
	//bones = value;
}

//--END CUSTOM CODE--//