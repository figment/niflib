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
#include "../../include/obj/bhkPrismaticConstraint.h"
//#include "../GlobalCode/NiflibStringFunctions.h"
using namespace Niflib;

//Definition of TYPE constant
const Type bhkPrismaticConstraint::TYPE("bhkPrismaticConstraint", &bhkConstraint::TYPE );

bhkPrismaticConstraint::bhkPrismaticConstraint() : minDistance(0.0f), maxDistance(0.0f), friction(0.0f), unknownByte1((byte)0) {
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

bhkPrismaticConstraint::~bhkPrismaticConstraint() {
	//--BEGIN DESTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

const Type & bhkPrismaticConstraint::GetType() const {
	return TYPE;
}

NiObject * bhkPrismaticConstraint::Create() {
	return new bhkPrismaticConstraint;
}

void bhkPrismaticConstraint::Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//

	bhkConstraint::Read( in, link_stack, info );
	if ( info.version <= 0x14000005 ) {
		NifStream( pivotA, in, info );
		for (unsigned int i2 = 0; i2 < 4; i2++) {
			NifStream( rotationMatrixA[i2], in, info );
		};
		NifStream( pivotB, in, info );
		NifStream( slidingB, in, info );
		NifStream( planeB, in, info );
	};
	if ( info.version >= 0x14020007 ) {
		NifStream( slidingA, in, info );
		NifStream( rotationA, in, info );
		NifStream( planeA, in, info );
		NifStream( pivotA, in, info );
		NifStream( slidingB, in, info );
		NifStream( rotationB, in, info );
		NifStream( planeB, in, info );
		NifStream( pivotB, in, info );
	};
	NifStream( minDistance, in, info );
	NifStream( maxDistance, in, info );
	NifStream( friction, in, info );
	if ( info.version >= 0x14020007 ) {
		NifStream( unknownByte1, in, info );
	};

	//--BEGIN POST-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void bhkPrismaticConstraint::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info ) const {
	//--BEGIN PRE-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//

	bhkConstraint::Write( out, link_map, missing_link_stack, info );
	if ( info.version <= 0x14000005 ) {
		NifStream( pivotA, out, info );
		for (unsigned int i2 = 0; i2 < 4; i2++) {
			NifStream( rotationMatrixA[i2], out, info );
		};
		NifStream( pivotB, out, info );
		NifStream( slidingB, out, info );
		NifStream( planeB, out, info );
	};
	if ( info.version >= 0x14020007 ) {
		NifStream( slidingA, out, info );
		NifStream( rotationA, out, info );
		NifStream( planeA, out, info );
		NifStream( pivotA, out, info );
		NifStream( slidingB, out, info );
		NifStream( rotationB, out, info );
		NifStream( planeB, out, info );
		NifStream( pivotB, out, info );
	};
	NifStream( minDistance, out, info );
	NifStream( maxDistance, out, info );
	NifStream( friction, out, info );
	if ( info.version >= 0x14020007 ) {
		NifStream( unknownByte1, out, info );
	};

	//--BEGIN POST-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::string bhkPrismaticConstraint::asString( bool verbose ) const {
	//--BEGIN PRE-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << bhkConstraint::asString(verbose);
	out << "  Pivot A:  " << pivotA << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < 4; i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			break;
		};
		out << "    Rotation Matrix A[" << i1 << "]:  " << rotationMatrixA[i1] << endl;
		array_output_count++;
	};
	out << "  Pivot B:  " << pivotB << endl;
	out << "  Sliding B:  " << slidingB << endl;
	out << "  Plane B:  " << planeB << endl;
	out << "  Sliding A:  " << slidingA << endl;
	out << "  Rotation A:  " << rotationA << endl;
	out << "  Plane A:  " << planeA << endl;
	out << "  Rotation B:  " << rotationB << endl;
	out << "  Min Distance:  " << minDistance << endl;
	out << "  Max Distance:  " << maxDistance << endl;
	out << "  Friction:  " << friction << endl;
	out << "  Unknown Byte 1:  " << unknownByte1 << endl;
	////---New version--------------------------------
	//	out << "  Pivot B:  " << NiflibStringFunctions::DisplayFullValues_Vector(pivotB.x,pivotB.y,pivotB.z,pivotB.w)  << endl;
	//out << "  Sliding B:  " << NiflibStringFunctions::DisplayFullValues_Vector(slidingB.x,slidingB.y,slidingB.z,slidingB.w) << endl;
	//out << "  Plane B:  " << NiflibStringFunctions::DisplayFullValues_Vector(planeB.x,planeB.y,planeB.z,planeB.w) << endl;
	//out << "  Sliding A:  " << NiflibStringFunctions::DisplayFullValues_Vector(slidingA.x,slidingA.y,slidingA.z,slidingA.w) << endl;
	//out << "  Rotation A:  " << NiflibStringFunctions::DisplayFullValues_Vector(rotationA.x,rotationA.y,rotationA.z,rotationA.w) << endl;
	//out << "  Plane A:  " << NiflibStringFunctions::DisplayFullValues_Vector(planeA.x,planeA.y,planeA.z,planeA.w) << endl;
	//out << "  Rotation B:  " << NiflibStringFunctions::DisplayFullValues_Vector(rotationB.x,rotationB.y,rotationB.z,rotationB.w) << endl;
	//out << "  Min Distance:  " << NiflibStringFunctions::FloatToStringConversion(minDistance) << endl;
	//out << "  Max Distance:  " << NiflibStringFunctions::FloatToStringConversion(maxDistance) << endl;
	//out << "  Friction:  " << NiflibStringFunctions::FloatToStringConversion(friction) << endl;
	//out << "  Unknown Byte 1:  " << unknownByte1 << endl;
	////-------------------------------------------------------
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void bhkPrismaticConstraint::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info ) {
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//

	bhkConstraint::FixLinks( objects, link_stack, missing_link_stack, info );

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> bhkPrismaticConstraint::GetRefs() const {
	list<Ref<NiObject> > refs;
	refs = bhkConstraint::GetRefs();
	return refs;
}

std::list<NiObject *> bhkPrismaticConstraint::GetPtrs() const {
	list<NiObject *> ptrs;
	ptrs = bhkConstraint::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

Vector4 bhkPrismaticConstraint::GetPivotA() const {
	return pivotA;
}

void bhkPrismaticConstraint::SetPivotA( const Vector4 & value ) {
	pivotA = value;
}

array<4,Vector4 >  bhkPrismaticConstraint::GetRotationMatrixA() const {
	return rotationMatrixA;
}

void bhkPrismaticConstraint::SetRotationMatrixA( const array<4,Vector4 >&  value ) {
	rotationMatrixA = value;
}

Vector4 bhkPrismaticConstraint::GetPivotB() const {
	return pivotB;
}

void bhkPrismaticConstraint::SetPivotB( const Vector4 & value ) {
	pivotB = value;
}

Vector4 bhkPrismaticConstraint::GetSlidingB() const {
	return slidingB;
}

void bhkPrismaticConstraint::SetSlidingB( const Vector4 & value ) {
	slidingB = value;
}

Vector4 bhkPrismaticConstraint::GetPlaneB() const {
	return planeB;
}

void bhkPrismaticConstraint::SetPlaneB( const Vector4 & value ) {
	planeB = value;
}

Vector4 bhkPrismaticConstraint::GetSlidingA() const {
	return slidingA;
}

void bhkPrismaticConstraint::SetSlidingA( const Vector4 & value ) {
	slidingA = value;
}

Vector4 bhkPrismaticConstraint::GetRotationA() const {
	return rotationA;
}

void bhkPrismaticConstraint::SetRotationA( const Vector4 & value ) {
	rotationA = value;
}

Vector4 bhkPrismaticConstraint::GetPlaneA() const {
	return planeA;
}

void bhkPrismaticConstraint::SetPlaneA( const Vector4 & value ) {
	planeA = value;
}

Vector4 bhkPrismaticConstraint::GetPivotA() const {
	return pivotA;
}

void bhkPrismaticConstraint::SetPivotA( const Vector4 & value ) {
	pivotA = value;
}

Vector4 bhkPrismaticConstraint::GetSlidingB() const {
	return slidingB;
}

void bhkPrismaticConstraint::SetSlidingB( const Vector4 & value ) {
	slidingB = value;
}

Vector4 bhkPrismaticConstraint::GetRotationB() const {
	return rotationB;
}

void bhkPrismaticConstraint::SetRotationB( const Vector4 & value ) {
	rotationB = value;
}

Vector4 bhkPrismaticConstraint::GetPlaneB() const {
	return planeB;
}

void bhkPrismaticConstraint::SetPlaneB( const Vector4 & value ) {
	planeB = value;
}

Vector4 bhkPrismaticConstraint::GetPivotB() const {
	return pivotB;
}

void bhkPrismaticConstraint::SetPivotB( const Vector4 & value ) {
	pivotB = value;
}

float bhkPrismaticConstraint::GetMinDistance() const {
	return minDistance;
}

void bhkPrismaticConstraint::SetMinDistance( float value ) {
	minDistance = value;
}

float bhkPrismaticConstraint::GetMaxDistance() const {
	return maxDistance;
}

void bhkPrismaticConstraint::SetMaxDistance( float value ) {
	maxDistance = value;
}

float bhkPrismaticConstraint::GetFriction() const {
	return friction;
}

void bhkPrismaticConstraint::SetFriction( float value ) {
	friction = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//
//--END CUSTOM CODE--//
