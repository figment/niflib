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
#include "../../include/obj/BSConnectPoint__Children.h"
using namespace Niflib;

//Definition of TYPE constant
const Type BSConnectPoint__Children::TYPE("BSConnectPoint::Children", &NiExtraData::TYPE );

BSConnectPoint__Children::BSConnectPoint__Children() : unknownByte((byte)0), numTargets((int)0) {
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

BSConnectPoint__Children::~BSConnectPoint__Children() {
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & BSConnectPoint__Children::GetType() const {
	return TYPE;
}

NiObject * BSConnectPoint__Children::Create() {
	return new BSConnectPoint__Children;
}

void BSConnectPoint__Children::Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiExtraData::Read( in, link_stack, info );
	NifStream( unknownByte, in, info );
	NifStream( numTargets, in, info );
	target.resize(numTargets);
	for (unsigned int i1 = 0; i1 < target.size(); i1++) {
		NifStream( target[i1], in, info );
	};

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSConnectPoint__Children::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info ) const {
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiExtraData::Write( out, link_map, missing_link_stack, info );
	numTargets = (int)(target.size());
	NifStream( unknownByte, out, info );
	NifStream( numTargets, out, info );
	for (unsigned int i1 = 0; i1 < target.size(); i1++) {
		NifStream( target[i1], out, info );
	};

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string BSConnectPoint__Children::asString( bool verbose ) const {
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << NiExtraData::asString(verbose);
	numTargets = (int)(target.size());
	out << "  Unknown Byte:  " << unknownByte << endl;
	out << "  Num Targets:  " << numTargets << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < target.size(); i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			break;
		};
		out << "    Target[" << i1 << "]:  " << target[i1] << endl;
		array_output_count++;
	};
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSConnectPoint__Children::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info ) {
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiExtraData::FixLinks( objects, link_stack, missing_link_stack, info );

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> BSConnectPoint__Children::GetRefs() const {
	list<Ref<NiObject> > refs;
	refs = NiExtraData::GetRefs();
	return refs;
}

std::list<NiObject *> BSConnectPoint__Children::GetPtrs() const {
	list<NiObject *> ptrs;
	ptrs = NiExtraData::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

vector<string > BSConnectPoint::Children::GetTarget() const {
	return target;
}

void BSConnectPoint::Children::SetTarget( const vector<string >& value ) {
	target = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//
