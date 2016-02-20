/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NISOURCETEXTURE_H_
#define _NISOURCETEXTURE_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
#include "NiPixelData.h"
//--END CUSTOM CODE--//

#include "NiTexture.h"

// Include structures
#include "../Ref.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class NiObject;
	class ATextureRenderData;
	class NiSourceTexture;
	typedef Ref<NiSourceTexture> NiSourceTextureRef;

	/*! Describes texture source and properties. */
	class NiSourceTexture : public NiTexture
	{
	public:
		/*! Constructor */
		NIFLIB_API NiSourceTexture();

		/*! Destructor */
		NIFLIB_API virtual ~NiSourceTexture();

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

		// Is the texture external?
		// \return The current value.
		byte GetUseExternal() const;

		// Is the texture external?
		// \param[in] value The new value.
		void SetUseExternal( byte value );

		// The external texture file name.
		// \return The current value.
		IndexString GetFileName() const;

		// The external texture file name.
		// \param[in] value The new value.
		void SetFileName( const IndexString & value );

		// The original source filename of the image embedded by the referred NiPixelData
		// object.
		// \return The current value.
		IndexString GetFileName() const;

		// The original source filename of the image embedded by the referred NiPixelData
		// object.
		// \param[in] value The new value.
		void SetFileName( const IndexString & value );

		// Pixel data object index. NiPixelData or NiPersistentSrcTextureRendererData
		// \return The current value.
		Ref<ATextureRenderData > GetPixelData() const;

		// Pixel data object index. NiPixelData or NiPersistentSrcTextureRendererData
		// \param[in] value The new value.
		void SetPixelData( Ref<ATextureRenderData > value );

		// Specifies the way the image will be stored.
		// \return The current value.
		PixelLayout GetPixelLayout() const;

		// Specifies the way the image will be stored.
		// \param[in] value The new value.
		void SetPixelLayout( const PixelLayout & value );

		// Specifies whether mip maps are used.
		// \return The current value.
		MipMapFormat GetUseMipmaps() const;

		// Specifies whether mip maps are used.
		// \param[in] value The new value.
		void SetUseMipmaps( const MipMapFormat & value );

		// Note: the NiTriShape linked to this object must have a NiAlphaProperty in its
		// list of properties to enable material and/or texture transparency.
		// \return The current value.
		AlphaFormat GetAlphaFormat() const;

		// Note: the NiTriShape linked to this object must have a NiAlphaProperty in its
		// list of properties to enable material and/or texture transparency.
		// \param[in] value The new value.
		void SetAlphaFormat( const AlphaFormat & value );

		// Is Static?
		// \return The current value.
		byte GetIsStatic() const;

		// Is Static?
		// \param[in] value The new value.
		void SetIsStatic( byte value );

		// Load direct to renderer
		// \return The current value.
		bool GetDirectRender() const;

		// Load direct to renderer
		// \param[in] value The new value.
		void SetDirectRender( bool value );

		// Render data is persistant
		// \return The current value.
		bool GetPersistRenderData() const;

		// Render data is persistant
		// \param[in] value The new value.
		void SetPersistRenderData( bool value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		/*!
		 * Used to check whether the texture referenced by this object is an external file.
		 * \return True if the texture is stored in an external file, false if it is stored within this NIF file.
		 */
		NIFLIB_API bool IsTextureExternal() const;

		/*!
		 * Sets a new external file texture.  Removes any existing texture references, whether internal or external.
		 * \param[in] file_name The file name of the external texture.  Often needs to follow game guidlines to be found.
		 */
		NIFLIB_API void SetExternalTexture(string file_name);

		/*!
		 * Sets a new internal file texture.  Removes any existing texture references, whether internal or external.
		 * \param[in] original_file_name The original file name of the texture.  This may be optional.
		 * \param[in] pixel_data The NiPixelData object that contains the texture image data.
		 */
		NIFLIB_API void SetInternalTexture(string original_file_name, NiPixelData * pixel_data);

		/*!
		 * Returns either the file name of the external texture, or the original file name of the internal one.
		 * \return The name of the texture file.
		 */
		NIFLIB_API string GetTextureFileName() const;

		/*!
		 * Returns a reference to the texture image data object used by this texture, if any.
		 * \return The iamge data object referenced by this texture, or NULL if one is not being used.
		 */
		NIFLIB_API Ref<NiPixelData> GetPixelData() const;

		/*!
		 * Gets the current pixel layout of this texture.  This is the image format, usually the color depth.
		 * \return The pixel layout of this texture.
		 */
		NIFLIB_API PixelLayout GetPixelLayout() const;

		/*!
		 * Sets the pixel layout of this texture.  This is the image format, usually the color depth.
		 * \param[in] n The new pixel layout of this texture.
		 */
		NIFLIB_API void SetPixelLayout(PixelLayout n);

		/*!
		 * Gets the current mip map format of this texture.  Specifies whether or not the texture contains mipmaps which are smaller versions of the texture that will be displayed on far away objects that use it.
		 * \return The current mip map format of this texture.
		 */
		NIFLIB_API MipMapFormat GetMipMapFormat() const;

		/*!
		 * Sets the mip map format of this texture.  Specifies whether or not the texture contains mipmaps which are smaller versions of the texture that will be displayed on far away objects that use it.
		 * \param[in] n The new mip map format of this texture.
		 */
		NIFLIB_API void SetMipMapFormat(MipMapFormat n);

		/*!
		 * Gets the current alpha format of this texture.  Specifies whether and how the texture uses alpha transparency.
		 * \return The current alpha format of this texture.
		 */
		NIFLIB_API AlphaFormat GetAlphaFormat() const;

		/*!
		 * Sets the alpha format of this texture.  Specifies whether and how the texture uses alpha transparency.
		 * \param[in] n The new alpha format of this texture.
		 */
		NIFLIB_API void SetAlphaFormat(AlphaFormat n);

		//--END CUSTOM CODE--//
	protected:
		/*! Is the texture external? */
		byte useExternal;
		/*! The external texture file name. */
		IndexString fileName;
		/*! Unknown. */
		Ref<NiObject > unknownLink;
		/*! Unknown. Seems to be set if Pixel Data is present? */
		byte unknownByte;
		/*! Pixel data object index. NiPixelData or NiPersistentSrcTextureRendererData */
		Ref<ATextureRenderData > pixelData;
		/*! Specifies the way the image will be stored. */
		PixelLayout pixelLayout;
		/*! Specifies whether mip maps are used. */
		MipMapFormat useMipmaps;
		/*!
		 * Note: the NiTriShape linked to this object must have a NiAlphaProperty in its
		 * list of properties to enable material and/or texture transparency.
		 */
		AlphaFormat alphaFormat;
		/*! Is Static? */
		byte isStatic;
		/*! Load direct to renderer */
		bool directRender;
		/*! Render data is persistant */
		bool persistRenderData;
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
