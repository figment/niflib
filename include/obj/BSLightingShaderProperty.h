/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BSLIGHTINGSHADERPROPERTY_H_
#define _BSLIGHTINGSHADERPROPERTY_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "NiProperty.h"

// Include structures
#include "../Ref.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class BSShaderTextureSet;
	class BSLightingShaderProperty;
	typedef Ref<BSLightingShaderProperty> BSLightingShaderPropertyRef;

	/*! Skyrim PP shader for assigning material/shader/texture. */
	class BSLightingShaderProperty : public NiProperty
	{
	public:
		/*! Constructor */
		NIFLIB_API BSLightingShaderProperty();

		/*! Destructor */
		NIFLIB_API virtual ~BSLightingShaderProperty();

		/*!
		 * A constant value which uniquly identifies objects of this type.
		 */
		NIFLIB_API static const Type TYPE;

		/*!
		 * A factory function used during file reading to create an instance of this type of object.
		 * \return A pointer to a newly allocated instance of this type of object.
		 */
		NIFLIB_API static NiObject * Create();

		/*!
		 * Summarizes the information contained in this object in English.
		 * \param[in] verbose Determines whether or not detailed information about large areas of data will be printed out.
		 * \return A string containing a summary of the information within the object in English.  This is the function that Niflyze calls to generate its analysis, so the output is the same.
		 */
		NIFLIB_API virtual string asString(bool verbose = false) const;

		/*!
		 * Used to determine the type of a particular instance of this object.
		 * \return The type constant for the actual type of the object.
		 */
		NIFLIB_API virtual const Type & GetType() const;

		/***Begin Example Naive Implementation****

		// Skyrim Shader Flags for setting render/shader options.
		// \return The current value.
		SkyrimShaderPropertyFlags1 GetShaderFlags1() const;

		// Skyrim Shader Flags for setting render/shader options.
		// \param[in] value The new value.
		void SetShaderFlags1( const SkyrimShaderPropertyFlags1 & value );

		// Skyrim Shader Flags for setting render/shader options.
		// \return The current value.
		SkyrimShaderPropertyFlags2 GetShaderFlags2() const;

		// Skyrim Shader Flags for setting render/shader options.
		// \param[in] value The new value.
		void SetShaderFlags2( const SkyrimShaderPropertyFlags2 & value );

		// Offset UVs
		// \return The current value.
		TexCoord GetUvOffset() const;

		// Offset UVs
		// \param[in] value The new value.
		void SetUvOffset( const TexCoord & value );

		// Offset UV Scale to repeat tiling textures, see above.
		// \return The current value.
		TexCoord GetUvScale() const;

		// Offset UV Scale to repeat tiling textures, see above.
		// \param[in] value The new value.
		void SetUvScale( const TexCoord & value );

		// Texture Set, can have override in an esm/esp
		// \return The current value.
		Ref<BSShaderTextureSet > GetTextureSet() const;

		// Texture Set, can have override in an esm/esp
		// \param[in] value The new value.
		void SetTextureSet( Ref<BSShaderTextureSet > value );

		// Glow color and alpha
		// \return The current value.
		Color3 GetEmissiveColor() const;

		// Glow color and alpha
		// \param[in] value The new value.
		void SetEmissiveColor( const Color3 & value );

		// Multiplied emissive colors
		// \return The current value.
		float GetEmissiveMultiple() const;

		// Multiplied emissive colors
		// \param[in] value The new value.
		void SetEmissiveMultiple( float value );

		// Unknown.
		// \return The current value.
		IndexString GetRootMaterial() const;

		// Unknown.
		// \param[in] value The new value.
		void SetRootMaterial( const IndexString & value );

		// How to handle texture borders.
		// \return The current value.
		TexClampMode GetTextureClampMode() const;

		// How to handle texture borders.
		// \param[in] value The new value.
		void SetTextureClampMode( const TexClampMode & value );

		// The materials opacity (1=non-transparent).
		// \return The current value.
		float GetAlpha() const;

		// The materials opacity (1=non-transparent).
		// \param[in] value The new value.
		void SetAlpha( float value );

		// Refraction strength increases as value increases
		// \return The current value.
		float GetRefractionStrength() const;

		// Refraction strength increases as value increases
		// \param[in] value The new value.
		void SetRefractionStrength( float value );

		// The material's specular power, or glossiness (0-999).
		// \return The current value.
		float GetGlossiness() const;

		// The material's specular power, or glossiness (0-999).
		// \param[in] value The new value.
		void SetGlossiness( float value );

		// Adds a colored highlight.
		// \return The current value.
		Color3 GetSpecularColor() const;

		// Adds a colored highlight.
		// \param[in] value The new value.
		void SetSpecularColor( const Color3 & value );

		// Brightness of specular highlight. (0=not visible) (0-999)
		// \return The current value.
		float GetSpecularStrength() const;

		// Brightness of specular highlight. (0=not visible) (0-999)
		// \param[in] value The new value.
		void SetSpecularStrength( float value );

		// Controls strength for envmap/backlight/rim/softlight lighting effect?
		// \return The current value.
		float GetLightingEffect1() const;

		// Controls strength for envmap/backlight/rim/softlight lighting effect?
		// \param[in] value The new value.
		void SetLightingEffect1( float value );

		// Controls strength for envmap/backlight/rim/softlight lighting effect?
		// \return The current value.
		float GetLightingEffect2() const;

		// Controls strength for envmap/backlight/rim/softlight lighting effect?
		// \param[in] value The new value.
		void SetLightingEffect2( float value );

		// Unknown.
		// \return The current value.
		float GetSubsurfaceRolloff() const;

		// Unknown.
		// \param[in] value The new value.
		void SetSubsurfaceRolloff( float value );

		// Unknown.
		// \return The current value.
		float GetBacklightPower() const;

		// Unknown.
		// \param[in] value The new value.
		void SetBacklightPower( float value );

		// GrayscaleToPaletteScale
		// \return The current value.
		float GetGrayscaleToPaletteScale() const;

		// GrayscaleToPaletteScale
		// \param[in] value The new value.
		void SetGrayscaleToPaletteScale( float value );

		// Fresnel Power
		// \return The current value.
		float GetFresnelPower() const;

		// Fresnel Power
		// \param[in] value The new value.
		void SetFresnelPower( float value );

		// Unknown.
		// \return The current value.
		float GetWetnessSpecScale() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessSpecScale( float value );

		// Unknown.
		// \return The current value.
		float GetWetnessSpecPower() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessSpecPower( float value );

		// Unknown.
		// \return The current value.
		float GetWetnessMinVar() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessMinVar( float value );

		// Unknown.
		// \return The current value.
		float GetWetnessEnvMapScale() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessEnvMapScale( float value );

		// Unknown.
		// \return The current value.
		float GetWetnessFresnelPower() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessFresnelPower( float value );

		// Unknown.
		// \return The current value.
		float GetWetnessMetalness() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessMetalness( float value );

		// Scales the intensity of the environment/cube map. (0-1)
		// \return The current value.
		float GetEnvironmentMapScale() const;

		// Scales the intensity of the environment/cube map. (0-1)
		// \param[in] value The new value.
		void SetEnvironmentMapScale( float value );

		// Tints the base texture. Overridden by game settings.
		// \return The current value.
		Color3 GetSkinTintColor() const;

		// Tints the base texture. Overridden by game settings.
		// \param[in] value The new value.
		void SetSkinTintColor( const Color3 & value );

		// Tints the base texture. Overridden by game settings.
		// \return The current value.
		Color3 GetHairTintColor() const;

		// Tints the base texture. Overridden by game settings.
		// \param[in] value The new value.
		void SetHairTintColor( const Color3 & value );

		// Max Passes
		// \return The current value.
		float GetMaxPasses() const;

		// Max Passes
		// \param[in] value The new value.
		void SetMaxPasses( float value );

		// Scale
		// \return The current value.
		float GetScale() const;

		// Scale
		// \param[in] value The new value.
		void SetScale( float value );

		// How far from the surface the inner layer appears to be.
		// \return The current value.
		float GetParallaxInnerLayerThickness() const;

		// How far from the surface the inner layer appears to be.
		// \param[in] value The new value.
		void SetParallaxInnerLayerThickness( float value );

		// Depth of inner parallax layer effect.
		// \return The current value.
		float GetParallaxRefractionScale() const;

		// Depth of inner parallax layer effect.
		// \param[in] value The new value.
		void SetParallaxRefractionScale( float value );

		// Scales the inner parallax layer texture.
		// \return The current value.
		TexCoord GetParallaxInnerLayerTextureScale() const;

		// Scales the inner parallax layer texture.
		// \param[in] value The new value.
		void SetParallaxInnerLayerTextureScale( const TexCoord & value );

		// How strong the environment/cube map is. (0-??)
		// \return The current value.
		float GetParallaxEnvmapStrength() const;

		// How strong the environment/cube map is. (0-??)
		// \param[in] value The new value.
		void SetParallaxEnvmapStrength( float value );

		// Unknown/unused?  CK lists "snow material" when used.
		// \return The current value.
		Vector4 GetSparkleParameters() const;

		// Unknown/unused?  CK lists "snow material" when used.
		// \param[in] value The new value.
		void SetSparkleParameters( const Vector4 & value );

		// Eye cubemap scale
		// \return The current value.
		float GetEyeCubemapScale() const;

		// Eye cubemap scale
		// \param[in] value The new value.
		void SetEyeCubemapScale( float value );

		// Offset to set center for left eye cubemap
		// \return The current value.
		Vector3 GetLeftEyeReflectionCenter() const;

		// Offset to set center for left eye cubemap
		// \param[in] value The new value.
		void SetLeftEyeReflectionCenter( const Vector3 & value );

		// Offset to set center for right eye cubemap
		// \return The current value.
		Vector3 GetRightEyeReflectionCenter() const;

		// Offset to set center for right eye cubemap
		// \param[in] value The new value.
		void SetRightEyeReflectionCenter( const Vector3 & value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		// Skyrim's shaders: 0=default 1=EnvMap, 2=Glow, 5=Skin, 6=Hair, 7=Unknown,
		// 11=Ice/Parallax, 15=Eye.
		// \return The current value.
		BSLightingShaderPropertyShaderType GetSkyrimShaderType() const;

		// Skyrim's shaders: 0=default 1=EnvMap, 2=Glow, 5=Skin, 6=Hair, 7=Unknown,
		// 11=Ice/Parallax, 15=Eye.
		// \param[in] value The new value.
		void SetSkyrimShaderType(BSLightingShaderPropertyShaderType value);

		// Skyrim Shader Flags for setting render/shader options.
		// \return The current value.
		SkyrimShaderPropertyFlags1 GetShaderFlags1() const;

		// Skyrim Shader Flags for setting render/shader options.
		// \param[in] value The new value.
		void SetShaderFlags1(const SkyrimShaderPropertyFlags1 & value);

		// Skyrim Shader Flags for setting render/shader options.
		// \return The current value.
		SkyrimShaderPropertyFlags2 GetShaderFlags2() const;

		// Skyrim Shader Flags for setting render/shader options.
		// \param[in] value The new value.
		void SetShaderFlags2(const SkyrimShaderPropertyFlags2 & value);

		// UV Offset
		// \return The current value.
		TexCoord GetUvOffset() const;

		// UV Offset
		// \param[in] value The new value.
		void SetUvOffset(const TexCoord & value);

		// UV Scale
		// \return The current value.
		TexCoord GetUvScale() const;

		// UV Scale
		// \param[in] value The new value.
		void SetUvScale(const TexCoord & value);

		// Texture Set, can have override in an esm/esp
		// \return The current value.
		Ref<BSShaderTextureSet > GetTextureSet() const;

		// Texture Set, can have override in an esm/esp
		// \param[in] value The new value.
		void SetTextureSet(Ref<BSShaderTextureSet > value);

		// Glow color and alpha
		// \return The current value.
		Color3 GetEmissiveColor() const;

		// Glow color and alpha
		// \param[in] value The new value.
		void SetEmissiveColor(const Color3 & value);

		// Multiplied emissive colors
		// \return The current value.
		float GetEmissiveMultiple() const;

		// Multiplied emissive colors
		// \param[in] value The new value.
		void SetEmissiveMultiple(float value);

		// Unknown.
		// \return The current value.
		string GetRootMaterial() const;

		// Unknown.
		// \param[in] value The new value.
		void SetRootMaterial(const string & value);

		// How to handle texture borders.
		// \return The current value.
		TexClampMode GetTextureClampMode() const;

		// How to handle texture borders.
		// \param[in] value The new value.
		void SetTextureClampMode(TexClampMode value);

		// The materials opacity (1=non-transparent).
		// \return The current value.
		float GetAlpha() const;

		// The materials opacity (1=non-transparent).
		// \param[in] value The new value.
		void SetAlpha(float value);

		// Refraction strength increases as value increases
		// \return The current value.
		float GetRefractionStrength() const;

		// Refraction strength increases as value increases
		// \param[in] value The new value.
		void SetRefractionStrength(float value);

		// The material's glossiness. (0-999)
		// \return The current value.
		float GetSpecularPower_Glossiness() const;

		// The material's glossiness. (0-999)
		// \param[in] value The new value.
		void SetSpecularPower_Glossiness(float value);

		// Adds a colored highlight.
		// \return The current value.
		Color3 GetSpecularColor() const;

		// Adds a colored highlight.
		// \param[in] value The new value.
		void SetSpecularColor(const Color3 & value);

		// Brightness of specular highlight. (0=not visible) (0-999)
		// \return The current value.
		float GetSpecularStrength() const;

		// Brightness of specular highlight. (0=not visible) (0-999)
		// \param[in] value The new value.
		void SetSpecularStrength(float value);

		// Controls strength for envmap/backlight/rim/softlight lighting effect?
		// \return The current value.
		float GetLightingEffect1() const;

		// Controls strength for envmap/backlight/rim/softlight lighting effect?
		// \param[in] value The new value.
		void SetLightingEffect1(float value);

		// Controls strength for envmap/backlight/rim/softlight lighting effect?
		// \return The current value.
		float GetLightingEffect2() const;

		// Controls strength for envmap/backlight/rim/softlight lighting effect?
		// \param[in] value The new value.
		void SetLightingEffect2(float value);

		// Unknown.
		// \return The current value.
		float GetSubsurfaceRolloff() const;

		// Unknown.
		// \param[in] value The new value.
		void SetSubsurfaceRolloff(float value);

		// Unknown.
		// \return The current value.
		float GetUnknownFloat1() const;

		// Unknown.
		// \param[in] value The new value.
		void SetUnknownFloat1(float value);

		// Unknown.
		// \return The current value.
		float GetBacklightPower() const;

		// Unknown.
		// \param[in] value The new value.
		void SetBacklightPower(float value);

		// GrayscaleToPaletteScale
		// \return The current value.
		float GetGrayscaleToPaletteScale() const;

		// GrayscaleToPaletteScale
		// \param[in] value The new value.
		void SetGrayscaleToPaletteScale(float value);

		// Fresnel Power
		// \return The current value.
		float GetFresnelPower() const;

		// Fresnel Power
		// \param[in] value The new value.
		void SetFresnelPower(float value);

		// Unknown.
		// \return The current value.
		float GetWetnessSpecScale() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessSpecScale(float value);

		// Unknown.
		// \return The current value.
		float GetWetnessSpecPower() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessSpecPower(float value);

		// Unknown.
		// \return The current value.
		float GetWetnessMinVar() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessMinVar(float value);

		// Unknown.
		// \return The current value.
		float GetWetnessEnvMapScale() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessEnvMapScale(float value);

		// Unknown.
		// \return The current value.
		float GetWetnessFresnelPower() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessFresnelPower(float value);

		// Unknown.
		// \return The current value.
		float GetWetnessMetalness() const;

		// Unknown.
		// \param[in] value The new value.
		void SetWetnessMetalness(float value);

		// Scales the environment/cube map. (0-??)
		// \return The current value.
		float GetEnvironmentMapScale() const;

		// Scales the environment/cube map. (0-??)
		// \param[in] value The new value.
		void SetEnvironmentMapScale(float value);

		// Tints the base texture. Overridden by game settings.
		// \return The current value.
		Color3 GetSkinTintColor() const;

		// Tints the base texture. Overridden by game settings.
		// \param[in] value The new value.
		void SetSkinTintColor(const Color3 & value);

		// Tints the base texture. Overridden by game settings.
		// \return The current value.
		Color3 GetHairTintColor() const;

		// Tints the base texture. Overridden by game settings.
		// \param[in] value The new value.
		void SetHairTintColor(const Color3 & value);

		// Max Passes
		// \return The current value.
		float GetMaxPasses() const;

		// Max Passes
		// \param[in] value The new value.
		void SetMaxPasses(float value);

		// Scale
		// \return The current value.
		float GetScale() const;

		// Scale
		// \param[in] value The new value.
		void SetScale(float value);

		// How far from the surface the inner layer appears to be.
		// \return The current value.
		float GetParallaxInnerLayerThickness() const;

		// How far from the surface the inner layer appears to be.
		// \param[in] value The new value.
		void SetParallaxInnerLayerThickness(float value);

		// Depth of inner parallax layer effect.
		// \return The current value.
		float GetParallaxRefractionScale() const;

		// Depth of inner parallax layer effect.
		// \param[in] value The new value.
		void SetParallaxRefractionScale(float value);

		// Scales the inner parallax layer texture.
		// \return The current value.
		TexCoord GetParallaxInnerLayerTextureScale() const;

		// Scales the inner parallax layer texture.
		// \param[in] value The new value.
		void SetParallaxInnerLayerTextureScale(const TexCoord & value);

		// How strong the environment/cube map is. (0-??)
		// \return The current value.
		float GetParallaxEnvmapStrength() const;

		// How strong the environment/cube map is. (0-??)
		// \param[in] value The new value.
		void SetParallaxEnvmapStrength(float value);

		// Unknown/unused?  CK lists "snow material" when used.
		// \return The current value.
		Vector4 GetSparkleParameters() const;

		// Unknown/unused?  CK lists "snow material" when used.
		// \param[in] value The new value.
		void SetSparkleParameters(const Vector4 & value);

		// Eye cubemap scale
		// \return The current value.
		float GetEyeCubemapScale() const;

		// Eye cubemap scale
		// \param[in] value The new value.
		void SetEyeCubemapScale(float value);

		// Offset to set center for left eye cubemap
		// \return The current value.
		Vector3 GetLeftEyeReflectionCenter() const;

		// Offset to set center for left eye cubemap
		// \param[in] value The new value.
		void SetLeftEyeReflectionCenter(const Vector3 & value);

		// Offset to set center for right eye cubemap
		// \return The current value.
		Vector3 GetRightEyeReflectionCenter() const;

		// Offset to set center for right eye cubemap
		// \param[in] value The new value.
		void SetRightEyeReflectionCenter(const Vector3 & value);

		//--END CUSTOM CODE--//
	protected:
		/*! Skyrim Shader Flags for setting render/shader options. */
		SkyrimShaderPropertyFlags1 shaderFlags1;
		/*! Skyrim Shader Flags for setting render/shader options. */
		SkyrimShaderPropertyFlags2 shaderFlags2;
		/*! Offset UVs */
		TexCoord uvOffset;
		/*! Offset UV Scale to repeat tiling textures, see above. */
		TexCoord uvScale;
		/*! Texture Set, can have override in an esm/esp */
		Ref<BSShaderTextureSet > textureSet;
		/*! Glow color and alpha */
		Color3 emissiveColor;
		/*! Multiplied emissive colors */
		float emissiveMultiple;
		/*! Unknown. */
		IndexString rootMaterial;
		/*! How to handle texture borders. */
		TexClampMode textureClampMode;
		/*! The materials opacity (1=non-transparent). */
		float alpha;
		/*! Refraction strength increases as value increases */
		float refractionStrength;
		/*! The material's specular power, or glossiness (0-999). */
		float glossiness;
		/*! Adds a colored highlight. */
		Color3 specularColor;
		/*! Brightness of specular highlight. (0=not visible) (0-999) */
		float specularStrength;
		/*! Controls strength for envmap/backlight/rim/softlight lighting effect? */
		float lightingEffect1;
		/*! Controls strength for envmap/backlight/rim/softlight lighting effect? */
		float lightingEffect2;
		/*! Unknown. */
		float subsurfaceRolloff;
		/*! Unknown. */
		float unknownFloat1;
		/*! Unknown. */
		float backlightPower;
		/*! GrayscaleToPaletteScale */
		float grayscaleToPaletteScale;
		/*! Fresnel Power */
		float fresnelPower;
		/*! Unknown. */
		float wetnessSpecScale;
		/*! Unknown. */
		float wetnessSpecPower;
		/*! Unknown. */
		float wetnessMinVar;
		/*! Unknown. */
		float wetnessEnvMapScale;
		/*! Unknown. */
		float wetnessFresnelPower;
		/*! Unknown. */
		float wetnessMetalness;
		/*! Scales the intensity of the environment/cube map. (0-1) */
		float environmentMapScale;
		/*! Unknown */
		unsigned short unknownEmapInt1;
		/*! Tints the base texture. Overridden by game settings. */
		Color3 skinTintColor;
		/*! Unknown */
		unsigned int unknownTintInt1;
		/*! Tints the base texture. Overridden by game settings. */
		Color3 hairTintColor;
		/*! Max Passes */
		float maxPasses;
		/*! Scale */
		float scale;
		/*! How far from the surface the inner layer appears to be. */
		float parallaxInnerLayerThickness;
		/*! Depth of inner parallax layer effect. */
		float parallaxRefractionScale;
		/*! Scales the inner parallax layer texture. */
		TexCoord parallaxInnerLayerTextureScale;
		/*! How strong the environment/cube map is. (0-??) */
		float parallaxEnvmapStrength;
		/*! Unknown/unused?  CK lists "snow material" when used. */
		Vector4 sparkleParameters;
		/*! Eye cubemap scale */
		float eyeCubemapScale;
		/*! Offset to set center for left eye cubemap */
		Vector3 leftEyeReflectionCenter;
		/*! Offset to set center for right eye cubemap */
		Vector3 rightEyeReflectionCenter;
	public:
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual void Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info);
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual void Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const;
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual void FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info);
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual list<NiObjectRef> GetRefs() const;
		/*! NIFLIB_HIDDEN function.  For internal use only. */
		NIFLIB_HIDDEN virtual list<NiObject *> GetPtrs() const;
	};

	//--BEGIN FILE FOOT CUSTOM CODE--//

	//--END CUSTOM CODE--//
} //End Niflib namespace
#endif
