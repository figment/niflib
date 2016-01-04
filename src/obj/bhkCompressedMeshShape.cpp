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
#include "../../include/obj/bhkCompressedMeshShape.h"
#include "../../include/obj/NiAVObject.h"
#include "../../include/obj/bhkCompressedMeshShapeData.h"
using namespace Niflib;

//Definition of TYPE constant
const Type bhkCompressedMeshShape::TYPE("bhkCompressedMeshShape", &bhkShape::TYPE);

bhkCompressedMeshShape::bhkCompressedMeshShape() : target(NULL), skyrimMaterial((SkyrimHavokMaterial) 0), unknownFloat1(0.0050f), unknownInt1((int) 0), unknownFloats1(1.0, 1.0, 1.0, 0.0), radius(0.0f), scale(1.0f), unknownFloat3(1.0f), unknownFloat4(1.0f), unknownFloat5(0.0f), data(NULL)
{
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

bhkCompressedMeshShape::~bhkCompressedMeshShape()
{
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & bhkCompressedMeshShape::GetType() const
{
	return TYPE;
}

NiObject * bhkCompressedMeshShape::Create()
{
	return new bhkCompressedMeshShape;
}

void bhkCompressedMeshShape::Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info)
{
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	unsigned int block_num;
	bhkShape::Read(in, link_stack, info);
	NifStream(block_num, in, info);
	link_stack.push_back(block_num);
	NifStream(skyrimMaterial, in, info);
	NifStream(unknownFloat1, in, info);
	NifStream(unknownInt1, in, info);
	NifStream(unknownFloats1, in, info);
	NifStream(radius, in, info);
	NifStream(scale, in, info);
	NifStream(unknownFloat3, in, info);
	NifStream(unknownFloat4, in, info);
	NifStream(unknownFloat5, in, info);
	NifStream(block_num, in, info);
	link_stack.push_back(block_num);

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void bhkCompressedMeshShape::Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const
{
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	bhkShape::Write(out, link_map, missing_link_stack, info);
	if(info.version < VER_3_3_0_13)
	{
		WritePtr32(&(*target), out);
	}
	else
	{
		if(target != NULL)
		{
			map<NiObjectRef, unsigned int>::const_iterator it = link_map.find(StaticCast<NiObject>(target));
			if(it != link_map.end())
			{
				NifStream(it->second, out, info);
				missing_link_stack.push_back(NULL);
			}
			else
			{
				NifStream(0xFFFFFFFF, out, info);
				missing_link_stack.push_back(target);
			}
		}
		else
		{
			NifStream(0xFFFFFFFF, out, info);
			missing_link_stack.push_back(NULL);
		}
	}
	NifStream(skyrimMaterial, out, info);
	NifStream(unknownFloat1, out, info);
	NifStream(unknownInt1, out, info);
	NifStream(unknownFloats1, out, info);
	NifStream(radius, out, info);
	NifStream(scale, out, info);
	NifStream(unknownFloat3, out, info);
	NifStream(unknownFloat4, out, info);
	NifStream(unknownFloat5, out, info);
	if(info.version < VER_3_3_0_13)
	{
		WritePtr32(&(*data), out);
	}
	else
	{
		if(data != NULL)
		{
			map<NiObjectRef, unsigned int>::const_iterator it = link_map.find(StaticCast<NiObject>(data));
			if(it != link_map.end())
			{
				NifStream(it->second, out, info);
				missing_link_stack.push_back(NULL);
			}
			else
			{
				NifStream(0xFFFFFFFF, out, info);
				missing_link_stack.push_back(data);
			}
		}
		else
		{
			NifStream(0xFFFFFFFF, out, info);
			missing_link_stack.push_back(NULL);
		}
	}

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string bhkCompressedMeshShape::asString(bool verbose) const
{
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	out << bhkShape::asString(verbose);
	out << "  Target:  " << target << endl;
	out << "  Skyrim Material:  " << skyrimMaterial << endl;
	out << "  Unknown Float 1:  " << unknownFloat1 << endl;
	out << "  Unknown Int 1:  " << unknownInt1 << endl;
	out << "  Unknown Floats 1:  " << unknownFloats1 << endl;
	out << "  Radius:  " << radius << endl;
	out << "  Scale:  " << scale << endl;
	out << "  Unknown Float 3:  " << unknownFloat3 << endl;
	out << "  Unknown Float 4:  " << unknownFloat4 << endl;
	out << "  Unknown Float 5:  " << unknownFloat5 << endl;
	out << "  Data:  " << data << endl;
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void bhkCompressedMeshShape::FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info)
{
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	bhkShape::FixLinks(objects, link_stack, missing_link_stack, info);
	target = FixLink<NiAVObject>(objects, link_stack, missing_link_stack, info);
	data = FixLink<bhkCompressedMeshShapeData>(objects, link_stack, missing_link_stack, info);

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> bhkCompressedMeshShape::GetRefs() const
{
	list<Ref<NiObject> > refs;
	refs = bhkShape::GetRefs();
	if(data != NULL)
		refs.push_back(StaticCast<NiObject>(data));
	return refs;
}

std::list<NiObject *> bhkCompressedMeshShape::GetPtrs() const
{
	list<NiObject *> ptrs;
	ptrs = bhkShape::GetPtrs();
	if(target != NULL)
		ptrs.push_back((NiObject *) (target));
	return ptrs;
}

/***Begin Example Naive Implementation****

NiAVObject * bhkCompressedMeshShape::GetTarget() const {
return target;
}

void bhkCompressedMeshShape::SetTarget( NiAVObject * value ) {
target = value;
}

SkyrimHavokMaterial bhkCompressedMeshShape::GetSkyrimMaterial() const {
return skyrimMaterial;
}

void bhkCompressedMeshShape::SetSkyrimMaterial( const SkyrimHavokMaterial & value ) {
skyrimMaterial = value;
}

float bhkCompressedMeshShape::GetRadius() const {
return radius;
}

void bhkCompressedMeshShape::SetRadius( float value ) {
radius = value;
}

float bhkCompressedMeshShape::GetScale() const {
return scale;
}

void bhkCompressedMeshShape::SetScale( float value ) {
scale = value;
}

Ref<bhkCompressedMeshShapeData > bhkCompressedMeshShape::GetData() const {
return data;
}

void bhkCompressedMeshShape::SetData( Ref<bhkCompressedMeshShapeData > value ) {
data = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//

NiAVObject * bhkCompressedMeshShape::GetTarget() const
{
	return target;
}

void bhkCompressedMeshShape::SetTarget(NiAVObject * value)
{
	target = value;
}

SkyrimHavokMaterial bhkCompressedMeshShape::GetSkyrimMaterial() const
{
	return skyrimMaterial;
}

void bhkCompressedMeshShape::SetSkyrimMaterial(SkyrimHavokMaterial value)
{
	skyrimMaterial = value;
}

float bhkCompressedMeshShape::GetRadius() const
{
	return radius;
}

void bhkCompressedMeshShape::SetRadius(float value)
{
	radius = value;
}

float bhkCompressedMeshShape::GetScale() const
{
	return scale;
}

void bhkCompressedMeshShape::SetScale(float value)
{
	scale = value;
}

bhkCompressedMeshShapeDataRef bhkCompressedMeshShape::GetData() const
{
	return data;
}

void bhkCompressedMeshShape::SetData(bhkCompressedMeshShapeDataRef value)
{
	data = value;
}

//--END CUSTOM CODE--//