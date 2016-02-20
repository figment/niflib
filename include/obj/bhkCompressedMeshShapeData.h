/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BHKCOMPRESSEDMESHSHAPEDATA_H_
#define _BHKCOMPRESSEDMESHSHAPEDATA_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "bhkRefObject.h"

// Include structures
#include "../gen/bhkCMSDMaterial.h"
#include "../gen/bhkCMSDTransform.h"
#include "../gen/bhkCMSDBigTris.h"
#include "../gen/bhkCMSDChunk.h"
namespace Niflib
{
	class bhkCompressedMeshShapeData;
	typedef Ref<bhkCompressedMeshShapeData> bhkCompressedMeshShapeDataRef;

	/*! A compressed mesh shape for collision in Skyrim. */
	class bhkCompressedMeshShapeData : public bhkRefObject
	{
	public:
		/*! Constructor */
		NIFLIB_API bhkCompressedMeshShapeData();

		/*! Destructor */
		NIFLIB_API virtual ~bhkCompressedMeshShapeData();

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

		// Number of bits in the shape-key reserved for a triangle index
		// \return The current value.
		unsigned int GetBitsPerIndex() const;

		// Number of bits in the shape-key reserved for a triangle index
		// \param[in] value The new value.
		void SetBitsPerIndex( unsigned int value );

		// Number of bits in the shape-key reserved for a triangle index and its winding
		// \return The current value.
		unsigned int GetBitsPerWIndex() const;

		// Number of bits in the shape-key reserved for a triangle index and its winding
		// \param[in] value The new value.
		void SetBitsPerWIndex( unsigned int value );

		// Mask used to get the triangle index and winding from a shape-key (common: 262143
		// = 0x3ffff)
		// \return The current value.
		unsigned int GetMaskWIndex() const;

		// Mask used to get the triangle index and winding from a shape-key (common: 262143
		// = 0x3ffff)
		// \param[in] value The new value.
		void SetMaskWIndex( unsigned int value );

		// Mask used to get the triangle index from a shape-key (common: 131071 = 0x1ffff)
		// \return The current value.
		unsigned int GetMaskIndex() const;

		// Mask used to get the triangle index from a shape-key (common: 131071 = 0x1ffff)
		// \param[in] value The new value.
		void SetMaskIndex( unsigned int value );

		// The radius of the storage mesh shape? Quantization error?
		// \return The current value.
		float GetError() const;

		// The radius of the storage mesh shape? Quantization error?
		// \param[in] value The new value.
		void SetError( float value );

		// The minimum boundary of the AABB (the coordinates of the corner with the lowest
		// numerical values)
		// \return The current value.
		Vector4 GetBoundsMin() const;

		// The minimum boundary of the AABB (the coordinates of the corner with the lowest
		// numerical values)
		// \param[in] value The new value.
		void SetBoundsMin( const Vector4 & value );

		// The maximum boundary of the AABB (the coordinates of the corner with the highest
		// numerical values)
		// \return The current value.
		Vector4 GetBoundsMax() const;

		// The maximum boundary of the AABB (the coordinates of the corner with the highest
		// numerical values)
		// \param[in] value The new value.
		void SetBoundsMax( const Vector4 & value );

		// Compressed Vertices?
		// \return The current value.
		vector<Vector4 > GetBigVerts() const;

		// Compressed Vertices?
		// \param[in] value The new value.
		void SetBigVerts( const vector<Vector4 >& value );

		// Unknown
		// \return The current value.
		vector<bhkCMSDBigTris > GetBigTris() const;

		// Unknown
		// \param[in] value The new value.
		void SetBigTris( const vector<bhkCMSDBigTris >& value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		// Number of bits in the shape-key reserved for a triangle index
		// \return The current value.
		NIFLIB_API unsigned int GetBitsPerIndex() const;

		// Number of bits in the shape-key reserved for a triangle index
		// \param[in] value The new value.
		NIFLIB_API void SetBitsPerIndex(unsigned int value);

		// Number of bits in the shape-key reserved for a triangle index and its winding
		// \return The current value.
		NIFLIB_API unsigned int GetBitsPerWIndex() const;

		// Number of bits in the shape-key reserved for a triangle index and its winding
		// \param[in] value The new value.
		NIFLIB_API void SetBitsPerWIndex(unsigned int value);

		// Mask used to get the triangle index and winding from a shape-key (common: 262143
		// = 0x3ffff)
		// \return The current value.
		NIFLIB_API unsigned int GetMaskWIndex() const;

		// Mask used to get the triangle index and winding from a shape-key (common: 262143
		// = 0x3ffff)
		// \param[in] value The new value.
		NIFLIB_API void SetMaskWIndex(unsigned int value);

		// Mask used to get the triangle index from a shape-key (common: 131071 = 0x1ffff)
		// \return The current value.
		NIFLIB_API unsigned int GetMaskIndex() const;

		// Mask used to get the triangle index from a shape-key (common: 131071 = 0x1ffff)
		// \param[in] value The new value.
		NIFLIB_API void SetMaskIndex(unsigned int value);

		// The radius of the storage mesh shape? Quantization error?
		// \return The current value.
		NIFLIB_API float GetError() const;

		// The radius of the storage mesh shape? Quantization error?
		// \param[in] value The new value.
		NIFLIB_API void SetError(float value);

		// The minimum boundary of the AABB (the coordinates of the corner with the lowest
		// numerical values)
		// \return The current value.
		NIFLIB_API Vector4 GetBoundsMin() const;

		// The minimum boundary of the AABB (the coordinates of the corner with the lowest
		// numerical values)
		// \param[in] value The new value.
		NIFLIB_API void SetBoundsMin(const Vector4 & value);

		// The maximum boundary of the AABB (the coordinates of the corner with the highest
		// numerical values)
		// \return The current value.
		NIFLIB_API Vector4 GetBoundsMax() const;

		// The maximum boundary of the AABB (the coordinates of the corner with the highest
		// numerical values)
		// \param[in] value The new value.
		NIFLIB_API void SetBoundsMax(const Vector4 & value);

		// Compressed Vertices?
		// \return The current value.
		NIFLIB_API const vector<Vector4>& GetBigVerts() const;

		// Compressed Vertices?
		// \param[in] value The new value.
		NIFLIB_API void SetBigVerts(const vector<Vector4 >& value);

		// Unknown
		// \return The current value.
		NIFLIB_API const vector<bhkCMSDBigTris>& GetBigTris() const;

		// Unknown
		// \param[in] value The new value.
		NIFLIB_API void SetBigTris(const vector<bhkCMSDBigTris >& value);

		// Unknown
		// \return The current value.
		NIFLIB_API const vector<bhkCMSDMaterial>& GetChunkMaterials() const;

		// Unknown
		// \param[in] value The new value.
		NIFLIB_API void SetChunkMaterials(const vector<bhkCMSDMaterial >& value);

		// Unknown
		// \return The current value.
		NIFLIB_API const vector<bhkCMSDTransform>& GetChunkTransforms() const;

		// Unknown
		// \param[in] value The new value.
		NIFLIB_API void SetChunkTransforms(const vector<bhkCMSDTransform >& value);

		// Unknown
		// \return The current value.
		NIFLIB_API const vector<bhkCMSDChunk>& GetChunks() const;

		// Unknown
		// \param[in] value The new value.
		NIFLIB_API void SetChunks(const vector<bhkCMSDChunk >& value);

		// Append Chunk to chunk list
		// \param[in] value The new value.
		NIFLIB_API void AppendChunk(const bhkCMSDChunk& value);

		//--END CUSTOM CODE--//
	protected:
		/*! Number of bits in the shape-key reserved for a triangle index */
		unsigned int bitsPerIndex;
		/*! Number of bits in the shape-key reserved for a triangle index and its winding */
		unsigned int bitsPerWIndex;
		/*!
		 * Mask used to get the triangle index and winding from a shape-key (common: 262143
		 * = 0x3ffff)
		 */
		unsigned int maskWIndex;
		/*! Mask used to get the triangle index from a shape-key (common: 131071 = 0x1ffff) */
		unsigned int maskIndex;
		/*! The radius of the storage mesh shape? Quantization error? */
		float error;
		/*!
		 * The minimum boundary of the AABB (the coordinates of the corner with the lowest
		 * numerical values)
		 */
		Vector4 boundsMin;
		/*!
		 * The maximum boundary of the AABB (the coordinates of the corner with the highest
		 * numerical values)
		 */
		Vector4 boundsMax;
		/*! Unknown */
		byte unknownByte1;
		/*! Unknown */
		unsigned int unknownInt3;
		/*! Unknown */
		unsigned int unknownInt4;
		/*! Unknown */
		unsigned int unknownInt5;
		/*! Unknown */
		byte unknownByte2;
		/*! Number of chunk materials */
		mutable unsigned int numMaterials;
		/*! Table (array) with sets of materials. Chunks refers to this table by index. */
		vector<bhkCMSDMaterial > chunkMaterials;
		/*! Unknown */
		unsigned int unknownInt6;
		/*! Number of chunk transformations */
		mutable unsigned int numTransforms;
		/*!
		 * Table (array) with sets of transformations. Chunks refers to this table by
		 * index.
		 */
		vector<bhkCMSDTransform > chunkTransforms;
		/*! Unknown */
		mutable unsigned int numBigVerts;
		/*! Compressed Vertices? */
		vector<Vector4 > bigVerts;
		/*! Unknown */
		mutable unsigned int numBigTris;
		/*! Unknown */
		vector<bhkCMSDBigTris > bigTris;
		/*! Unknown */
		mutable unsigned int numChunks;
		/*! Unknown. */
		vector<bhkCMSDChunk > chunks;
		/*! Unknown, end of block. */
		unsigned int unknownInt12;
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
