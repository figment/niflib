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
#include "../../include/obj/BSShaderProperty.h"
using namespace Niflib;

//Definition of TYPE constant
const Type BSShaderProperty::TYPE("BSShaderProperty", &NiProperty::TYPE );

BSShaderProperty::BSShaderProperty() : unknownFlag((unsigned int)0), flags((unsigned short)1), shaderType((BSShaderType)SHADER_DEFAULT), unknownByte0((byte)0), unknownUshort0((unsigned short)0), shaderFlags((BSShaderFlags)0x82000000), unknownShort1((unsigned short)0), unknownFloat0(0.0f), unknownInt2((int)1), envmapScale(1.0f) {
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

BSShaderProperty::~BSShaderProperty() {
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & BSShaderProperty::GetType() const {
	return TYPE;
}

NiObject * BSShaderProperty::Create() {
	return new BSShaderProperty;
}

void BSShaderProperty::Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-READ CUSTOM CODE--//

	// unknownFlag is a manual update flags since it is read prior to base class
	if ( ( info.version >= 0x14020007 ) && ( (info.userVersion == 12) ) ) {
		NifStream( unknownFlag, in, info );
	};
	//--END CUSTOM CODE--//

	NiProperty::Read( in, link_stack, info );
	if ( (info.userVersion < 12) ) {
		NifStream( flags, in, info );
	};
	NifStream( shaderType, in, info );
	NifStream( unknownByte0, in, info );
	if ( (info.userVersion < 12) ) {
		NifStream( unknownUshort0, in, info );
	};
	NifStream( shaderFlags, in, info );
	if ( (info.userVersion == 12) ) {
		NifStream( unknownShort1, in, info );
		NifStream( unknownFloat0, in, info );
	};
	NifStream( unknownInt2, in, info );
	NifStream( envmapScale, in, info );

	//--BEGIN POST-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void BSShaderProperty::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info ) const {
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	// unknownFlag is a manual update flags since it is written prior to base class
	if ( ( info.version >= 0x14020007 ) && ( (info.userVersion == 12) ) ) {
		NifStream( unknownFlag, out, info );
	};
	//--END CUSTOM CODE--//

	NiProperty::Write( out, link_map, missing_link_stack, info );
	if ( (info.userVersion < 12) ) {
		NifStream( flags, out, info );
	};
	NifStream( shaderType, out, info );
	NifStream( unknownByte0, out, info );
	if ( (info.userVersion < 12) ) {
		NifStream( unknownUshort0, out, info );
	};
	NifStream( shaderFlags, out, info );
	if ( (info.userVersion == 12) ) {
		NifStream( unknownShort1, out, info );
		NifStream( unknownFloat0, out, info );
	};
	NifStream( unknownInt2, out, info );
	NifStream( envmapScale, out, info );

	//--BEGIN POST-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::string BSShaderProperty::asString( bool verbose ) const {
	//--BEGIN PRE-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//

	stringstream out;
	out << NiProperty::asString();
	out << "  Flags:  " << flags << endl;
	out << "  Shader Type:  " << shaderType << endl;
	out << "  Unknown Byte 0:  " << unknownByte0 << endl;
	out << "  Unknown UShort 0:  " << unknownUshort0 << endl;
	out << "  Shader Flags:  " << shaderFlags << endl;
	out << "  Unknown Short 1:  " << unknownShort1 << endl;
	out << "  Unknown Float 0:  " << unknownFloat0 << endl;
	out << "  Unknown Int 2:  " << unknownInt2 << endl;
	out << "  Envmap Scale:  " << envmapScale << endl;
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void BSShaderProperty::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info ) {
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiProperty::FixLinks( objects, link_stack, missing_link_stack, info );

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> BSShaderProperty::GetRefs() const {
	list<Ref<NiObject> > refs;
	refs = NiProperty::GetRefs();
	return refs;
}

std::list<NiObject *> BSShaderProperty::GetPtrs() const {
	list<NiObject *> ptrs;
	ptrs = NiProperty::GetPtrs();
	return ptrs;
}

//--BEGIN MISC CUSTOM CODE--//

unsigned short BSShaderProperty::GetFlags() const {
	return flags;
}

void BSShaderProperty::SetFlags( unsigned short value ) {
	flags = value;
}

BSShaderType BSShaderProperty::GetShaderType() const {
	return shaderType;
}

void BSShaderProperty::SetShaderType( const BSShaderType & value ) {
	shaderType = value;
}

BSShaderFlags BSShaderProperty::GetShaderFlags() const {
	return shaderFlags;
}

void BSShaderProperty::SetShaderFlags( const BSShaderFlags & value ) {
	shaderFlags = value;
}

float BSShaderProperty::GetEnvmapScale() const {
	return envmapScale;
}

void BSShaderProperty::SetEnvmapScale( float value ) {
	envmapScale = value;
}
//--END CUSTOM CODE--//
