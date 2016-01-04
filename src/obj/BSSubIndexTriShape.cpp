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
#include "../../include/obj/BSSubIndexTriShape.h"
#include "../../include/gen/BSSITSSegment.h"
#include "../../include/gen/BSSITSSubSegment.h"
#include "../../include/gen/BSSIMaterialSection.h"
#include "../../include/gen/BSSIMaterial.h"
using namespace Niflib;

//Definition of TYPE constant
const Type BSSubIndexTriShape::TYPE("BSSubIndexTriShape", &BSTriShape::TYPE);

BSSubIndexTriShape::BSSubIndexTriShape() : numTriangles2((unsigned int) 0), numSegments((unsigned int) 0), numMaterials((unsigned int) 0)
{
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

BSSubIndexTriShape::~BSSubIndexTriShape()
{
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & BSSubIndexTriShape::GetType() const
{
	return TYPE;
}

NiObject * BSSubIndexTriShape::Create()
{
	return new BSSubIndexTriShape;
}

void BSSubIndexTriShape::Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info)
{
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	BSTriShape::Read(in, link_stack, info);
	if((dataSize > 0))
	{
		NifStream(numTriangles2, in, info);
		NifStream(numSegments, in, info);
		NifStream(numMaterials, in, info);
		segments.resize(numSegments);
		for(unsigned int i2 = 0; i2 < segments.size(); i2++)
		{
			NifStream(segments[i2].triangleOffset, in, info);
			NifStream(segments[i2].triangleCount, in, info);
			NifStream(segments[i2].materialHash, in, info);
			NifStream(segments[i2].numRecords, in, info);
			segments[i2].subIndexRecord.resize(segments[i2].numRecords);
			for(unsigned int i3 = 0; i3 < segments[i2].subIndexRecord.size(); i3++)
			{
				NifStream(segments[i2].subIndexRecord[i3].triangleOffset, in, info);
				NifStream(segments[i2].subIndexRecord[i3].triangleCount, in, info);
				NifStream(segments[i2].subIndexRecord[i3].segmentOffset, in, info);
				NifStream(segments[i2].subIndexRecord[i3].unknownInt1, in, info);
			};
		};
	};
	if(((numSegments < numMaterials) && (dataSize > 0)))
	{
		NifStream(materialSections.numSegments, in, info);
		NifStream(materialSections.numMaterials, in, info);
		materialSections.emptyMaterials.resize(materialSections.numSegments);
		for(unsigned int i2 = 0; i2 < materialSections.emptyMaterials.size(); i2++)
		{
			NifStream(materialSections.emptyMaterials[i2], in, info);
		};
		materialSections.materials.resize(materialSections.numMaterials);
		for(unsigned int i2 = 0; i2 < materialSections.materials.size(); i2++)
		{
			NifStream(materialSections.materials[i2].bodyPartIndex, in, info);
			NifStream(materialSections.materials[i2].materialHash, in, info);
			NifStream(materialSections.materials[i2].numData, in, info);
			materialSections.materials[i2].extraData.resize(materialSections.materials[i2].numData);
			for(unsigned int i3 = 0; i3 < materialSections.materials[i2].extraData.size(); i3++)
			{
				NifStream(materialSections.materials[i2].extraData[i3], in, info);
			};
		};
		NifStream(materialSections.ssfLength, in, info);
		materialSections.ssfFile.resize(materialSections.ssfLength);
		for(unsigned int i2 = 0; i2 < materialSections.ssfFile.size(); i2++)
		{
			NifStream(materialSections.ssfFile[i2], in, info);
		};
	};

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSSubIndexTriShape::Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const
{
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	BSTriShape::Write(out, link_map, missing_link_stack, info);
	numMaterials = numMaterialsCalc(info);
	numSegments = (unsigned int) (segments.size());
	numTriangles2 = numTriangles2Calc(info);
	if((dataSize > 0))
	{
		NifStream(numTriangles2, out, info);
		NifStream(numSegments, out, info);
		NifStream(numMaterials, out, info);
		for(unsigned int i2 = 0; i2 < segments.size(); i2++)
		{
			segments[i2].numRecords = (unsigned int) (segments[i2].subIndexRecord.size());
			NifStream(segments[i2].triangleOffset, out, info);
			NifStream(segments[i2].triangleCount, out, info);
			NifStream(segments[i2].materialHash, out, info);
			NifStream(segments[i2].numRecords, out, info);
			for(unsigned int i3 = 0; i3 < segments[i2].subIndexRecord.size(); i3++)
			{
				NifStream(segments[i2].subIndexRecord[i3].triangleOffset, out, info);
				NifStream(segments[i2].subIndexRecord[i3].triangleCount, out, info);
				NifStream(segments[i2].subIndexRecord[i3].segmentOffset, out, info);
				NifStream(segments[i2].subIndexRecord[i3].unknownInt1, out, info);
			};
		};
	};
	if(((numSegments < numMaterials) && (dataSize > 0)))
	{
		materialSections.ssfLength = (unsigned short) (materialSections.ssfFile.size());
		materialSections.numMaterials = (unsigned int) (materialSections.materials.size());
		materialSections.numSegments = (unsigned int) (materialSections.emptyMaterials.size());
		NifStream(materialSections.numSegments, out, info);
		NifStream(materialSections.numMaterials, out, info);
		for(unsigned int i2 = 0; i2 < materialSections.emptyMaterials.size(); i2++)
		{
			NifStream(materialSections.emptyMaterials[i2], out, info);
		};
		for(unsigned int i2 = 0; i2 < materialSections.materials.size(); i2++)
		{
			materialSections.materials[i2].numData = (unsigned int) (materialSections.materials[i2].extraData.size());
			NifStream(materialSections.materials[i2].bodyPartIndex, out, info);
			NifStream(materialSections.materials[i2].materialHash, out, info);
			NifStream(materialSections.materials[i2].numData, out, info);
			for(unsigned int i3 = 0; i3 < materialSections.materials[i2].extraData.size(); i3++)
			{
				NifStream(materialSections.materials[i2].extraData[i3], out, info);
			};
		};
		NifStream(materialSections.ssfLength, out, info);
		for(unsigned int i2 = 0; i2 < materialSections.ssfFile.size(); i2++)
		{
			NifStream(materialSections.ssfFile[i2], out, info);
		};
	};

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string BSSubIndexTriShape::asString(bool verbose) const
{
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << BSTriShape::asString(verbose);
	numSegments = (unsigned int) (segments.size());
	if((dataSize > 0))
	{
		out << "    Num Triangles 2:  " << numTriangles2 << endl;
		out << "    Num Segments:  " << numSegments << endl;
		out << "    Num Materials:  " << numMaterials << endl;
		array_output_count = 0;
		for(unsigned int i2 = 0; i2 < segments.size(); i2++)
		{
			if(!verbose && (array_output_count > MAXARRAYDUMP))
			{
				out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
				break;
			};
			segments[i2].numRecords = (unsigned int) (segments[i2].subIndexRecord.size());
			out << "      Triangle Offset:  " << segments[i2].triangleOffset << endl;
			out << "      Triangle Count:  " << segments[i2].triangleCount << endl;
			out << "      Material Hash:  " << segments[i2].materialHash << endl;
			out << "      Num Records:  " << segments[i2].numRecords << endl;
			array_output_count = 0;
			for(unsigned int i3 = 0; i3 < segments[i2].subIndexRecord.size(); i3++)
			{
				if(!verbose && (array_output_count > MAXARRAYDUMP))
				{
					out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
					break;
				};
				out << "        Triangle Offset:  " << segments[i2].subIndexRecord[i3].triangleOffset << endl;
				out << "        Triangle Count:  " << segments[i2].subIndexRecord[i3].triangleCount << endl;
				out << "        Segment Offset:  " << segments[i2].subIndexRecord[i3].segmentOffset << endl;
				out << "        Unknown Int 1:  " << segments[i2].subIndexRecord[i3].unknownInt1 << endl;
			};
		};
	};
	if(((numSegments < numMaterials) && (dataSize > 0)))
	{
		materialSections.ssfLength = (unsigned short) (materialSections.ssfFile.size());
		materialSections.numMaterials = (unsigned int) (materialSections.materials.size());
		materialSections.numSegments = (unsigned int) (materialSections.emptyMaterials.size());
		out << "    Num Segments:  " << materialSections.numSegments << endl;
		out << "    Num Materials:  " << materialSections.numMaterials << endl;
		array_output_count = 0;
		for(unsigned int i2 = 0; i2 < materialSections.emptyMaterials.size(); i2++)
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
			out << "      Empty Materials[" << i2 << "]:  " << materialSections.emptyMaterials[i2] << endl;
			array_output_count++;
		};
		array_output_count = 0;
		for(unsigned int i2 = 0; i2 < materialSections.materials.size(); i2++)
		{
			if(!verbose && (array_output_count > MAXARRAYDUMP))
			{
				out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
				break;
			};
			materialSections.materials[i2].numData = (unsigned int) (materialSections.materials[i2].extraData.size());
			out << "      Body Part Index:  " << materialSections.materials[i2].bodyPartIndex << endl;
			out << "      Material Hash:  " << materialSections.materials[i2].materialHash << endl;
			out << "      Num Data:  " << materialSections.materials[i2].numData << endl;
			array_output_count = 0;
			for(unsigned int i3 = 0; i3 < materialSections.materials[i2].extraData.size(); i3++)
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
				out << "        Extra Data[" << i3 << "]:  " << materialSections.materials[i2].extraData[i3] << endl;
				array_output_count++;
			};
		};
		out << "    SSF Length:  " << materialSections.ssfLength << endl;
		array_output_count = 0;
		for(unsigned int i2 = 0; i2 < materialSections.ssfFile.size(); i2++)
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
			out << "      SSF File[" << i2 << "]:  " << materialSections.ssfFile[i2] << endl;
			array_output_count++;
		};
	};
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSSubIndexTriShape::FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info)
{
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	BSTriShape::FixLinks(objects, link_stack, missing_link_stack, info);

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> BSSubIndexTriShape::GetRefs() const
{
	list<Ref<NiObject> > refs;
	refs = BSTriShape::GetRefs();
	return refs;
}

std::list<NiObject *> BSSubIndexTriShape::GetPtrs() const
{
	list<NiObject *> ptrs;
	ptrs = BSTriShape::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

unsigned int BSSubIndexTriShape::GetNumTriangles2() const {
return numTriangles2;
}

void BSSubIndexTriShape::SetNumTriangles2( unsigned int value ) {
numTriangles2 = value;
}

unsigned int BSSubIndexTriShape::GetNumMaterials() const {
return numMaterials;
}

void BSSubIndexTriShape::SetNumMaterials( unsigned int value ) {
numMaterials = value;
}

vector<BSSITSSegment > BSSubIndexTriShape::GetSegments() const {
return segments;
}

void BSSubIndexTriShape::SetSegments( const vector<BSSITSSegment >& value ) {
segments = value;
}

BSSIMaterialSection BSSubIndexTriShape::GetMaterialSections() const {
return materialSections;
}

void BSSubIndexTriShape::SetMaterialSections( const BSSIMaterialSection & value ) {
materialSections = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//

unsigned int BSSubIndexTriShape::numTriangles2Calc(const NifInfo info) const
{
	return numTriangles;
}

unsigned int BSSubIndexTriShape::numMaterialsCalc(const NifInfo info) const
{
	return numMaterials = materialSections.numMaterials = materialSections.materials.size();
}

const vector<BSSITSSegment>& BSSubIndexTriShape::GetSegments() const
{
	return segments;
}

void BSSubIndexTriShape::SetSegments(const vector<BSSITSSegment >& value)
{
	segments = value;
}

const BSSIMaterialSection& BSSubIndexTriShape::GetMaterialSections() const
{
	return materialSections;
}

void BSSubIndexTriShape::SetMaterialSections(const BSSIMaterialSection & value)
{
	materialSections = value;
}

// return triangle list
vector<Triangle> BSSubIndexTriShape::GetTriangles(int segment) const
{
	int offset = segments[segment].triangleOffset / 3;
	int count = segments[segment].triangleCount;
	vector<Triangle>::const_iterator tristart = this->triangles.begin();
	std::advance(tristart, offset);
	vector<Triangle>::const_iterator triend = tristart;
	std::advance(triend, count);
	return vector<Triangle>(tristart, triend);
}

// return triangle list
vector<Triangle> BSSubIndexTriShape::GetTriangles(int segment, int subindex) const
{
	int offset = segments[segment].subIndexRecord[subindex].triangleOffset / 3;
	int count = segments[segment].subIndexRecord[subindex].triangleCount;
	vector<Triangle>::const_iterator tristart = this->triangles.begin();
	std::advance(tristart, offset);
	vector<Triangle>::const_iterator triend = tristart;
	std::advance(triend, count);
	return vector<Triangle>(tristart, triend);
}

string BSSubIndexTriShape::GetSSF() const
{
	return string((char*) &materialSections.ssfFile[0], materialSections.ssfFile.size());
}

void BSSubIndexTriShape::SetSSF(const string& value)
{
	materialSections.ssfFile.resize(value.size());
	memcpy(&materialSections.ssfFile[0], &value[0], value.size());
	materialSections.ssfLength = value.size();
}

//--END CUSTOM CODE--//