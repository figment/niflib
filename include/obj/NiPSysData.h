/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIPSYSDATA_H_
#define _NIPSYSDATA_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "NiRotatingParticlesData.h"

// Include structures
#include "../gen/ParticleDesc.h"
namespace Niflib
{
	class NiPSysData;
	typedef Ref<NiPSysData> NiPSysDataRef;

	/*! Particle system data. */
	class NiPSysData : public NiRotatingParticlesData
	{
	public:
		/*! Constructor */
		NIFLIB_API NiPSysData();

		/*! Destructor */
		NIFLIB_API virtual ~NiPSysData();

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
		vector<ParticleDesc > GetParticleDescriptions() const;

		// Unknown.
		// \param[in] value The new value.
		void SetParticleDescriptions( const vector<ParticleDesc >& value );

		// Has Rotation Speeds.
		// \return The current value.
		bool GetHasRotationSpeeds() const;

		// Has Rotation Speeds.
		// \param[in] value The new value.
		void SetHasRotationSpeeds( bool value );

		// Rotation Speeds
		// \return The current value.
		vector<float > GetRotationSpeeds() const;

		// Rotation Speeds
		// \param[in] value The new value.
		void SetRotationSpeeds( const vector<float >& value );

		// Num Added Particles
		// \return The current value.
		unsigned short GetNumAddedParticles() const;

		// Num Added Particles
		// \param[in] value The new value.
		void SetNumAddedParticles( unsigned short value );

		// Added Particles Base
		// \return The current value.
		unsigned short GetAddedParticlesBase() const;

		// Added Particles Base
		// \param[in] value The new value.
		void SetAddedParticlesBase( unsigned short value );

		// Boolean for Num Subtexture Offset UVs
		// \return The current value.
		bool GetHasSubtextureOffsetUvs() const;

		// Boolean for Num Subtexture Offset UVs
		// \param[in] value The new value.
		void SetHasSubtextureOffsetUvs( bool value );

		// Sets aspect ratio for Subtexture Offset UV quads
		// \return The current value.
		float GetAspectRatio() const;

		// Sets aspect ratio for Subtexture Offset UV quads
		// \param[in] value The new value.
		void SetAspectRatio( float value );

		// Defines UV offsets
		// \return The current value.
		vector<Vector4 > GetSubtextureOffsetUvs() const;

		// Defines UV offsets
		// \param[in] value The new value.
		void SetSubtextureOffsetUvs( const vector<Vector4 >& value );

		// Unknown
		// \return The current value.
		unsigned short GetMaxBsParticles() const;

		// Unknown
		// \param[in] value The new value.
		void SetMaxBsParticles( unsigned short value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		// Unknown.
		// \return The current value.
		NIFLIB_API vector<ParticleDesc > GetParticleDescriptions() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetParticleDescriptions(const vector<ParticleDesc >& value);

		// Boolean for Num Subtexture Offset UVs
		// \return The current value.
		NIFLIB_API bool GetHasSubtextureOffsetUvs() const;

		// Boolean for Num Subtexture Offset UVs
		// \param[in] value The new value.
		NIFLIB_API void SetHasSubtextureOffsetUvs(bool value);

		// Sets aspect ratio for Subtexture Offset UV quads
		// \return The current value.
		NIFLIB_API float GetAspectRatio() const;

		// Sets aspect ratio for Subtexture Offset UV quads
		// \param[in] value The new value.
		NIFLIB_API void SetAspectRatio(float value);

		// Defines UV offsets
		// \return The current value.
		NIFLIB_API vector<Vector4 > GetSubtextureOffsetUvs() const;

		// Defines UV offsets
		// \param[in] value The new value.
		NIFLIB_API void SetSubtextureOffsetUvs(const vector<Vector4 >& value);

		// Get Maximum Number of Particles
		// \return The maximum number of particles.
		NIFLIB_API unsigned short GetBSMaxParticles();
		//--END CUSTOM CODE--//
	protected:
		/*! Unknown. */
		vector<ParticleDesc > particleDescriptions;
		/*! Has Rotation Speeds. */
		bool hasRotationSpeeds;
		/*! Rotation Speeds */
		vector<float > rotationSpeeds;
		/*! Num Added Particles */
		unsigned short numAddedParticles;
		/*! Added Particles Base */
		unsigned short addedParticlesBase;
		/*! Boolean for Num Subtexture Offset UVs */
		bool hasSubtextureOffsetUvs;
		/*! How many quads to use in BSPSysSubTexModifier for texture atlasing */
		mutable unsigned int numSubtextureOffsetUvs;
		/*! Sets aspect ratio for Subtexture Offset UV quads */
		float aspectRatio;
		/*! Defines UV offsets */
		vector<Vector4 > subtextureOffsetUvs;
		/*! Unknown */
		unsigned int unknownInt4;
		/*! Unknown */
		unsigned int unknownInt5;
		/*! Unknown */
		unsigned int unknownInt6;
		/*! Unknown */
		unsigned short maxBsParticles;
		/*! Unknown */
		byte unknownByte4;
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
