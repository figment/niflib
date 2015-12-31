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
#include "../../include/obj/bhkCompressedMeshShapeData.h"
#include "../../include/gen/bhkCMSDMaterial.h"
#include "../../include/gen/bhkCMSDTransform.h"
#include "../../include/gen/QuaternionXYZW.h"
#include "../../include/gen/bhkCMSDBigTris.h"
#include "../../include/gen/bhkCMSDChunk.h"
using namespace Niflib;

//Definition of TYPE constant
const Type bhkCompressedMeshShapeData::TYPE("bhkCompressedMeshShapeData", &bhkRefObject::TYPE );

bhkCompressedMeshShapeData::bhkCompressedMeshShapeData() : bitsPerIndex((unsigned int)17), bitsPerWIndex((unsigned int)18), maskWIndex((unsigned int)262143), maskIndex((unsigned int)131071), error(0.0010f), unknownByte1((byte)0), unknownInt3((unsigned int)1), unknownInt4((unsigned int)0), unknownInt5((unsigned int)0), unknownByte2((byte)0), numMaterials((unsigned int)0), unknownInt6((unsigned int)0), numTransforms((unsigned int)0), numBigVerts((unsigned int)0), numBigTris((unsigned int)0), numChunks((unsigned int)0), unknownInt12((unsigned int)0) {
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

bhkCompressedMeshShapeData::~bhkCompressedMeshShapeData() {
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & bhkCompressedMeshShapeData::GetType() const {
	return TYPE;
}

NiObject * bhkCompressedMeshShapeData::Create() {
	return new bhkCompressedMeshShapeData;
}

void bhkCompressedMeshShapeData::Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	bhkRefObject::Read( in, link_stack, info );
	NifStream( bitsPerIndex, in, info );
	NifStream( bitsPerWIndex, in, info );
	NifStream( maskWIndex, in, info );
	NifStream( maskIndex, in, info );
	NifStream( error, in, info );
	NifStream( boundsMin, in, info );
	NifStream( boundsMax, in, info );
	NifStream( unknownByte1, in, info );
	NifStream( unknownInt3, in, info );
	NifStream( unknownInt4, in, info );
	NifStream( unknownInt5, in, info );
	NifStream( unknownByte2, in, info );
	NifStream( numMaterials, in, info );
	chunkMaterials.resize(numMaterials);
	for (unsigned int i1 = 0; i1 < chunkMaterials.size(); i1++) {
		NifStream( chunkMaterials[i1].skyrimMaterial, in, info );
		NifStream( chunkMaterials[i1].skyrimLayer, in, info );
		for (unsigned int i2 = 0; i2 < 3; i2++) {
			NifStream( chunkMaterials[i1].unknownArray[i2], in, info );
		};
	};
	NifStream( unknownInt6, in, info );
	NifStream( numTransforms, in, info );
	chunkTransforms.resize(numTransforms);
	for (unsigned int i1 = 0; i1 < chunkTransforms.size(); i1++) {
		NifStream( chunkTransforms[i1].translation, in, info );
		NifStream( chunkTransforms[i1].rotation.x, in, info );
		NifStream( chunkTransforms[i1].rotation.y, in, info );
		NifStream( chunkTransforms[i1].rotation.z, in, info );
		NifStream( chunkTransforms[i1].rotation.w, in, info );
	};
	NifStream( numBigVerts, in, info );
	bigVerts.resize(numBigVerts);
	for (unsigned int i1 = 0; i1 < bigVerts.size(); i1++) {
		NifStream( bigVerts[i1], in, info );
	};
	NifStream( numBigTris, in, info );
	bigTris.resize(numBigTris);
	for (unsigned int i1 = 0; i1 < bigTris.size(); i1++) {
		NifStream( bigTris[i1].triangle1, in, info );
		NifStream( bigTris[i1].triangle2, in, info );
		NifStream( bigTris[i1].triangle3, in, info );
		NifStream( bigTris[i1].material, in, info );
		NifStream( bigTris[i1].weldingInfo, in, info );
	};
	NifStream( numChunks, in, info );
	chunks.resize(numChunks);
	for (unsigned int i1 = 0; i1 < chunks.size(); i1++) {
		NifStream( chunks[i1].translation, in, info );
		NifStream( chunks[i1].materialIndex, in, info );
		NifStream( chunks[i1].reference, in, info );
		NifStream( chunks[i1].transformIndex, in, info );
		NifStream( chunks[i1].numVertices, in, info );
		chunks[i1].vertices.resize(chunks[i1].numVertices);
		for (unsigned int i2 = 0; i2 < chunks[i1].vertices.size(); i2++) {
			NifStream( chunks[i1].vertices[i2], in, info );
		};
		NifStream( chunks[i1].numIndices, in, info );
		chunks[i1].indices.resize(chunks[i1].numIndices);
		for (unsigned int i2 = 0; i2 < chunks[i1].indices.size(); i2++) {
			NifStream( chunks[i1].indices[i2], in, info );
		};
		NifStream( chunks[i1].numStrips, in, info );
		chunks[i1].strips.resize(chunks[i1].numStrips);
		for (unsigned int i2 = 0; i2 < chunks[i1].strips.size(); i2++) {
			NifStream( chunks[i1].strips[i2], in, info );
		};
		NifStream( chunks[i1].numWeldings, in, info );
		chunks[i1].weldings.resize(chunks[i1].numWeldings);
		for (unsigned int i2 = 0; i2 < chunks[i1].weldings.size(); i2++) {
			NifStream( chunks[i1].weldings[i2], in, info );
		};
	};
	NifStream( unknownInt12, in, info );

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void bhkCompressedMeshShapeData::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info ) const {
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	bhkRefObject::Write( out, link_map, missing_link_stack, info );
	numChunks = (unsigned int)(chunks.size());
	numBigTris = (unsigned int)(bigTris.size());
	numBigVerts = (unsigned int)(bigVerts.size());
	numTransforms = (unsigned int)(chunkTransforms.size());
	numMaterials = (unsigned int)(chunkMaterials.size());
	NifStream( bitsPerIndex, out, info );
	NifStream( bitsPerWIndex, out, info );
	NifStream( maskWIndex, out, info );
	NifStream( maskIndex, out, info );
	NifStream( error, out, info );
	NifStream( boundsMin, out, info );
	NifStream( boundsMax, out, info );
	NifStream( unknownByte1, out, info );
	NifStream( unknownInt3, out, info );
	NifStream( unknownInt4, out, info );
	NifStream( unknownInt5, out, info );
	NifStream( unknownByte2, out, info );
	NifStream( numMaterials, out, info );
	for (unsigned int i1 = 0; i1 < chunkMaterials.size(); i1++) {
		NifStream( chunkMaterials[i1].skyrimMaterial, out, info );
		NifStream( chunkMaterials[i1].skyrimLayer, out, info );
		for (unsigned int i2 = 0; i2 < 3; i2++) {
			NifStream( chunkMaterials[i1].unknownArray[i2], out, info );
		};
	};
	NifStream( unknownInt6, out, info );
	NifStream( numTransforms, out, info );
	for (unsigned int i1 = 0; i1 < chunkTransforms.size(); i1++) {
		NifStream( chunkTransforms[i1].translation, out, info );
		NifStream( chunkTransforms[i1].rotation.x, out, info );
		NifStream( chunkTransforms[i1].rotation.y, out, info );
		NifStream( chunkTransforms[i1].rotation.z, out, info );
		NifStream( chunkTransforms[i1].rotation.w, out, info );
	};
	NifStream( numBigVerts, out, info );
	for (unsigned int i1 = 0; i1 < bigVerts.size(); i1++) {
		NifStream( bigVerts[i1], out, info );
	};
	NifStream( numBigTris, out, info );
	for (unsigned int i1 = 0; i1 < bigTris.size(); i1++) {
		NifStream( bigTris[i1].triangle1, out, info );
		NifStream( bigTris[i1].triangle2, out, info );
		NifStream( bigTris[i1].triangle3, out, info );
		NifStream( bigTris[i1].material, out, info );
		NifStream( bigTris[i1].weldingInfo, out, info );
	};
	NifStream( numChunks, out, info );
	for (unsigned int i1 = 0; i1 < chunks.size(); i1++) {
		chunks[i1].numWeldings = (unsigned int)(chunks[i1].weldings.size());
		chunks[i1].numStrips = (unsigned int)(chunks[i1].strips.size());
		chunks[i1].numIndices = (unsigned int)(chunks[i1].indices.size());
		chunks[i1].numVertices = (unsigned int)(chunks[i1].vertices.size());
		NifStream( chunks[i1].translation, out, info );
		NifStream( chunks[i1].materialIndex, out, info );
		NifStream( chunks[i1].reference, out, info );
		NifStream( chunks[i1].transformIndex, out, info );
		NifStream( chunks[i1].numVertices, out, info );
		for (unsigned int i2 = 0; i2 < chunks[i1].vertices.size(); i2++) {
			NifStream( chunks[i1].vertices[i2], out, info );
		};
		NifStream( chunks[i1].numIndices, out, info );
		for (unsigned int i2 = 0; i2 < chunks[i1].indices.size(); i2++) {
			NifStream( chunks[i1].indices[i2], out, info );
		};
		NifStream( chunks[i1].numStrips, out, info );
		for (unsigned int i2 = 0; i2 < chunks[i1].strips.size(); i2++) {
			NifStream( chunks[i1].strips[i2], out, info );
		};
		NifStream( chunks[i1].numWeldings, out, info );
		for (unsigned int i2 = 0; i2 < chunks[i1].weldings.size(); i2++) {
			NifStream( chunks[i1].weldings[i2], out, info );
		};
	};
	NifStream( unknownInt12, out, info );

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string bhkCompressedMeshShapeData::asString( bool verbose ) const {
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << bhkRefObject::asString(verbose);
	numChunks = (unsigned int)(chunks.size());
	numBigTris = (unsigned int)(bigTris.size());
	numBigVerts = (unsigned int)(bigVerts.size());
	numTransforms = (unsigned int)(chunkTransforms.size());
	numMaterials = (unsigned int)(chunkMaterials.size());
	out << "  Bits Per Index:  " << bitsPerIndex << endl;
	out << "  Bits Per W Index:  " << bitsPerWIndex << endl;
	out << "  Mask W Index:  " << maskWIndex << endl;
	out << "  Mask Index:  " << maskIndex << endl;
	out << "  Error:  " << error << endl;
	out << "  Bounds Min:  " << boundsMin << endl;
	out << "  Bounds Max:  " << boundsMax << endl;
	out << "  Unknown Byte 1:  " << unknownByte1 << endl;
	out << "  Unknown Int 3:  " << unknownInt3 << endl;
	out << "  Unknown Int 4:  " << unknownInt4 << endl;
	out << "  Unknown Int 5:  " << unknownInt5 << endl;
	out << "  Unknown Byte 2:  " << unknownByte2 << endl;
	out << "  Num Materials:  " << numMaterials << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < chunkMaterials.size(); i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		out << "    Skyrim Material:  " << chunkMaterials[i1].skyrimMaterial << endl;
		out << "    Skyrim Layer:  " << chunkMaterials[i1].skyrimLayer << endl;
		array_output_count = 0;
		for (unsigned int i2 = 0; i2 < 3; i2++) {
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
				break;
			};
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				break;
			};
			out << "      Unknown Array[" << i2 << "]:  " << chunkMaterials[i1].unknownArray[i2] << endl;
			array_output_count++;
		};
	};
	out << "  Unknown Int 6:  " << unknownInt6 << endl;
	out << "  Num Transforms:  " << numTransforms << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < chunkTransforms.size(); i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		out << "    Translation:  " << chunkTransforms[i1].translation << endl;
		out << "    x:  " << chunkTransforms[i1].rotation.x << endl;
		out << "    y:  " << chunkTransforms[i1].rotation.y << endl;
		out << "    z:  " << chunkTransforms[i1].rotation.z << endl;
		out << "    w:  " << chunkTransforms[i1].rotation.w << endl;
	};
	out << "  Num Big Verts:  " << numBigVerts << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < bigVerts.size(); i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			break;
		};
		out << "    Big Verts[" << i1 << "]:  " << bigVerts[i1] << endl;
		array_output_count++;
	};
	out << "  Num Big Tris:  " << numBigTris << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < bigTris.size(); i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		out << "    Triangle 1:  " << bigTris[i1].triangle1 << endl;
		out << "    Triangle 2:  " << bigTris[i1].triangle2 << endl;
		out << "    Triangle 3:  " << bigTris[i1].triangle3 << endl;
		out << "    Material:  " << bigTris[i1].material << endl;
		out << "    Welding Info:  " << bigTris[i1].weldingInfo << endl;
	};
	out << "  Num Chunks:  " << numChunks << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < chunks.size(); i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		chunks[i1].numWeldings = (unsigned int)(chunks[i1].weldings.size());
		chunks[i1].numStrips = (unsigned int)(chunks[i1].strips.size());
		chunks[i1].numIndices = (unsigned int)(chunks[i1].indices.size());
		chunks[i1].numVertices = (unsigned int)(chunks[i1].vertices.size());
		out << "    Translation:  " << chunks[i1].translation << endl;
		out << "    Material Index:  " << chunks[i1].materialIndex << endl;
		out << "    Reference:  " << chunks[i1].reference << endl;
		out << "    Transform Index:  " << chunks[i1].transformIndex << endl;
		out << "    Num Vertices:  " << chunks[i1].numVertices << endl;
		array_output_count = 0;
		for (unsigned int i2 = 0; i2 < chunks[i1].vertices.size(); i2++) {
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
				break;
			};
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				break;
			};
			out << "      Vertices[" << i2 << "]:  " << chunks[i1].vertices[i2] << endl;
			array_output_count++;
		};
		out << "    Num Indices:  " << chunks[i1].numIndices << endl;
		array_output_count = 0;
		for (unsigned int i2 = 0; i2 < chunks[i1].indices.size(); i2++) {
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
				break;
			};
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				break;
			};
			out << "      Indices[" << i2 << "]:  " << chunks[i1].indices[i2] << endl;
			array_output_count++;
		};
		out << "    Num Strips:  " << chunks[i1].numStrips << endl;
		array_output_count = 0;
		for (unsigned int i2 = 0; i2 < chunks[i1].strips.size(); i2++) {
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
				break;
			};
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				break;
			};
			out << "      Strips[" << i2 << "]:  " << chunks[i1].strips[i2] << endl;
			array_output_count++;
		};
		out << "    Num Weldings:  " << chunks[i1].numWeldings << endl;
		array_output_count = 0;
		for (unsigned int i2 = 0; i2 < chunks[i1].weldings.size(); i2++) {
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
				break;
			};
			if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
				break;
			};
			out << "      Weldings[" << i2 << "]:  " << chunks[i1].weldings[i2] << endl;
			array_output_count++;
		};
	};
	out << "  Unknown Int 12:  " << unknownInt12 << endl;
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void bhkCompressedMeshShapeData::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info ) {
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	bhkRefObject::FixLinks( objects, link_stack, missing_link_stack, info );

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> bhkCompressedMeshShapeData::GetRefs() const {
	list<Ref<NiObject> > refs;
	refs = bhkRefObject::GetRefs();
	return refs;
}

std::list<NiObject *> bhkCompressedMeshShapeData::GetPtrs() const {
	list<NiObject *> ptrs;
	ptrs = bhkRefObject::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

unsigned int bhkCompressedMeshShapeData::GetBitsPerIndex() const {
	return bitsPerIndex;
}

void bhkCompressedMeshShapeData::SetBitsPerIndex( unsigned int value ) {
	bitsPerIndex = value;
}

unsigned int bhkCompressedMeshShapeData::GetBitsPerWIndex() const {
	return bitsPerWIndex;
}

void bhkCompressedMeshShapeData::SetBitsPerWIndex( unsigned int value ) {
	bitsPerWIndex = value;
}

unsigned int bhkCompressedMeshShapeData::GetMaskWIndex() const {
	return maskWIndex;
}

void bhkCompressedMeshShapeData::SetMaskWIndex( unsigned int value ) {
	maskWIndex = value;
}

unsigned int bhkCompressedMeshShapeData::GetMaskIndex() const {
	return maskIndex;
}

void bhkCompressedMeshShapeData::SetMaskIndex( unsigned int value ) {
	maskIndex = value;
}

float bhkCompressedMeshShapeData::GetError() const {
	return error;
}

void bhkCompressedMeshShapeData::SetError( float value ) {
	error = value;
}

Vector4 bhkCompressedMeshShapeData::GetBoundsMin() const {
	return boundsMin;
}

void bhkCompressedMeshShapeData::SetBoundsMin( const Vector4 & value ) {
	boundsMin = value;
}

Vector4 bhkCompressedMeshShapeData::GetBoundsMax() const {
	return boundsMax;
}

void bhkCompressedMeshShapeData::SetBoundsMax( const Vector4 & value ) {
	boundsMax = value;
}

vector<Vector4 > bhkCompressedMeshShapeData::GetBigVerts() const {
	return bigVerts;
}

void bhkCompressedMeshShapeData::SetBigVerts( const vector<Vector4 >& value ) {
	bigVerts = value;
}

vector<bhkCMSDBigTris > bhkCompressedMeshShapeData::GetBigTris() const {
	return bigTris;
}

void bhkCompressedMeshShapeData::SetBigTris( const vector<bhkCMSDBigTris >& value ) {
	bigTris = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//


unsigned int bhkCompressedMeshShapeData::GetBitsPerIndex() const {
	return bitsPerIndex;
}

void bhkCompressedMeshShapeData::SetBitsPerIndex(unsigned int value) {
	bitsPerIndex = value;
}

unsigned int bhkCompressedMeshShapeData::GetBitsPerWIndex() const {
	return bitsPerWIndex;
}

void bhkCompressedMeshShapeData::SetBitsPerWIndex(unsigned int value) {
	bitsPerWIndex = value;
}

unsigned int bhkCompressedMeshShapeData::GetMaskWIndex() const {
	return maskWIndex;
}

void bhkCompressedMeshShapeData::SetMaskWIndex(unsigned int value) {
	maskWIndex = value;
}

unsigned int bhkCompressedMeshShapeData::GetMaskIndex() const {
	return maskIndex;
}

void bhkCompressedMeshShapeData::SetMaskIndex(unsigned int value) {
	maskIndex = value;
}

float bhkCompressedMeshShapeData::GetError() const {
	return error;
}

void bhkCompressedMeshShapeData::SetError(float value) {
	error = value;
}

Vector4 bhkCompressedMeshShapeData::GetBoundsMin() const {
	return boundsMin;
}

void bhkCompressedMeshShapeData::SetBoundsMin(const Vector4 & value) {
	boundsMin = value;
}

Vector4 bhkCompressedMeshShapeData::GetBoundsMax() const {
	return boundsMax;
}

void bhkCompressedMeshShapeData::SetBoundsMax(const Vector4 & value) {
	boundsMax = value;
}
	
const vector<Vector4>& bhkCompressedMeshShapeData::GetBigVerts() const {
	return bigVerts;
}

void bhkCompressedMeshShapeData::SetBigVerts(const vector<Vector4 >& value) {
	bigVerts = value;
}

const vector<bhkCMSDBigTris>& bhkCompressedMeshShapeData::GetBigTris() const {
	return bigTris;
}

void bhkCompressedMeshShapeData::SetBigTris(const vector<bhkCMSDBigTris >& value) {
	bigTris = value;
}

// Unknown
// \return The current value.
const vector<bhkCMSDMaterial>& bhkCompressedMeshShapeData::GetChunkMaterials() const {
	return chunkMaterials;
}

// Unknown
// \param[in] value The new value.
void bhkCompressedMeshShapeData::SetChunkMaterials(const vector<bhkCMSDMaterial >& value) {
	chunkMaterials = value;
}

// Unknown
// \return The current value.
const vector<bhkCMSDTransform>& bhkCompressedMeshShapeData::GetChunkTransforms() const {
	return chunkTransforms;
}

// Unknown
// \param[in] value The new value.
void bhkCompressedMeshShapeData::SetChunkTransforms(const vector<bhkCMSDTransform >& value) {
	chunkTransforms = value;
}

// Unknown
// \return The current value.
const vector<bhkCMSDChunk>& bhkCompressedMeshShapeData::GetChunks() const {
	return chunks;
}

// Unknown
// \param[in] value The new value.
void bhkCompressedMeshShapeData::SetChunks(const vector<bhkCMSDChunk >& value) {
	chunks = value;
}
// Append Chunk to chunk list
// \param[in] value The new value.
void bhkCompressedMeshShapeData::AppendChunk(const bhkCMSDChunk& value) {
	chunks.push_back(value);
}


//--END CUSTOM CODE--//
