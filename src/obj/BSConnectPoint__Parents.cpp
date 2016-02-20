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
#include "../../include/obj/BSConnectPoint__Parents.h"
#include "../../include/gen/BSConnectPoint.h"
using namespace Niflib;

//Definition of TYPE constant
const Type BSConnectPoint__Parents::TYPE("BSConnectPoint::Parents", &NiExtraData::TYPE);

BSConnectPoint__Parents::BSConnectPoint__Parents() : numConnectPoints((unsigned int) 0)
{
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

BSConnectPoint__Parents::~BSConnectPoint__Parents()
{
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & BSConnectPoint__Parents::GetType() const
{
	return TYPE;
}

NiObject * BSConnectPoint__Parents::Create()
{
	return new BSConnectPoint__Parents;
}

void BSConnectPoint__Parents::Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info)
{
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiExtraData::Read(in, link_stack, info);
	NifStream(numConnectPoints, in, info);
	connectPoints.resize(numConnectPoints);
	for(unsigned int i1 = 0; i1 < connectPoints.size(); i1++)
	{
		NifStream(connectPoints[i1].root, in, info);
		NifStream(connectPoints[i1].variableName, in, info);
		NifStream(connectPoints[i1].rotation, in, info);
		NifStream(connectPoints[i1].translation, in, info);
		NifStream(connectPoints[i1].scale, in, info);
	};

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSConnectPoint__Parents::Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const
{
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiExtraData::Write(out, link_map, missing_link_stack, info);
	numConnectPoints = (unsigned int) (connectPoints.size());
	NifStream(numConnectPoints, out, info);
	for(unsigned int i1 = 0; i1 < connectPoints.size(); i1++)
	{
		NifStream(connectPoints[i1].root, out, info);
		NifStream(connectPoints[i1].variableName, out, info);
		NifStream(connectPoints[i1].rotation, out, info);
		NifStream(connectPoints[i1].translation, out, info);
		NifStream(connectPoints[i1].scale, out, info);
	};

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string BSConnectPoint__Parents::asString(bool verbose) const
{
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << NiExtraData::asString(verbose);
	numConnectPoints = (unsigned int) (connectPoints.size());
	out << "  Num Connect Points:  " << numConnectPoints << endl;
	array_output_count = 0;
	for(unsigned int i1 = 0; i1 < connectPoints.size(); i1++)
	{
		if(!verbose && (array_output_count > MAXARRAYDUMP))
		{
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		out << "    Root:  " << connectPoints[i1].root << endl;
		out << "    Variable Name:  " << connectPoints[i1].variableName << endl;
		out << "    Rotation:  " << connectPoints[i1].rotation << endl;
		out << "    Translation:  " << connectPoints[i1].translation << endl;
		out << "    Scale:  " << connectPoints[i1].scale << endl;
	};
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSConnectPoint__Parents::FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info)
{
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiExtraData::FixLinks(objects, link_stack, missing_link_stack, info);

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> BSConnectPoint__Parents::GetRefs() const
{
	list<Ref<NiObject> > refs;
	refs = NiExtraData::GetRefs();
	return refs;
}

std::list<NiObject *> BSConnectPoint__Parents::GetPtrs() const
{
	list<NiObject *> ptrs;
	ptrs = NiExtraData::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

vector<BSConnectPoint > BSConnectPoint::Parents::GetConnectPoints() const {
return connectPoints;
}

void BSConnectPoint::Parents::SetConnectPoints( const vector<BSConnectPoint >& value ) {
connectPoints = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//