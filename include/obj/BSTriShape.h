/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BSTRISHAPE_H_
#define _BSTRISHAPE_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "BSShape.h"

// Include structures
#include "../gen/SphereBV.h"
#include "../Ref.h"
#include "../gen/BSVertexData.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class NiObject;
	class NiProperty;
	class BSTriShape;
	typedef Ref<BSTriShape> BSTriShapeRef;

	/*! Fallout 4 */
	class BSTriShape : public BSShape
	{
	public:
		/*! Constructor */
		NIFLIB_API BSTriShape();

		/*! Destructor */
		NIFLIB_API virtual ~BSTriShape();

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

		// The combined bounding volume of all submeshes.
		// \return The current value.
		SphereBV GetBound() const;

		// The combined bounding volume of all submeshes.
		// \param[in] value The new value.
		void SetBound( const SphereBV & value );

		// Unknown.
		// \return The current value.
		Ref<NiObject > GetSkin() const;

		// Unknown.
		// \param[in] value The new value.
		void SetSkin( Ref<NiObject > value );

		// Unknown.
		// \return The current value.
		array<2,Ref<NiProperty > >  GetBsProperties() const;

		// Unknown.
		// \param[in] value The new value.
		void SetBsProperties( const array<2,Ref<NiProperty > >&  value );

		// Unknown.
		// \return The current value.
		array<8,byte >  GetVertexFlags() const;

		// Unknown.
		// \param[in] value The new value.
		void SetVertexFlags( const array<8,byte >&  value );

		// Unknown.
		// \return The current value.
		unsigned int GetDataSize() const;

		// Unknown.
		// \param[in] value The new value.
		void SetDataSize( unsigned int value );

		// Unknown.
		// \return The current value.
		vector<BSVertexData > GetVertexData() const;

		// Unknown.
		// \param[in] value The new value.
		void SetVertexData( const vector<BSVertexData >& value );

		// Unknown.
		// \return The current value.
		vector<Triangle > GetTriangles() const;

		// Unknown.
		// \param[in] value The new value.
		void SetTriangles( const vector<Triangle >& value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		/*!
		* Adds a property to this object.  Properties specify various characteristics of the object that affect rendering.  They may be shared among objects.
		* \param[in] obj The new property that is to affect this object.
		*/
		NIFLIB_API virtual void AddProperty(NiProperty * obj);

		/*!
		* Removes a property from this object.  Properties specify various characteristics of the object that affect rendering.  They may be shared among objects.
		* \param[in] obj The property that is no longer to affect this object.
		*/
		NIFLIB_API virtual void RemoveProperty(NiProperty * obj);

		/*!
		* Removes all properties from this object.  Properties specify various characteristics of the object that affect rendering.  They may be shared among objects.
		*/
		NIFLIB_API virtual void ClearProperties();

		// Two property links, used by Bethesda.
		// \return The current value.
		NIFLIB_API Ref<NiProperty> GetBSProperty(int index) const;

		// Two property links, used by Bethesda.
		// \param[in] value The new value.
		NIFLIB_API void SetBSProperty(int index, const Ref<NiProperty>&  value);

		/*!
		* Returns the number of verticies that make up this mesh.  This is also the number of normals, colors, and UV coordinates if these are used.
		* \return The number of vertices that make up this mesh.
		* \sa IShapeData::SetVertexCount
		*/
		NIFLIB_API int GetVertexCount() const;

		//--Getters--//

		/*!
		* Returns the 3D center of the mesh.
		* \return The center of this mesh.
		*/
		NIFLIB_API Vector3 GetCenter() const;

		/*!
		* Returns the radius of the mesh.  That is the distance from the center to
		* the farthest point from the center.
		* \return The radius of this mesh.
		*/
		NIFLIB_API float GetRadius() const;

		/*!
		* Used to retrive the vertices used by this mesh.  The size of the vector will be the same as the vertex count retrieved with the IShapeData::GetVertexCount function.
		* \return A vector cntaining the vertices used by this mesh.
		* \sa IShapeData::SetVertices, IShapeData::GetVertexCount, IShapeData::SetVertexCount.
		*/
		NIFLIB_API vector<Vector3> GetVertices() const;

		/*!
		* Used to retrive the normals used by this mesh.  The size of the vector will either be zero if no normals are used, or be the same as the vertex count retrieved with the IShapeData::GetVertexCount function.
		* \return A vector cntaining the normals used by this mesh, if any.
		* \sa IShapeData::SetNormals, IShapeData::GetVertexCount, IShapeData::SetVertexCount.
		*/
		NIFLIB_API vector<Vector3> GetNormals() const;

		// Do we have vertex colors? These are usually used to fine-tune the lighting of
		// the model.
		//
		//             Note: how vertex colors influence the model can be controlled by
		// having a NiVertexColorProperty object as a property child of the root node. If
		// this property object is not present, the vertex colors fine-tune lighting.
		//
		//             Note 2: set to either 0 or 0xFFFFFFFF for NifTexture compatibility.
		// \return The current value.
		NIFLIB_API bool HasColors() const;

		/*!
		* Used to retrive the vertex colors used by this mesh.  The size of the vector will either be zero if no vertex colors are used, or be the same as the vertex count retrieved with the IShapeData::GetVertexCount function.
		* \return A vector cntaining the vertex colors used by this mesh, if any.
		* \sa IShapeData::SetVertexColors, IShapeData::GetVertexCount, IShapeData::SetVertexCount.
		*/
		NIFLIB_API vector<Color4> GetColors() const;

		/*!
		* Used to retrive the texture coordinates from one of the texture sets used by this mesh.  The function will throw an exception if a texture set index that does not exist is specified.  The size of the vector will be the same as the vertex count retrieved with the IShapeData::GetVertexCount function.
		* \param index The index of the texture coordinate set to retrieve the texture coordinates from.  This index is zero based and must be a positive number smaller than that returned by the IShapeData::GetUVSetCount function.  If there are no texture coordinate sets, this function will throw an exception.
		* \return A vector cntaining the the texture coordinates used by the requested texture coordinate set.
		* \sa IShapeData::SetUVSet, IShapeData::GetUVSetCount, IShapeData::SetUVSetCount, IShapeData::GetVertexCount, IShapeData::SetVertexCount.
		*/
		NIFLIB_API vector<TexCoord> GetUVSet() const;

		// Do we have lighting normals? These are essential for proper lighting: if not
		// present, the model will only be influenced by ambient light.
		// \return The current value.
		NIFLIB_API bool HasNormals() const;

		// Do we have lighting normals? These are essential for proper lighting: if not
		// present, the model will only be influenced by ambient light.
		// \return The current value.
		NIFLIB_API bool HasTangentSpace() const;

		// Unknown. Binormal & tangents? has_normals must be set as well for this field to
		// be present.
		// \return The current value.
		NIFLIB_API vector<Vector3 > GetBitangents() const;

		// Unknown. Binormal & tangents?
		// \return The current value.
		NIFLIB_API vector<Vector3 > GetTangents() const;

		// Do we have bone weights?
		// \return Whether skinning data is present
		NIFLIB_API bool HasSkin() const;

		/*!
		* Retrieves the skin weights for a particular bone.  This information includes the vertex index into the geometry data's vertex array, and the percentage weight that defines how much the movement of this bone influences its position.
		* \param[in] bone_index The numeric index of the bone that the skin weight data should be returned for.  Must be >= zero and < the number returned by GetBoneCount.
		* \return The skin weight data for the specified bone.
		*/
		NIFLIB_API int GetBoneWeights(unsigned int vertexIdx, float weights[4], int bones[4]) const;

		// The combined bounding volume of all submeshes.
		// \return The current value.
		NIFLIB_API SphereBV GetBounds() const;

		// The combined bounding volume of all submeshes.
		// \param[in] value The new value.
		NIFLIB_API void SetBounds(const SphereBV & value);

		// Unknown.
		// \return The current value.
		NIFLIB_API Ref<NiObject > GetSkin() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetSkin(Ref<NiObject > value);

		// Unknown.
		// \return The current value.
		NIFLIB_API const vector<BSVertexData>& GetVertexData() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetVertexData(const vector<BSVertexData >& value);

		// Set VertexFlags from features
		NIFLIB_API void SetVertexFlags(bool uv, bool vc, bool normal, bool tangent, bool skin, bool fullfloat);

		// Unknown.
		// \return The current value.
		NIFLIB_API const vector<Triangle>& GetTriangles() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetTriangles(const vector<Triangle >& value);

		/*
		* Used to determine whether this mesh is influenced by bones as a skin.
		* \return True if this mesh is a skin, false otherwise.
		*/
		NIFLIB_API bool IsSkin() override;

	private:
		int dataSizeCalc(const NifInfo & info) const;
		//--END CUSTOM CODE--//
	protected:
		/*! The combined bounding volume of all submeshes. */
		SphereBV bound;
		/*! Unknown. */
		Ref<NiObject > skin;
		/*! Unknown. */
		array<2, Ref<NiProperty > > bsProperties;
		/*! Unknown. */
		array<8, byte > vertexFlags;
		/*! Unknown. */
		mutable unsigned int numTriangles;
		/*! Unknown. */
		mutable unsigned short numVertices;
		/*! Unknown. */
		mutable unsigned int dataSize;
		/*! Unknown. */
		vector<BSVertexData > vertexData;
		/*! Unknown. */
		vector<Triangle > triangles;
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
