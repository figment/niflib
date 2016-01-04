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
#include "../../include/obj/BSLightingShaderProperty.h"
#include "../../include/obj/BSShaderTextureSet.h"
using namespace Niflib;

//Definition of TYPE constant
const Type BSLightingShaderProperty::TYPE("BSLightingShaderProperty", &NiProperty::TYPE);

BSLightingShaderProperty::BSLightingShaderProperty() : shaderFlags1((SkyrimShaderPropertyFlags1) 2185233153), shaderFlags2((SkyrimShaderPropertyFlags2) 32801), uvScale(1.0, 1.0), textureSet(NULL), emissiveMultiple(0.0f), textureClampMode((TexClampMode) 0), alpha(1.0f), refractionStrength(0.0f), glossiness(0.0f), specularStrength(1.0f), lightingEffect1(0.0f), lightingEffect2(0.0f), subsurfaceRolloff(0.0f), unknownFloat1(0.0f), backlightPower(0.0f), grayscaleToPaletteScale(0.0f), fresnelPower(0.0f), wetnessSpecScale(0.0f), wetnessSpecPower(0.0f), wetnessMinVar(0.0f), wetnessEnvMapScale(0.0f), wetnessFresnelPower(0.0f), wetnessMetalness(0.0f), environmentMapScale(0.0f), unknownEmapInt1((unsigned short) 0), unknownTintInt1((unsigned int) 0), maxPasses(0.0f), scale(0.0f), parallaxInnerLayerThickness(0.0f), parallaxRefractionScale(0.0f), parallaxEnvmapStrength(0.0f), eyeCubemapScale(0.0f)
{
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

BSLightingShaderProperty::~BSLightingShaderProperty()
{
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & BSLightingShaderProperty::GetType() const
{
	return TYPE;
}

NiObject * BSLightingShaderProperty::Create()
{
	return new BSLightingShaderProperty;
}

void BSLightingShaderProperty::Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info)
{
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	unsigned int block_num;
	NiProperty::Read(in, link_stack, info);
	if((info.userVersion == 12))
	{
		NifStream(shaderFlags1, in, info);
		NifStream(shaderFlags2, in, info);
	};
	NifStream(uvOffset, in, info);
	NifStream(uvScale, in, info);
	NifStream(block_num, in, info);
	link_stack.push_back(block_num);
	NifStream(emissiveColor, in, info);
	NifStream(emissiveMultiple, in, info);
	if(((info.version == 0x14020007) && (info.userVersion2 == 130)))
	{
		NifStream(rootMaterial, in, info);
	};
	NifStream(textureClampMode, in, info);
	NifStream(alpha, in, info);
	NifStream(refractionStrength, in, info);
	NifStream(glossiness, in, info);
	NifStream(specularColor, in, info);
	NifStream(specularStrength, in, info);
	if((info.userVersion2 < 130))
	{
		NifStream(lightingEffect1, in, info);
		NifStream(lightingEffect2, in, info);
	};
	if(((info.version == 0x14020007) && (info.userVersion2 == 130)))
	{
		NifStream(subsurfaceRolloff, in, info);
		NifStream(unknownFloat1, in, info);
		NifStream(backlightPower, in, info);
		NifStream(grayscaleToPaletteScale, in, info);
		NifStream(fresnelPower, in, info);
		NifStream(wetnessSpecScale, in, info);
		NifStream(wetnessSpecPower, in, info);
		NifStream(wetnessMinVar, in, info);
		NifStream(wetnessEnvMapScale, in, info);
		NifStream(wetnessFresnelPower, in, info);
		NifStream(wetnessMetalness, in, info);
	};
	if((skyrimShaderType == 1))
	{
		NifStream(environmentMapScale, in, info);
	};
	if(((info.version == 0x14020007) && (info.userVersion2 == 130)))
	{
		if((skyrimShaderType == 1))
		{
			NifStream(unknownEmapInt1, in, info);
		};
	};
	if((skyrimShaderType == 5))
	{
		NifStream(skinTintColor, in, info);
	};
	if(((info.version == 0x14020007) && (info.userVersion2 == 130)))
	{
		if((skyrimShaderType == 5))
		{
			NifStream(unknownTintInt1, in, info);
		};
	};
	if((skyrimShaderType == 6))
	{
		NifStream(hairTintColor, in, info);
	};
	if((skyrimShaderType == 7))
	{
		NifStream(maxPasses, in, info);
		NifStream(scale, in, info);
	};
	if((skyrimShaderType == 11))
	{
		NifStream(parallaxInnerLayerThickness, in, info);
		NifStream(parallaxRefractionScale, in, info);
		NifStream(parallaxInnerLayerTextureScale, in, info);
		NifStream(parallaxEnvmapStrength, in, info);
	};
	if((skyrimShaderType == 14))
	{
		NifStream(sparkleParameters, in, info);
	};
	if((skyrimShaderType == 16))
	{
		NifStream(eyeCubemapScale, in, info);
		NifStream(leftEyeReflectionCenter, in, info);
		NifStream(rightEyeReflectionCenter, in, info);
	};

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSLightingShaderProperty::Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const
{
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiProperty::Write(out, link_map, missing_link_stack, info);
	if((info.userVersion == 12))
	{
		NifStream(shaderFlags1, out, info);
		NifStream(shaderFlags2, out, info);
	};
	NifStream(uvOffset, out, info);
	NifStream(uvScale, out, info);
	if(info.version < VER_3_3_0_13)
	{
		WritePtr32(&(*textureSet), out);
	}
	else
	{
		if(textureSet != NULL)
		{
			map<NiObjectRef, unsigned int>::const_iterator it = link_map.find(StaticCast<NiObject>(textureSet));
			if(it != link_map.end())
			{
				NifStream(it->second, out, info);
				missing_link_stack.push_back(NULL);
			}
			else
			{
				NifStream(0xFFFFFFFF, out, info);
				missing_link_stack.push_back(textureSet);
			}
		}
		else
		{
			NifStream(0xFFFFFFFF, out, info);
			missing_link_stack.push_back(NULL);
		}
	}
	NifStream(emissiveColor, out, info);
	NifStream(emissiveMultiple, out, info);
	if(((info.version == 0x14020007) && (info.userVersion2 == 130)))
	{
		NifStream(rootMaterial, out, info);
	};
	NifStream(textureClampMode, out, info);
	NifStream(alpha, out, info);
	NifStream(refractionStrength, out, info);
	NifStream(glossiness, out, info);
	NifStream(specularColor, out, info);
	NifStream(specularStrength, out, info);
	if((info.userVersion2 < 130))
	{
		NifStream(lightingEffect1, out, info);
		NifStream(lightingEffect2, out, info);
	};
	if(((info.version == 0x14020007) && (info.userVersion2 == 130)))
	{
		NifStream(subsurfaceRolloff, out, info);
		NifStream(unknownFloat1, out, info);
		NifStream(backlightPower, out, info);
		NifStream(grayscaleToPaletteScale, out, info);
		NifStream(fresnelPower, out, info);
		NifStream(wetnessSpecScale, out, info);
		NifStream(wetnessSpecPower, out, info);
		NifStream(wetnessMinVar, out, info);
		NifStream(wetnessEnvMapScale, out, info);
		NifStream(wetnessFresnelPower, out, info);
		NifStream(wetnessMetalness, out, info);
	};
	if((skyrimShaderType == 1))
	{
		NifStream(environmentMapScale, out, info);
	};
	if(((info.version == 0x14020007) && (info.userVersion2 == 130)))
	{
		if((skyrimShaderType == 1))
		{
			NifStream(unknownEmapInt1, out, info);
		};
	};
	if((skyrimShaderType == 5))
	{
		NifStream(skinTintColor, out, info);
	};
	if(((info.version == 0x14020007) && (info.userVersion2 == 130)))
	{
		if((skyrimShaderType == 5))
		{
			NifStream(unknownTintInt1, out, info);
		};
	};
	if((skyrimShaderType == 6))
	{
		NifStream(hairTintColor, out, info);
	};
	if((skyrimShaderType == 7))
	{
		NifStream(maxPasses, out, info);
		NifStream(scale, out, info);
	};
	if((skyrimShaderType == 11))
	{
		NifStream(parallaxInnerLayerThickness, out, info);
		NifStream(parallaxRefractionScale, out, info);
		NifStream(parallaxInnerLayerTextureScale, out, info);
		NifStream(parallaxEnvmapStrength, out, info);
	};
	if((skyrimShaderType == 14))
	{
		NifStream(sparkleParameters, out, info);
	};
	if((skyrimShaderType == 16))
	{
		NifStream(eyeCubemapScale, out, info);
		NifStream(leftEyeReflectionCenter, out, info);
		NifStream(rightEyeReflectionCenter, out, info);
	};

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string BSLightingShaderProperty::asString(bool verbose) const
{
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	out << NiProperty::asString(verbose);
	out << "  Shader Flags 1:  " << shaderFlags1 << endl;
	out << "  Shader Flags 2:  " << shaderFlags2 << endl;
	out << "  UV Offset:  " << uvOffset << endl;
	out << "  UV Scale:  " << uvScale << endl;
	out << "  Texture Set:  " << textureSet << endl;
	out << "  Emissive Color:  " << emissiveColor << endl;
	out << "  Emissive Multiple:  " << emissiveMultiple << endl;
	out << "  Root Material:  " << rootMaterial << endl;
	out << "  Texture Clamp Mode:  " << textureClampMode << endl;
	out << "  Alpha:  " << alpha << endl;
	out << "  Refraction Strength:  " << refractionStrength << endl;
	out << "  Glossiness:  " << glossiness << endl;
	out << "  Specular Color:  " << specularColor << endl;
	out << "  Specular Strength:  " << specularStrength << endl;
	out << "  Lighting Effect 1:  " << lightingEffect1 << endl;
	out << "  Lighting Effect 2:  " << lightingEffect2 << endl;
	out << "  Subsurface Rolloff:  " << subsurfaceRolloff << endl;
	out << "  Unknown Float 1:  " << unknownFloat1 << endl;
	out << "  Backlight Power:  " << backlightPower << endl;
	out << "  Grayscale To Palette Scale:  " << grayscaleToPaletteScale << endl;
	out << "  Fresnel Power:  " << fresnelPower << endl;
	out << "  Wetness Spec Scale:  " << wetnessSpecScale << endl;
	out << "  Wetness Spec Power:  " << wetnessSpecPower << endl;
	out << "  Wetness Min Var:  " << wetnessMinVar << endl;
	out << "  Wetness Env Map Scale:  " << wetnessEnvMapScale << endl;
	out << "  Wetness Fresnel Power:  " << wetnessFresnelPower << endl;
	out << "  Wetness Metalness:  " << wetnessMetalness << endl;
	if((skyrimShaderType == 1))
	{
		out << "    Environment Map Scale:  " << environmentMapScale << endl;
		out << "    Unknown EMap Int 1:  " << unknownEmapInt1 << endl;
	};
	if((skyrimShaderType == 5))
	{
		out << "    Skin Tint Color:  " << skinTintColor << endl;
		out << "    Unknown Tint Int 1:  " << unknownTintInt1 << endl;
	};
	if((skyrimShaderType == 6))
	{
		out << "    Hair Tint Color:  " << hairTintColor << endl;
	};
	if((skyrimShaderType == 7))
	{
		out << "    Max Passes:  " << maxPasses << endl;
		out << "    Scale:  " << scale << endl;
	};
	if((skyrimShaderType == 11))
	{
		out << "    Parallax Inner Layer Thickness:  " << parallaxInnerLayerThickness << endl;
		out << "    Parallax Refraction Scale:  " << parallaxRefractionScale << endl;
		out << "    Parallax Inner Layer Texture Scale:  " << parallaxInnerLayerTextureScale << endl;
		out << "    Parallax Envmap Strength:  " << parallaxEnvmapStrength << endl;
	};
	if((skyrimShaderType == 14))
	{
		out << "    Sparkle Parameters:  " << sparkleParameters << endl;
	};
	if((skyrimShaderType == 16))
	{
		out << "    Eye Cubemap Scale:  " << eyeCubemapScale << endl;
		out << "    Left Eye Reflection Center:  " << leftEyeReflectionCenter << endl;
		out << "    Right Eye Reflection Center:  " << rightEyeReflectionCenter << endl;
	};
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void BSLightingShaderProperty::FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info)
{
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	NiProperty::FixLinks(objects, link_stack, missing_link_stack, info);
	textureSet = FixLink<BSShaderTextureSet>(objects, link_stack, missing_link_stack, info);

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> BSLightingShaderProperty::GetRefs() const
{
	list<Ref<NiObject> > refs;
	refs = NiProperty::GetRefs();
	if(textureSet != NULL)
		refs.push_back(StaticCast<NiObject>(textureSet));
	return refs;
}

std::list<NiObject *> BSLightingShaderProperty::GetPtrs() const
{
	list<NiObject *> ptrs;
	ptrs = NiProperty::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

SkyrimShaderPropertyFlags1 BSLightingShaderProperty::GetShaderFlags1() const {
return shaderFlags1;
}

void BSLightingShaderProperty::SetShaderFlags1( const SkyrimShaderPropertyFlags1 & value ) {
shaderFlags1 = value;
}

SkyrimShaderPropertyFlags2 BSLightingShaderProperty::GetShaderFlags2() const {
return shaderFlags2;
}

void BSLightingShaderProperty::SetShaderFlags2( const SkyrimShaderPropertyFlags2 & value ) {
shaderFlags2 = value;
}

TexCoord BSLightingShaderProperty::GetUvOffset() const {
return uvOffset;
}

void BSLightingShaderProperty::SetUvOffset( const TexCoord & value ) {
uvOffset = value;
}

TexCoord BSLightingShaderProperty::GetUvScale() const {
return uvScale;
}

void BSLightingShaderProperty::SetUvScale( const TexCoord & value ) {
uvScale = value;
}

Ref<BSShaderTextureSet > BSLightingShaderProperty::GetTextureSet() const {
return textureSet;
}

void BSLightingShaderProperty::SetTextureSet( Ref<BSShaderTextureSet > value ) {
textureSet = value;
}

Color3 BSLightingShaderProperty::GetEmissiveColor() const {
return emissiveColor;
}

void BSLightingShaderProperty::SetEmissiveColor( const Color3 & value ) {
emissiveColor = value;
}

float BSLightingShaderProperty::GetEmissiveMultiple() const {
return emissiveMultiple;
}

void BSLightingShaderProperty::SetEmissiveMultiple( float value ) {
emissiveMultiple = value;
}

IndexString BSLightingShaderProperty::GetRootMaterial() const {
return rootMaterial;
}

void BSLightingShaderProperty::SetRootMaterial( const IndexString & value ) {
rootMaterial = value;
}

TexClampMode BSLightingShaderProperty::GetTextureClampMode() const {
return textureClampMode;
}

void BSLightingShaderProperty::SetTextureClampMode( const TexClampMode & value ) {
textureClampMode = value;
}

float BSLightingShaderProperty::GetAlpha() const {
return alpha;
}

void BSLightingShaderProperty::SetAlpha( float value ) {
alpha = value;
}

float BSLightingShaderProperty::GetRefractionStrength() const {
return refractionStrength;
}

void BSLightingShaderProperty::SetRefractionStrength( float value ) {
refractionStrength = value;
}

float BSLightingShaderProperty::GetGlossiness() const {
return glossiness;
}

void BSLightingShaderProperty::SetGlossiness( float value ) {
glossiness = value;
}

Color3 BSLightingShaderProperty::GetSpecularColor() const {
return specularColor;
}

void BSLightingShaderProperty::SetSpecularColor( const Color3 & value ) {
specularColor = value;
}

float BSLightingShaderProperty::GetSpecularStrength() const {
return specularStrength;
}

void BSLightingShaderProperty::SetSpecularStrength( float value ) {
specularStrength = value;
}

float BSLightingShaderProperty::GetLightingEffect1() const {
return lightingEffect1;
}

void BSLightingShaderProperty::SetLightingEffect1( float value ) {
lightingEffect1 = value;
}

float BSLightingShaderProperty::GetLightingEffect2() const {
return lightingEffect2;
}

void BSLightingShaderProperty::SetLightingEffect2( float value ) {
lightingEffect2 = value;
}

float BSLightingShaderProperty::GetSubsurfaceRolloff() const {
return subsurfaceRolloff;
}

void BSLightingShaderProperty::SetSubsurfaceRolloff( float value ) {
subsurfaceRolloff = value;
}

float BSLightingShaderProperty::GetBacklightPower() const {
return backlightPower;
}

void BSLightingShaderProperty::SetBacklightPower( float value ) {
backlightPower = value;
}

float BSLightingShaderProperty::GetGrayscaleToPaletteScale() const {
return grayscaleToPaletteScale;
}

void BSLightingShaderProperty::SetGrayscaleToPaletteScale( float value ) {
grayscaleToPaletteScale = value;
}

float BSLightingShaderProperty::GetFresnelPower() const {
return fresnelPower;
}

void BSLightingShaderProperty::SetFresnelPower( float value ) {
fresnelPower = value;
}

float BSLightingShaderProperty::GetWetnessSpecScale() const {
return wetnessSpecScale;
}

void BSLightingShaderProperty::SetWetnessSpecScale( float value ) {
wetnessSpecScale = value;
}

float BSLightingShaderProperty::GetWetnessSpecPower() const {
return wetnessSpecPower;
}

void BSLightingShaderProperty::SetWetnessSpecPower( float value ) {
wetnessSpecPower = value;
}

float BSLightingShaderProperty::GetWetnessMinVar() const {
return wetnessMinVar;
}

void BSLightingShaderProperty::SetWetnessMinVar( float value ) {
wetnessMinVar = value;
}

float BSLightingShaderProperty::GetWetnessEnvMapScale() const {
return wetnessEnvMapScale;
}

void BSLightingShaderProperty::SetWetnessEnvMapScale( float value ) {
wetnessEnvMapScale = value;
}

float BSLightingShaderProperty::GetWetnessFresnelPower() const {
return wetnessFresnelPower;
}

void BSLightingShaderProperty::SetWetnessFresnelPower( float value ) {
wetnessFresnelPower = value;
}

float BSLightingShaderProperty::GetWetnessMetalness() const {
return wetnessMetalness;
}

void BSLightingShaderProperty::SetWetnessMetalness( float value ) {
wetnessMetalness = value;
}

float BSLightingShaderProperty::GetEnvironmentMapScale() const {
return environmentMapScale;
}

void BSLightingShaderProperty::SetEnvironmentMapScale( float value ) {
environmentMapScale = value;
}

Color3 BSLightingShaderProperty::GetSkinTintColor() const {
return skinTintColor;
}

void BSLightingShaderProperty::SetSkinTintColor( const Color3 & value ) {
skinTintColor = value;
}

Color3 BSLightingShaderProperty::GetHairTintColor() const {
return hairTintColor;
}

void BSLightingShaderProperty::SetHairTintColor( const Color3 & value ) {
hairTintColor = value;
}

float BSLightingShaderProperty::GetMaxPasses() const {
return maxPasses;
}

void BSLightingShaderProperty::SetMaxPasses( float value ) {
maxPasses = value;
}

float BSLightingShaderProperty::GetScale() const {
return scale;
}

void BSLightingShaderProperty::SetScale( float value ) {
scale = value;
}

float BSLightingShaderProperty::GetParallaxInnerLayerThickness() const {
return parallaxInnerLayerThickness;
}

void BSLightingShaderProperty::SetParallaxInnerLayerThickness( float value ) {
parallaxInnerLayerThickness = value;
}

float BSLightingShaderProperty::GetParallaxRefractionScale() const {
return parallaxRefractionScale;
}

void BSLightingShaderProperty::SetParallaxRefractionScale( float value ) {
parallaxRefractionScale = value;
}

TexCoord BSLightingShaderProperty::GetParallaxInnerLayerTextureScale() const {
return parallaxInnerLayerTextureScale;
}

void BSLightingShaderProperty::SetParallaxInnerLayerTextureScale( const TexCoord & value ) {
parallaxInnerLayerTextureScale = value;
}

float BSLightingShaderProperty::GetParallaxEnvmapStrength() const {
return parallaxEnvmapStrength;
}

void BSLightingShaderProperty::SetParallaxEnvmapStrength( float value ) {
parallaxEnvmapStrength = value;
}

Vector4 BSLightingShaderProperty::GetSparkleParameters() const {
return sparkleParameters;
}

void BSLightingShaderProperty::SetSparkleParameters( const Vector4 & value ) {
sparkleParameters = value;
}

float BSLightingShaderProperty::GetEyeCubemapScale() const {
return eyeCubemapScale;
}

void BSLightingShaderProperty::SetEyeCubemapScale( float value ) {
eyeCubemapScale = value;
}

Vector3 BSLightingShaderProperty::GetLeftEyeReflectionCenter() const {
return leftEyeReflectionCenter;
}

void BSLightingShaderProperty::SetLeftEyeReflectionCenter( const Vector3 & value ) {
leftEyeReflectionCenter = value;
}

Vector3 BSLightingShaderProperty::GetRightEyeReflectionCenter() const {
return rightEyeReflectionCenter;
}

void BSLightingShaderProperty::SetRightEyeReflectionCenter( const Vector3 & value ) {
rightEyeReflectionCenter = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//
BSLightingShaderPropertyShaderType BSLightingShaderProperty::GetSkyrimShaderType() const
{
	return skyrimShaderType;
}

void BSLightingShaderProperty::SetSkyrimShaderType(BSLightingShaderPropertyShaderType value)
{
	skyrimShaderType = value;
}

SkyrimShaderPropertyFlags1 BSLightingShaderProperty::GetShaderFlags1() const
{
	return shaderFlags1;
}

void BSLightingShaderProperty::SetShaderFlags1(const SkyrimShaderPropertyFlags1 & value)
{
	shaderFlags1 = value;
}

SkyrimShaderPropertyFlags2 BSLightingShaderProperty::GetShaderFlags2() const
{
	return shaderFlags2;
}

void BSLightingShaderProperty::SetShaderFlags2(const SkyrimShaderPropertyFlags2 & value)
{
	shaderFlags2 = value;
}

TexCoord BSLightingShaderProperty::GetUvOffset() const
{
	return uvOffset;
}

void BSLightingShaderProperty::SetUvOffset(const TexCoord & value)
{
	uvOffset = value;
}

TexCoord BSLightingShaderProperty::GetUvScale() const
{
	return uvScale;
}

void BSLightingShaderProperty::SetUvScale(const TexCoord & value)
{
	uvScale = value;
}

Ref<BSShaderTextureSet > BSLightingShaderProperty::GetTextureSet() const
{
	return textureSet;
}

void BSLightingShaderProperty::SetTextureSet(Ref<BSShaderTextureSet > value)
{
	textureSet = value;
}

Color3 BSLightingShaderProperty::GetEmissiveColor() const
{
	return emissiveColor;
}

void BSLightingShaderProperty::SetEmissiveColor(const Color3 & value)
{
	emissiveColor = value;
}

float BSLightingShaderProperty::GetEmissiveMultiple() const
{
	return emissiveMultiple;
}

void BSLightingShaderProperty::SetEmissiveMultiple(float value)
{
	emissiveMultiple = value;
}

string BSLightingShaderProperty::GetRootMaterial() const
{
	return rootMaterial;
}

void BSLightingShaderProperty::SetRootMaterial(const string& value)
{
	rootMaterial = value;
}

TexClampMode BSLightingShaderProperty::GetTextureClampMode() const
{
	return textureClampMode;
}

void BSLightingShaderProperty::SetTextureClampMode(TexClampMode value)
{
	textureClampMode = value;
}

float BSLightingShaderProperty::GetAlpha() const
{
	return alpha;
}

void BSLightingShaderProperty::SetAlpha(float value)
{
	alpha = value;
}

float BSLightingShaderProperty::GetRefractionStrength() const
{
	return refractionStrength;
}

void BSLightingShaderProperty::SetRefractionStrength(float value)
{
	refractionStrength = value;
}

float BSLightingShaderProperty::GetSpecularPower_Glossiness() const
{
	return glossiness;
}

void BSLightingShaderProperty::SetSpecularPower_Glossiness(float value)
{
	glossiness = value;
}

Color3 BSLightingShaderProperty::GetSpecularColor() const
{
	return specularColor;
}

void BSLightingShaderProperty::SetSpecularColor(const Color3 & value)
{
	specularColor = value;
}

float BSLightingShaderProperty::GetSpecularStrength() const
{
	return specularStrength;
}

void BSLightingShaderProperty::SetSpecularStrength(float value)
{
	specularStrength = value;
}

float BSLightingShaderProperty::GetLightingEffect1() const
{
	return lightingEffect1;
}

void BSLightingShaderProperty::SetLightingEffect1(float value)
{
	lightingEffect1 = value;
}

float BSLightingShaderProperty::GetLightingEffect2() const
{
	return lightingEffect2;
}

void BSLightingShaderProperty::SetLightingEffect2(float value)
{
	lightingEffect2 = value;
}

float BSLightingShaderProperty::GetSubsurfaceRolloff() const
{
	return subsurfaceRolloff;
}

void BSLightingShaderProperty::SetSubsurfaceRolloff(float value)
{
	subsurfaceRolloff = value;
}

float BSLightingShaderProperty::GetUnknownFloat1() const
{
	return unknownFloat1;
}

void BSLightingShaderProperty::SetUnknownFloat1(float value)
{
	unknownFloat1 = value;
}

float BSLightingShaderProperty::GetBacklightPower() const
{
	return backlightPower;
}

void BSLightingShaderProperty::SetBacklightPower(float value)
{
	backlightPower = value;
}

float BSLightingShaderProperty::GetGrayscaleToPaletteScale() const
{
	return grayscaleToPaletteScale;
}

void BSLightingShaderProperty::SetGrayscaleToPaletteScale(float value)
{
	grayscaleToPaletteScale = value;
}

float BSLightingShaderProperty::GetFresnelPower() const
{
	return fresnelPower;
}

void BSLightingShaderProperty::SetFresnelPower(float value)
{
	fresnelPower = value;
}

float BSLightingShaderProperty::GetWetnessSpecScale() const
{
	return wetnessSpecScale;
}

void BSLightingShaderProperty::SetWetnessSpecScale(float value)
{
	wetnessSpecScale = value;
}

float BSLightingShaderProperty::GetWetnessSpecPower() const
{
	return wetnessSpecPower;
}

void BSLightingShaderProperty::SetWetnessSpecPower(float value)
{
	wetnessSpecPower = value;
}

float BSLightingShaderProperty::GetWetnessMinVar() const
{
	return wetnessMinVar;
}

void BSLightingShaderProperty::SetWetnessMinVar(float value)
{
	wetnessMinVar = value;
}

float BSLightingShaderProperty::GetWetnessEnvMapScale() const
{
	return wetnessEnvMapScale;
}

void BSLightingShaderProperty::SetWetnessEnvMapScale(float value)
{
	wetnessEnvMapScale = value;
}

float BSLightingShaderProperty::GetWetnessFresnelPower() const
{
	return wetnessFresnelPower;
}

void BSLightingShaderProperty::SetWetnessFresnelPower(float value)
{
	wetnessFresnelPower = value;
}

float BSLightingShaderProperty::GetWetnessMetalness() const
{
	return wetnessMetalness;
}

void BSLightingShaderProperty::SetWetnessMetalness(float value)
{
	wetnessMetalness = value;
}

float BSLightingShaderProperty::GetEnvironmentMapScale() const
{
	return environmentMapScale;
}

void BSLightingShaderProperty::SetEnvironmentMapScale(float value)
{
	environmentMapScale = value;
}

Color3 BSLightingShaderProperty::GetSkinTintColor() const
{
	return skinTintColor;
}

void BSLightingShaderProperty::SetSkinTintColor(const Color3 & value)
{
	skinTintColor = value;
}

Color3 BSLightingShaderProperty::GetHairTintColor() const
{
	return hairTintColor;
}

void BSLightingShaderProperty::SetHairTintColor(const Color3 & value)
{
	hairTintColor = value;
}

float BSLightingShaderProperty::GetMaxPasses() const
{
	return maxPasses;
}

void BSLightingShaderProperty::SetMaxPasses(float value)
{
	maxPasses = value;
}

float BSLightingShaderProperty::GetScale() const
{
	return scale;
}

void BSLightingShaderProperty::SetScale(float value)
{
	scale = value;
}

float BSLightingShaderProperty::GetParallaxInnerLayerThickness() const
{
	return parallaxInnerLayerThickness;
}

void BSLightingShaderProperty::SetParallaxInnerLayerThickness(float value)
{
	parallaxInnerLayerThickness = value;
}

float BSLightingShaderProperty::GetParallaxRefractionScale() const
{
	return parallaxRefractionScale;
}

void BSLightingShaderProperty::SetParallaxRefractionScale(float value)
{
	parallaxRefractionScale = value;
}

TexCoord BSLightingShaderProperty::GetParallaxInnerLayerTextureScale() const
{
	return parallaxInnerLayerTextureScale;
}

void BSLightingShaderProperty::SetParallaxInnerLayerTextureScale(const TexCoord & value)
{
	parallaxInnerLayerTextureScale = value;
}

float BSLightingShaderProperty::GetParallaxEnvmapStrength() const
{
	return parallaxEnvmapStrength;
}

void BSLightingShaderProperty::SetParallaxEnvmapStrength(float value)
{
	parallaxEnvmapStrength = value;
}

Vector4 BSLightingShaderProperty::GetSparkleParameters() const
{
	return sparkleParameters;
}

void BSLightingShaderProperty::SetSparkleParameters(const Vector4 & value)
{
	sparkleParameters = value;
}

float BSLightingShaderProperty::GetEyeCubemapScale() const
{
	return eyeCubemapScale;
}

void BSLightingShaderProperty::SetEyeCubemapScale(float value)
{
	eyeCubemapScale = value;
}

Vector3 BSLightingShaderProperty::GetLeftEyeReflectionCenter() const
{
	return leftEyeReflectionCenter;
}

void BSLightingShaderProperty::SetLeftEyeReflectionCenter(const Vector3 & value)
{
	leftEyeReflectionCenter = value;
}

Vector3 BSLightingShaderProperty::GetRightEyeReflectionCenter() const
{
	return rightEyeReflectionCenter;
}

void BSLightingShaderProperty::SetRightEyeReflectionCenter(const Vector3 & value)
{
	rightEyeReflectionCenter = value;
}

//--END CUSTOM CODE--//