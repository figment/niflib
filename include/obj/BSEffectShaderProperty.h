/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BSEFFECTSHADERPROPERTY_H_
#define _BSEFFECTSHADERPROPERTY_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "NiProperty.h"
namespace Niflib
{
	class BSEffectShaderProperty;
	typedef Ref<BSEffectShaderProperty> BSEffectShaderPropertyRef;

	/*!
	 * Skyrim non-PP shader model, used primarily for transparency effects, often as
	 * decal.
	 */
	class BSEffectShaderProperty : public NiProperty
	{
	public:
		/*! Constructor */
		NIFLIB_API BSEffectShaderProperty();

		/*! Destructor */
		NIFLIB_API virtual ~BSEffectShaderProperty();

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

		// Unknown.
		// \return The current value.
		SkyrimShaderPropertyFlags1 GetShaderFlags1() const;

		// Unknown.
		// \param[in] value The new value.
		void SetShaderFlags1( const SkyrimShaderPropertyFlags1 & value );

		// Unknown.
		// \return The current value.
		SkyrimShaderPropertyFlags2 GetShaderFlags2() const;

		// Unknown.
		// \param[in] value The new value.
		void SetShaderFlags2( const SkyrimShaderPropertyFlags2 & value );

		// Offset UVs
		// \return The current value.
		TexCoord GetUvOffset() const;

		// Offset UVs
		// \param[in] value The new value.
		void SetUvOffset( const TexCoord & value );

		// Offset UV Scale to repeat tiling textures
		// \return The current value.
		TexCoord GetUvScale() const;

		// Offset UV Scale to repeat tiling textures
		// \param[in] value The new value.
		void SetUvScale( const TexCoord & value );

		// points to an external texture.
		// \return The current value.
		string GetSourceTexture() const;

		// points to an external texture.
		// \param[in] value The new value.
		void SetSourceTexture( const string & value );

		// How to handle texture borders.
		// \return The current value.
		unsigned int GetTextureClampMode() const;

		// How to handle texture borders.
		// \param[in] value The new value.
		void SetTextureClampMode( unsigned int value );

		// At this cosine of angle falloff will be equal to Falloff Start Opacity
		// \return The current value.
		float GetFalloffStartAngle() const;

		// At this cosine of angle falloff will be equal to Falloff Start Opacity
		// \param[in] value The new value.
		void SetFalloffStartAngle( float value );

		// At this cosine of angle falloff will be equal to Falloff Stop Opacity
		// \return The current value.
		float GetFalloffStopAngle() const;

		// At this cosine of angle falloff will be equal to Falloff Stop Opacity
		// \param[in] value The new value.
		void SetFalloffStopAngle( float value );

		// Alpha falloff multiplier at start angle
		// \return The current value.
		float GetFalloffStartOpacity() const;

		// Alpha falloff multiplier at start angle
		// \param[in] value The new value.
		void SetFalloffStartOpacity( float value );

		// Alpha falloff multiplier at end angle
		// \return The current value.
		float GetFalloffStopOpacity() const;

		// Alpha falloff multiplier at end angle
		// \param[in] value The new value.
		void SetFalloffStopOpacity( float value );

		// Emissive color
		// \return The current value.
		Color4 GetEmissiveColor() const;

		// Emissive color
		// \param[in] value The new value.
		void SetEmissiveColor( const Color4 & value );

		// Multiplier for Emissive Color (RGB part)
		// \return The current value.
		float GetEmissiveMultiple() const;

		// Multiplier for Emissive Color (RGB part)
		// \param[in] value The new value.
		void SetEmissiveMultiple( float value );

		// Unknown.
		// \return The current value.
		float GetSoftFalloffDepth() const;

		// Unknown.
		// \param[in] value The new value.
		void SetSoftFalloffDepth( float value );

		// Points to an external texture, used as palette for
		// SLSF1_Greyscale_To_PaletteColor/SLSF1_Greyscale_To_PaletteAlpha.
		// \return The current value.
		string GetGreyscaleTexture() const;

		// Points to an external texture, used as palette for
		// SLSF1_Greyscale_To_PaletteColor/SLSF1_Greyscale_To_PaletteAlpha.
		// \param[in] value The new value.
		void SetGreyscaleTexture( const string & value );

		// Unknown.
		// \return The current value.
		string GetEnvMapTexture() const;

		// Unknown.
		// \param[in] value The new value.
		void SetEnvMapTexture( const string & value );

		// Unknown.
		// \return The current value.
		string GetNormalTexture() const;

		// Unknown.
		// \param[in] value The new value.
		void SetNormalTexture( const string & value );

		// Unknown.
		// \return The current value.
		string GetEnvMaskTexture() const;

		// Unknown.
		// \param[in] value The new value.
		void SetEnvMaskTexture( const string & value );

		// Unknown.
		// \return The current value.
		float GetEnvironmentMapScale() const;

		// Unknown.
		// \param[in] value The new value.
		void SetEnvironmentMapScale( float value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		// Unknown.
		// \return The current value.
		NIFLIB_API SkyrimShaderPropertyFlags1 GetShaderFlags1() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetShaderFlags1(const SkyrimShaderPropertyFlags1 & value);

		// Unknown.
		// \return The current value.
		NIFLIB_API SkyrimShaderPropertyFlags2 GetShaderFlags2() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetShaderFlags2(const SkyrimShaderPropertyFlags2 & value);

		// Offset UVs
		// \return The current value.
		NIFLIB_API TexCoord GetUvOffset() const;

		// Offset UVs
		// \param[in] value The new value.
		NIFLIB_API void SetUvOffset(const TexCoord & value);

		// Offset UV Scale to repeat tiling textures
		// \return The current value.
		NIFLIB_API TexCoord GetUvScale() const;

		// Offset UV Scale to repeat tiling textures
		// \param[in] value The new value.
		NIFLIB_API void SetUvScale(const TexCoord & value);

		// points to an external texture.
		// \return The current value.
		NIFLIB_API string GetSourceTexture() const;

		// points to an external texture.
		// \param[in] value The new value.
		NIFLIB_API void SetSourceTexture(const string & value);

		// How to handle texture borders.
		// \return The current value.
		NIFLIB_API unsigned int GetTextureClampMode() const;

		// How to handle texture borders.
		// \param[in] value The new value.
		NIFLIB_API void SetTextureClampMode(unsigned int value);

		// At this cosine of angle falloff will be equal to Falloff Start Opacity
		// \return The current value.
		NIFLIB_API float GetFalloffStartAngle() const;

		// At this cosine of angle falloff will be equal to Falloff Start Opacity
		// \param[in] value The new value.
		NIFLIB_API void SetFalloffStartAngle(float value);

		// At this cosine of angle falloff will be equal to Falloff Stop Opacity
		// \return The current value.
		NIFLIB_API float GetFalloffStopAngle() const;

		// At this cosine of angle falloff will be equal to Falloff Stop Opacity
		// \param[in] value The new value.
		NIFLIB_API void SetFalloffStopAngle(float value);

		// Alpha falloff multiplier at start angle
		// \return The current value.
		NIFLIB_API float GetFalloffStartOpacity() const;

		// Alpha falloff multiplier at start angle
		// \param[in] value The new value.
		NIFLIB_API void SetFalloffStartOpacity(float value);

		// Alpha falloff multiplier at end angle
		// \return The current value.
		NIFLIB_API float GetFalloffStopOpacity() const;

		// Alpha falloff multiplier at end angle
		// \param[in] value The new value.
		NIFLIB_API void SetFalloffStopOpacity(float value);

		// Emissive color
		// \return The current value.
		NIFLIB_API Color4 GetEmissiveColor() const;

		// Emissive color
		// \param[in] value The new value.
		NIFLIB_API void SetEmissiveColor(const Color4 & value);

		// Multiplier for Emissive Color (RGB part)
		// \return The current value.
		NIFLIB_API float GetEmissiveMultiple() const;

		// Multiplier for Emissive Color (RGB part)
		// \param[in] value The new value.
		NIFLIB_API void SetEmissiveMultiple(float value);

		// Unknown.
		// \return The current value.
		NIFLIB_API float GetSoftFalloffDepth() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetSoftFalloffDepth(float value);

		// Points to an external texture, used as palette for
		// SLSF1_Greyscale_To_PaletteColor/SLSF1_Greyscale_To_PaletteAlpha.
		// \return The current value.
		NIFLIB_API string GetGreyscaleTexture() const;

		// Points to an external texture, used as palette for
		// SLSF1_Greyscale_To_PaletteColor/SLSF1_Greyscale_To_PaletteAlpha.
		// \param[in] value The new value.
		NIFLIB_API void SetGreyscaleTexture(const string & value);

		// Unknown.
		// \return The current value.
		NIFLIB_API string GetEnvMapTexture() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetEnvMapTexture(const string & value);

		// Unknown.
		// \return The current value.
		NIFLIB_API string GetNormalTexture() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetNormalTexture(const string & value);

		// Unknown.
		// \return The current value.
		NIFLIB_API string GetEnvMaskTexture() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetEnvMaskTexture(const string & value);

		// Unknown.
		// \return The current value.
		NIFLIB_API float GetEnvironmentMapScale() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetEnvironmentMapScale(float value);

		//--END CUSTOM CODE--//
	protected:
		/*! Unknown. */
		SkyrimShaderPropertyFlags1 shaderFlags1;
		/*! Unknown. */
		SkyrimShaderPropertyFlags2 shaderFlags2;
		/*! Offset UVs */
		TexCoord uvOffset;
		/*! Offset UV Scale to repeat tiling textures */
		TexCoord uvScale;
		/*! points to an external texture. */
		string sourceTexture;
		/*! How to handle texture borders. */
		unsigned int textureClampMode;
		/*! At this cosine of angle falloff will be equal to Falloff Start Opacity */
		float falloffStartAngle;
		/*! At this cosine of angle falloff will be equal to Falloff Stop Opacity */
		float falloffStopAngle;
		/*! Alpha falloff multiplier at start angle */
		float falloffStartOpacity;
		/*! Alpha falloff multiplier at end angle */
		float falloffStopOpacity;
		/*! Emissive color */
		Color4 emissiveColor;
		/*! Multiplier for Emissive Color (RGB part) */
		float emissiveMultiple;
		/*! Unknown. */
		float softFalloffDepth;
		/*!
		 * Points to an external texture, used as palette for
		 * SLSF1_Greyscale_To_PaletteColor/SLSF1_Greyscale_To_PaletteAlpha.
		 */
		string greyscaleTexture;
		/*! Unknown. */
		string envMapTexture;
		/*! Unknown. */
		string normalTexture;
		/*! Unknown. */
		string envMaskTexture;
		/*! Unknown. */
		float environmentMapScale;
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
