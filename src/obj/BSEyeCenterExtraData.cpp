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
#include "../../include/obj/BSEyeCenterExtraData.h"
using namespace Niflib;

//Definition of TYPE constant
const Type BSEyeCenterExtraData::TYPE("BSEyeCenterExtraData", &NiExtraData::TYPE);

BSEyeCenterExtraData::BSEyeCenterExtraData() : numData((int) 0)
{
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

BSEyeCenterExtraData::~BSEyeCenterExtraData()
{
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & BSEyeCenterExtraData::GetType() const
{
	return TYPE;
}

NiObject * BSEyeCenterExtraData::Create()
{
	return new BSEyeCenterExtraData;
}

void BSEyeCenterExtraData::Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info)
{
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiExtraData::Read(in, link_stack, info);
	NifStream(numData, in, info);
	data.resize(numData);
	for(unsigned int i1 = 0; i1 < data.size(); i1++)
	{
		NifStream(data[i1], in, info);
	};

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSEyeCenterExtraData::Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const
{
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiExtraData::Write(out, link_map, missing_link_stack, info);
	numData = (int) (data.size());
	NifStream(numData, out, info);
	for(unsigned int i1 = 0; i1 < data.size(); i1++)
	{
		NifStream(data[i1], out, info);
	};

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string BSEyeCenterExtraData::asString(bool verbose) const
{
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << NiExtraData::asString(verbose);
	numData = (int) (data.size());
	out << "  Num Data:  " << numData << endl;
	array_output_count = 0;
	for(unsigned int i1 = 0; i1 < data.size(); i1++)
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
		out << "    Data[" << i1 << "]:  " << data[i1] << endl;
		array_output_count++;
	};
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSEyeCenterExtraData::FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info)
{
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiExtraData::FixLinks(objects, link_stack, missing_link_stack, info);

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> BSEyeCenterExtraData::GetRefs() const
{
	list<Ref<NiObject> > refs;
	refs = NiExtraData::GetRefs();
	return refs;
}

std::list<NiObject *> BSEyeCenterExtraData::GetPtrs() const
{
	list<NiObject *> ptrs;
	ptrs = NiExtraData::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

vector<float > BSEyeCenterExtraData::GetData() const {
return data;
}

void BSEyeCenterExtraData::SetData( const vector<float >& value ) {
data = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//