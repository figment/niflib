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
#include "../../include/obj/BSEffectShaderProperty.h"
using namespace Niflib;

//Definition of TYPE constant
const Type BSEffectShaderProperty::TYPE("BSEffectShaderProperty", &NiProperty::TYPE );

BSEffectShaderProperty::BSEffectShaderProperty() : shaderFlags1((SkyrimShaderPropertyFlags1)0), shaderFlags2((SkyrimShaderPropertyFlags2)0), uvScale(1.0, 1.0), textureClampMode((unsigned int)0), falloffStartAngle(1.0f), falloffStopAngle(1.0f), falloffStartOpacity(0.0f), falloffStopOpacity(0.0f), emissiveMultiple(0.0f), softFalloffDepth(0.0f), environmentMapScale(0.0f) {
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

BSEffectShaderProperty::~BSEffectShaderProperty() {
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & BSEffectShaderProperty::GetType() const {
	return TYPE;
}

NiObject * BSEffectShaderProperty::Create() {
	return new BSEffectShaderProperty;
}

void BSEffectShaderProperty::Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiProperty::Read( in, link_stack, info );
	NifStream( shaderFlags1, in, info );
	NifStream( shaderFlags2, in, info );
	NifStream( uvOffset, in, info );
	NifStream( uvScale, in, info );
	NifStream( sourceTexture, in, info );
	NifStream( textureClampMode, in, info );
	NifStream( falloffStartAngle, in, info );
	NifStream( falloffStopAngle, in, info );
	NifStream( falloffStartOpacity, in, info );
	NifStream( falloffStopOpacity, in, info );
	NifStream( emissiveColor, in, info );
	NifStream( emissiveMultiple, in, info );
	NifStream( softFalloffDepth, in, info );
	NifStream( greyscaleTexture, in, info );
	if ( ((info.version == 0x14020007) && (info.userVersion2 == 130)) ) {
		NifStream( envMapTexture, in, info );
		NifStream( normalTexture, in, info );
		NifStream( envMaskTexture, in, info );
		NifStream( environmentMapScale, in, info );
	};

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSEffectShaderProperty::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info ) const {
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiProperty::Write( out, link_map, missing_link_stack, info );
	NifStream( shaderFlags1, out, info );
	NifStream( shaderFlags2, out, info );
	NifStream( uvOffset, out, info );
	NifStream( uvScale, out, info );
	NifStream( sourceTexture, out, info );
	NifStream( textureClampMode, out, info );
	NifStream( falloffStartAngle, out, info );
	NifStream( falloffStopAngle, out, info );
	NifStream( falloffStartOpacity, out, info );
	NifStream( falloffStopOpacity, out, info );
	NifStream( emissiveColor, out, info );
	NifStream( emissiveMultiple, out, info );
	NifStream( softFalloffDepth, out, info );
	NifStream( greyscaleTexture, out, info );
	if ( ((info.version == 0x14020007) && (info.userVersion2 == 130)) ) {
		NifStream( envMapTexture, out, info );
		NifStream( normalTexture, out, info );
		NifStream( envMaskTexture, out, info );
		NifStream( environmentMapScale, out, info );
	};

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string BSEffectShaderProperty::asString( bool verbose ) const {
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	out << NiProperty::asString(verbose);
	out << "  Shader Flags 1:  " << shaderFlags1 << endl;
	out << "  Shader Flags 2:  " << shaderFlags2 << endl;
	out << "  UV Offset:  " << uvOffset << endl;
	out << "  UV Scale:  " << uvScale << endl;
	out << "  Source Texture:  " << sourceTexture << endl;
	out << "  Texture Clamp Mode:  " << textureClampMode << endl;
	out << "  Falloff Start Angle:  " << falloffStartAngle << endl;
	out << "  Falloff Stop Angle:  " << falloffStopAngle << endl;
	out << "  Falloff Start Opacity:  " << falloffStartOpacity << endl;
	out << "  Falloff Stop Opacity:  " << falloffStopOpacity << endl;
	out << "  Emissive Color:  " << emissiveColor << endl;
	out << "  Emissive Multiple:  " << emissiveMultiple << endl;
	out << "  Soft Falloff Depth:  " << softFalloffDepth << endl;
	out << "  Greyscale Texture:  " << greyscaleTexture << endl;
	out << "  Env Map Texture:  " << envMapTexture << endl;
	out << "  Normal Texture:  " << normalTexture << endl;
	out << "  Env Mask Texture:  " << envMaskTexture << endl;
	out << "  Environment Map Scale:  " << environmentMapScale << endl;
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSEffectShaderProperty::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info ) {
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiProperty::FixLinks( objects, link_stack, missing_link_stack, info );

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> BSEffectShaderProperty::GetRefs() const {
	list<Ref<NiObject> > refs;
	refs = NiProperty::GetRefs();
	return refs;
}

std::list<NiObject *> BSEffectShaderProperty::GetPtrs() const {
	list<NiObject *> ptrs;
	ptrs = NiProperty::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

SkyrimShaderPropertyFlags1 BSEffectShaderProperty::GetShaderFlags1() const {
	return shaderFlags1;
}

void BSEffectShaderProperty::SetShaderFlags1( const SkyrimShaderPropertyFlags1 & value ) {
	shaderFlags1 = value;
}

SkyrimShaderPropertyFlags2 BSEffectShaderProperty::GetShaderFlags2() const {
	return shaderFlags2;
}

void BSEffectShaderProperty::SetShaderFlags2( const SkyrimShaderPropertyFlags2 & value ) {
	shaderFlags2 = value;
}

TexCoord BSEffectShaderProperty::GetUvOffset() const {
	return uvOffset;
}

void BSEffectShaderProperty::SetUvOffset( const TexCoord & value ) {
	uvOffset = value;
}

TexCoord BSEffectShaderProperty::GetUvScale() const {
	return uvScale;
}

void BSEffectShaderProperty::SetUvScale( const TexCoord & value ) {
	uvScale = value;
}

string BSEffectShaderProperty::GetSourceTexture() const {
	return sourceTexture;
}

void BSEffectShaderProperty::SetSourceTexture( const string & value ) {
	sourceTexture = value;
}

unsigned int BSEffectShaderProperty::GetTextureClampMode() const {
	return textureClampMode;
}

void BSEffectShaderProperty::SetTextureClampMode( unsigned int value ) {
	textureClampMode = value;
}

float BSEffectShaderProperty::GetFalloffStartAngle() const {
	return falloffStartAngle;
}

void BSEffectShaderProperty::SetFalloffStartAngle( float value ) {
	falloffStartAngle = value;
}

float BSEffectShaderProperty::GetFalloffStopAngle() const {
	return falloffStopAngle;
}

void BSEffectShaderProperty::SetFalloffStopAngle( float value ) {
	falloffStopAngle = value;
}

float BSEffectShaderProperty::GetFalloffStartOpacity() const {
	return falloffStartOpacity;
}

void BSEffectShaderProperty::SetFalloffStartOpacity( float value ) {
	falloffStartOpacity = value;
}

float BSEffectShaderProperty::GetFalloffStopOpacity() const {
	return falloffStopOpacity;
}

void BSEffectShaderProperty::SetFalloffStopOpacity( float value ) {
	falloffStopOpacity = value;
}

Color4 BSEffectShaderProperty::GetEmissiveColor() const {
	return emissiveColor;
}

void BSEffectShaderProperty::SetEmissiveColor( const Color4 & value ) {
	emissiveColor = value;
}

float BSEffectShaderProperty::GetEmissiveMultiple() const {
	return emissiveMultiple;
}

void BSEffectShaderProperty::SetEmissiveMultiple( float value ) {
	emissiveMultiple = value;
}

float BSEffectShaderProperty::GetSoftFalloffDepth() const {
	return softFalloffDepth;
}

void BSEffectShaderProperty::SetSoftFalloffDepth( float value ) {
	softFalloffDepth = value;
}

string BSEffectShaderProperty::GetGreyscaleTexture() const {
	return greyscaleTexture;
}

void BSEffectShaderProperty::SetGreyscaleTexture( const string & value ) {
	greyscaleTexture = value;
}

string BSEffectShaderProperty::GetEnvMapTexture() const {
	return envMapTexture;
}

void BSEffectShaderProperty::SetEnvMapTexture( const string & value ) {
	envMapTexture = value;
}

string BSEffectShaderProperty::GetNormalTexture() const {
	return normalTexture;
}

void BSEffectShaderProperty::SetNormalTexture( const string & value ) {
	normalTexture = value;
}

string BSEffectShaderProperty::GetEnvMaskTexture() const {
	return envMaskTexture;
}

void BSEffectShaderProperty::SetEnvMaskTexture( const string & value ) {
	envMaskTexture = value;
}

float BSEffectShaderProperty::GetEnvironmentMapScale() const {
	return environmentMapScale;
}

void BSEffectShaderProperty::SetEnvironmentMapScale( float value ) {
	environmentMapScale = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//

SkyrimShaderPropertyFlags1 BSEffectShaderProperty::GetShaderFlags1() const {
	return shaderFlags1;
}

void BSEffectShaderProperty::SetShaderFlags1(const SkyrimShaderPropertyFlags1 & value) {
	shaderFlags1 = value;
}

SkyrimShaderPropertyFlags2 BSEffectShaderProperty::GetShaderFlags2() const {
	return shaderFlags2;
}

void BSEffectShaderProperty::SetShaderFlags2(const SkyrimShaderPropertyFlags2 & value) {
	shaderFlags2 = value;
}

TexCoord BSEffectShaderProperty::GetUvOffset() const {
	return uvOffset;
}

void BSEffectShaderProperty::SetUvOffset(const TexCoord & value) {
	uvOffset = value;
}

TexCoord BSEffectShaderProperty::GetUvScale() const {
	return uvScale;
}

void BSEffectShaderProperty::SetUvScale(const TexCoord & value) {
	uvScale = value;
}

string BSEffectShaderProperty::GetSourceTexture() const {
	return sourceTexture;
}

void BSEffectShaderProperty::SetSourceTexture(const string & value) {
	sourceTexture = value;
}

unsigned int BSEffectShaderProperty::GetTextureClampMode() const {
	return textureClampMode;
}

void BSEffectShaderProperty::SetTextureClampMode(unsigned int value) {
	textureClampMode = value;
}

float BSEffectShaderProperty::GetFalloffStartAngle() const {
	return falloffStartAngle;
}

void BSEffectShaderProperty::SetFalloffStartAngle(float value) {
	falloffStartAngle = value;
}

float BSEffectShaderProperty::GetFalloffStopAngle() const {
	return falloffStopAngle;
}

void BSEffectShaderProperty::SetFalloffStopAngle(float value) {
	falloffStopAngle = value;
}

float BSEffectShaderProperty::GetFalloffStartOpacity() const {
	return falloffStartOpacity;
}

void BSEffectShaderProperty::SetFalloffStartOpacity(float value) {
	falloffStartOpacity = value;
}

float BSEffectShaderProperty::GetFalloffStopOpacity() const {
	return falloffStopOpacity;
}

void BSEffectShaderProperty::SetFalloffStopOpacity(float value) {
	falloffStopOpacity = value;
}

Color4 BSEffectShaderProperty::GetEmissiveColor() const {
	return emissiveColor;
}

void BSEffectShaderProperty::SetEmissiveColor(const Color4 & value) {
	emissiveColor = value;
}

float BSEffectShaderProperty::GetEmissiveMultiple() const {
	return emissiveMultiple;
}

void BSEffectShaderProperty::SetEmissiveMultiple(float value) {
	emissiveMultiple = value;
}

float BSEffectShaderProperty::GetSoftFalloffDepth() const {
	return softFalloffDepth;
}

void BSEffectShaderProperty::SetSoftFalloffDepth(float value) {
	softFalloffDepth = value;
}

string BSEffectShaderProperty::GetGreyscaleTexture() const {
	return greyscaleTexture;
}

void BSEffectShaderProperty::SetGreyscaleTexture(const string & value) {
	greyscaleTexture = value;
}

string BSEffectShaderProperty::GetEnvMapTexture() const {
	return envMapTexture;
}

void BSEffectShaderProperty::SetEnvMapTexture(const string & value) {
	envMapTexture = value;
}

string BSEffectShaderProperty::GetNormalTexture() const {
	return normalTexture;
}

void BSEffectShaderProperty::SetNormalTexture(const string & value) {
	normalTexture = value;
}

string BSEffectShaderProperty::GetEnvMaskTexture() const {
	return envMaskTexture;
}

void BSEffectShaderProperty::SetEnvMaskTexture(const string & value) {
	envMaskTexture = value;
}

float BSEffectShaderProperty::GetEnvironmentMapScale() const {
	return environmentMapScale;
}

void BSEffectShaderProperty::SetEnvironmentMapScale(float value) {
	environmentMapScale = value;
}
//--END CUSTOM CODE--//
