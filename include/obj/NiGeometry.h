/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIGEOMETRY_H_
#define _NIGEOMETRY_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
#include "../gen/SkinWeight.h"
#include "../obj/NiGeometryData.h"
//--END CUSTOM CODE--//

#include "NiAVObject.h"

// Include structures
#include "../Ref.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class NiGeometryData;
	class NiSkinInstance;
	class NiProperty;
	class NiGeometry;
	typedef Ref<NiGeometry> NiGeometryRef;

	/*!
	 * Describes a visible scene element with vertices like a mesh, a particle system,
	 * lines, etc.
	 */
	class NiGeometry : public NiAVObject
	{
	public:
		/*! Constructor */
		NIFLIB_API NiGeometry();

		/*! Destructor */
		NIFLIB_API virtual ~NiGeometry();

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

		// Data index (NiTriShapeData/NiTriStripData).
		// \return The current value.
		Ref<NiGeometryData > GetData() const;

		// Data index (NiTriShapeData/NiTriStripData).
		// \param[in] value The new value.
		void SetData( Ref<NiGeometryData > value );

		// Skin instance index.
		// \return The current value.
		Ref<NiSkinInstance > GetSkinInstance() const;

		// Skin instance index.
		// \param[in] value The new value.
		void SetSkinInstance( Ref<NiSkinInstance > value );

		// Placeholder for Skin and data for NiParticleSystem
		// \return The current value.
		array<2,unsigned int >  GetEmptyRefs() const;

		// Placeholder for Skin and data for NiParticleSystem
		// \param[in] value The new value.
		void SetEmptyRefs( const array<2,unsigned int >&  value );

		// Unknown string.  Shader?
		// \return The current value.
		vector<IndexString > GetMaterialName() const;

		// Unknown string.  Shader?
		// \param[in] value The new value.
		void SetMaterialName( const vector<IndexString >& value );

		// Unknown integer; often -1. (Is this a link, array index?)
		// \return The current value.
		vector<int > GetMaterialExtraData() const;

		// Unknown integer; often -1. (Is this a link, array index?)
		// \param[in] value The new value.
		void SetMaterialExtraData( const vector<int >& value );

		// Active Material; often -1. (Is this a link, array index?)
		// \return The current value.
		int GetActiveMaterial() const;

		// Active Material; often -1. (Is this a link, array index?)
		// \param[in] value The new value.
		void SetActiveMaterial( int value );

		// Shader.
		// \return The current value.
		bool GetHasShader() const;

		// Shader.
		// \param[in] value The new value.
		void SetHasShader( bool value );

		// The shader name.
		// \return The current value.
		IndexString GetShaderName() const;

		// The shader name.
		// \param[in] value The new value.
		void SetShaderName( const IndexString & value );

		// Dirty Flag?
		// \return The current value.
		bool GetDirtyFlag() const;

		// Dirty Flag?
		// \param[in] value The new value.
		void SetDirtyFlag( bool value );

		// Two property links, used by Bethesda.
		// \return The current value.
		array<2,Ref<NiProperty > >  GetBsProperties() const;

		// Two property links, used by Bethesda.
		// \param[in] value The new value.
		void SetBsProperties( const array<2,Ref<NiProperty > >&  value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//
		/*!
		 * Supports Skin / Bone Weight functionality should be interface hard to implement that way
		 */
		NIFLIB_API virtual bool SupportsSkinBinding() const override;

		/*!
			* Binds this geometry to a list of bones.  Creates and attatches a
			* NiSkinInstance and NiSkinData class. The bones must have a common
			* ancestor in the scenegraph.  This becomes the skeleton root.
			*/
		NIFLIB_API void BindSkin(vector< Ref<NiNode> >& bone_nodes) override;

		/*!
			* Binds this geometry to a list of bones.  Creates and attatches a
			* NiSkinInstance and NiSkinData class. The bones must have a common
			* ancestor in the scenegraph.  This becomes the skeleton root.
			*/
		NIFLIB_API void BindSkinWith(vector< Ref<NiNode> >& bone_nodes, NiObject * (*SkinInstConstructor)()) override;

		/*!
			* Unbinds this geometry from the bones.  This removes the NiSkinInstance and NiSkinData objects and causes this geometry to stop behaving as a skin.
			*/
		NIFLIB_API void UnbindSkin() override;

		/*!
			* Sets the skin weights in the attached NiSkinData object.
			* The version on this class calculates the center and radius of
			* each set of affected vertices automatically.
			*/
		NIFLIB_API void SetBoneWeights(unsigned int bone_index, const vector<SkinWeight> & n) override;

		/*!
			* Retrieves the NiSkinInstance object used by this geometry node, if any.
			* \return The NiSkinInstance object used by this geometry node, or NULL if none is used.
			*/
		NIFLIB_API Ref<NiSkinInstance> GetSkinInstance() const;

		/*!
			* Retrieves the geometry data object used by this geometry node, if any.  This contains the vertices, normals, etc. and can be shared among several geometry nodes.
			* \return The geometry data object, or NULL if there is none.
			*/
		NIFLIB_API Ref<NiGeometryData> GetData() const;

		/*!
			* Sets the geometry data object used by this geometry node.  This contains the vertices, normals, etc. and can be shared among several geometry nodes.
			* \param[in] n The new geometry data object, or NULL to clear the current one.
			*/
		NIFLIB_API void SetData(NiGeometryData * n);

		/*!
			* Retrieves the name of the shader used by this geometry node.  The allowable values are game-dependent.
			* \return The shader name.
			*/
		NIFLIB_API string GetShader() const;

		/*!
			* Sets the name of the shader used by this geometry node.  The allowable values are game-dependent.
			* \param[in] n The new shader name.
			*/
		NIFLIB_API void SetShader(const string & n);

		/*
			* Returns the position of the verticies and values of the normals after they
			* have been deformed by the positions of their skin influences.
			* \param[out] vertices A vector that will be filled with the skin deformed position of the verticies.
			* \param[out] normals A vector thta will be filled with the skin deformed normal values.
			*/
		NIFLIB_API void GetSkinDeformation(vector<Vector3> & vertices, vector<Vector3> & normals) const override;

		/*
			* Applies the local transform values to the vertices of the geometry and
			* zeros them out to the identity.
			*/
		NIFLIB_API void ApplyTransforms() override;

		/*
			* Propogates the transforms between this skin and the skeleton root,
			* and then applies them to the verticies of this skin.  Sets the overall
			* skin data transform to the identity.
			*/
		NIFLIB_API void ApplySkinOffset() override;

		/*
			* This automatically normalizes all the skin weights for this geometry node if it is bound to bones as a skin.  In other words, it will guarantee that the weights for all bones on each vertex will add up to 1.0.  This can be used to correct bad input data.
			*/
		NIFLIB_API void NormalizeSkinWeights() override;

		/*
			* Used to determine whether this mesh is influenced by bones as a skin.
			* \return True if this mesh is a skin, false otherwise.
			*/
		NIFLIB_API bool IsSkin() override;

		// Active Material.
		// \return The current value.
		NIFLIB_API int GetActiveMaterial() const;

		// Active Material.
		// \param[in] value The new value.
		NIFLIB_API void SetActiveMaterial(int value);

		// Shader.
		// \return The current value.
		NIFLIB_API bool HasShader() const;

		// Skin instance index.
		// \param[in] value The new value.
		NIFLIB_API void SetSkinInstance(NiSkinInstance * value);

		// Unknown integer; often -1. (Is this a link, array index?)
		// \return The current value.
		NIFLIB_API vector<int > GetMaterialExtraData() const;

		// Unknown integer; often -1. (Is this a link, array index?)
		// \param[in] value The new value.
		NIFLIB_API void SetMaterialExtraData(const vector<int >& value);

		// Shader.
		// \return The current value.
		NIFLIB_API bool GetHasShader() const;

		// Shader.
		// \param[in] value The new value.
		NIFLIB_API void SetHasShader(bool value);

		/*!
			* Adds a property to this object.  Properties specify various characteristics of the object that affect rendering.  They may be shared among objects.
			* \param[in] obj The new property that is to affect this object.
			*/
		NIFLIB_API virtual void AddProperty(NiProperty * obj) override;

		/*!
			* Removes a property from this object.  Properties specify various characteristics of the object that affect rendering.  They may be shared among objects.
			* \param[in] obj The property that is no longer to affect this object.
			*/
		NIFLIB_API virtual void RemoveProperty(NiProperty * obj) override;

		/*!
			* Removes all properties from this object.  Properties specify various characteristics of the object that affect rendering.  They may be shared among objects.
			*/
		NIFLIB_API virtual void ClearProperties() override;

		// Two property links, used by Bethesda.
		// \return The current value.
		NIFLIB_API Ref<NiProperty> GetBSProperty(int index) const;

		// Two property links, used by Bethesda.
		// \param[in] value The new value.
		NIFLIB_API void SetBSProperty(int index, const Ref<NiProperty>&  value);

		template <typename U>
		inline Niflib::Ref<const U> GetBSPropertyOfType() const
		{
			return StaticCast<const U>(GetBSPropertyOfType(U::TYPE));
		}
		template <typename U>
		inline Niflib::Ref<U> GetBSPropertyOfType()
		{
			return StaticCast<U>(GetBSPropertyOfType(U::TYPE));
		}
	protected:
		NIFLIB_API const NiProperty* GetBSPropertyOfType(const Niflib::Type& type) const;
		NIFLIB_API NiProperty* GetBSPropertyOfType(const Niflib::Type& type);

		//--END CUSTOM CODE--//
	protected:
		/*! Data index (NiTriShapeData/NiTriStripData). */
		Ref<NiGeometryData > data;
		/*! Skin instance index. */
		Ref<NiSkinInstance > skinInstance;
		/*! Placeholder for Skin and data for NiParticleSystem */
		array<2, unsigned int > emptyRefs;
		/*! Num Materials */
		mutable unsigned int numMaterials;
		/*! Unknown string.  Shader? */
		vector<IndexString > materialName;
		/*! Unknown integer; often -1. (Is this a link, array index?) */
		vector<int > materialExtraData;
		/*! Active Material; often -1. (Is this a link, array index?) */
		int activeMaterial;
		/*! Shader. */
		bool hasShader;
		/*! The shader name. */
		IndexString shaderName;
		/*! Unknown value, usually -1. (Not a link) */
		int unknownInteger;
		/*! Cyanide extension (only in version 10.2.0.0?). */
		byte unknownByte;
		/*! Unknown. */
		int unknownInteger2;
		/*! Dirty Flag? */
		bool dirtyFlag;
		/*! Dirty Flag? */
		int unknownInteger3;
		/*! Two property links, used by Bethesda. */
		array<2, Ref<NiProperty > > bsProperties;
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
