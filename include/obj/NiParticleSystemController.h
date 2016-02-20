/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIPARTICLESYSTEMCONTROLLER_H_
#define _NIPARTICLESYSTEMCONTROLLER_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "NiTimeController.h"

// Include structures
#include "../Ref.h"
#include "../gen/Particle.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class NiObject;
	class NiParticleModifier;
	class NiColorData;
	class NiParticleSystemController;
	typedef Ref<NiParticleSystemController> NiParticleSystemControllerRef;

	/*! A generic particle system time controller object. */
	class NiParticleSystemController : public NiTimeController
	{
	public:
		/*! Constructor */
		NIFLIB_API NiParticleSystemController();

		/*! Destructor */
		NIFLIB_API virtual ~NiParticleSystemController();

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

		// Particle speed in old files
		// \return The current value.
		unsigned int GetOldSpeed() const;

		// Particle speed in old files
		// \param[in] value The new value.
		void SetOldSpeed( unsigned int value );

		// Particle speed
		// \return The current value.
		float GetSpeed() const;

		// Particle speed
		// \param[in] value The new value.
		void SetSpeed( float value );

		// Particle random speed modifier
		// \return The current value.
		float GetSpeedRandom() const;

		// Particle random speed modifier
		// \param[in] value The new value.
		void SetSpeedRandom( float value );

		// vertical emit direction [radians]
		//             0.0 : up
		//             1.6 : horizontal
		//             3.1416 : down
		// \return The current value.
		float GetVerticalDirection() const;

		// vertical emit direction [radians]
		//             0.0 : up
		//             1.6 : horizontal
		//             3.1416 : down
		// \param[in] value The new value.
		void SetVerticalDirection( float value );

		// emitter's vertical opening angle [radians]
		// \return The current value.
		float GetVerticalAngle() const;

		// emitter's vertical opening angle [radians]
		// \param[in] value The new value.
		void SetVerticalAngle( float value );

		// horizontal emit direction
		// \return The current value.
		float GetHorizontalDirection() const;

		// horizontal emit direction
		// \param[in] value The new value.
		void SetHorizontalDirection( float value );

		// emitter's horizontal opening angle
		// \return The current value.
		float GetHorizontalAngle() const;

		// emitter's horizontal opening angle
		// \param[in] value The new value.
		void SetHorizontalAngle( float value );

		// Particle size
		// \return The current value.
		float GetSize() const;

		// Particle size
		// \param[in] value The new value.
		void SetSize( float value );

		// Particle emit start time
		// \return The current value.
		float GetEmitStartTime() const;

		// Particle emit start time
		// \param[in] value The new value.
		void SetEmitStartTime( float value );

		// Particle emit stop time
		// \return The current value.
		float GetEmitStopTime() const;

		// Particle emit stop time
		// \param[in] value The new value.
		void SetEmitStopTime( float value );

		// Particle emission rate in old files
		// \return The current value.
		unsigned int GetOldEmitRate() const;

		// Particle emission rate in old files
		// \param[in] value The new value.
		void SetOldEmitRate( unsigned int value );

		// Particle emission rate (particles per second)
		// \return The current value.
		float GetEmitRate() const;

		// Particle emission rate (particles per second)
		// \param[in] value The new value.
		void SetEmitRate( float value );

		// Particle lifetime
		// \return The current value.
		float GetLifetime() const;

		// Particle lifetime
		// \param[in] value The new value.
		void SetLifetime( float value );

		// Particle lifetime random modifier
		// \return The current value.
		float GetLifetimeRandom() const;

		// Particle lifetime random modifier
		// \param[in] value The new value.
		void SetLifetimeRandom( float value );

		// Bit 0: Emit Rate toggle bit (0 = auto adjust, 1 = use Emit Rate value)
		// \return The current value.
		unsigned short GetEmitFlags() const;

		// Bit 0: Emit Rate toggle bit (0 = auto adjust, 1 = use Emit Rate value)
		// \param[in] value The new value.
		void SetEmitFlags( unsigned short value );

		// Particle random start translation vector
		// \return The current value.
		Vector3 GetStartRandom() const;

		// Particle random start translation vector
		// \param[in] value The new value.
		void SetStartRandom( const Vector3 & value );

		// This index targets the particle emitter object (TODO: find out what type of
		// object this refers to).
		// \return The current value.
		NiObject * GetEmitter() const;

		// This index targets the particle emitter object (TODO: find out what type of
		// object this refers to).
		// \param[in] value The new value.
		void SetEmitter( NiObject * value );

		// Particle velocity
		// \return The current value.
		Vector3 GetParticleVelocity() const;

		// Particle velocity
		// \param[in] value The new value.
		void SetParticleVelocity( const Vector3 & value );

		// The particle's age.
		// \return The current value.
		float GetParticleLifetime() const;

		// The particle's age.
		// \param[in] value The new value.
		void SetParticleLifetime( float value );

		// Unknown.
		// \return The current value.
		Ref<NiObject > GetParticleLink() const;

		// Unknown.
		// \param[in] value The new value.
		void SetParticleLink( Ref<NiObject > value );

		// Timestamp of the last update.
		// \return The current value.
		unsigned int GetParticleTimestamp() const;

		// Timestamp of the last update.
		// \param[in] value The new value.
		void SetParticleTimestamp( unsigned int value );

		// Particle/vertex index matches array index
		// \return The current value.
		unsigned short GetParticleVertexId() const;

		// Particle/vertex index matches array index
		// \param[in] value The new value.
		void SetParticleVertexId( unsigned short value );

		// Number of valid entries in the following array. (Number of active particles at
		// the time the system was saved)
		// \return The current value.
		unsigned short GetNumValid() const;

		// Number of valid entries in the following array. (Number of active particles at
		// the time the system was saved)
		// \param[in] value The new value.
		void SetNumValid( unsigned short value );

		// Individual particle modifiers?
		// \return The current value.
		vector<Particle > GetParticles() const;

		// Individual particle modifiers?
		// \param[in] value The new value.
		void SetParticles( const vector<Particle >& value );

		// Link to some optional particle modifiers (NiGravity, NiParticleGrowFade,
		// NiParticleBomb, ...)
		// \return The current value.
		Ref<NiParticleModifier > GetParticleExtra() const;

		// Link to some optional particle modifiers (NiGravity, NiParticleGrowFade,
		// NiParticleBomb, ...)
		// \param[in] value The new value.
		void SetParticleExtra( Ref<NiParticleModifier > value );

		// Trailing null byte
		// \return The current value.
		byte GetTrailer() const;

		// Trailing null byte
		// \param[in] value The new value.
		void SetTrailer( byte value );

		// Unknown.
		// \return The current value.
		Ref<NiColorData > GetColorData() const;

		// Unknown.
		// \param[in] value The new value.
		void SetColorData( Ref<NiColorData > value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//
		//--END CUSTOM CODE--//
	protected:
		/*! Particle speed in old files */
		unsigned int oldSpeed;
		/*! Particle speed */
		float speed;
		/*! Particle random speed modifier */
		float speedRandom;
		/*!
		 * vertical emit direction [radians]
		 *             0.0 : up
		 *             1.6 : horizontal
		 *             3.1416 : down
		 */
		float verticalDirection;
		/*! emitter's vertical opening angle [radians] */
		float verticalAngle;
		/*! horizontal emit direction */
		float horizontalDirection;
		/*! emitter's horizontal opening angle */
		float horizontalAngle;
		/*! Unknown. */
		Vector3 unknownNormal_;
		/*! Unknown. */
		Color4 unknownColor_;
		/*! Particle size */
		float size;
		/*! Particle emit start time */
		float emitStartTime;
		/*! Particle emit stop time */
		float emitStopTime;
		/*! Unknown byte, (=0) */
		byte unknownByte;
		/*! Particle emission rate in old files */
		unsigned int oldEmitRate;
		/*! Particle emission rate (particles per second) */
		float emitRate;
		/*! Particle lifetime */
		float lifetime;
		/*! Particle lifetime random modifier */
		float lifetimeRandom;
		/*! Bit 0: Emit Rate toggle bit (0 = auto adjust, 1 = use Emit Rate value) */
		unsigned short emitFlags;
		/*! Particle random start translation vector */
		Vector3 startRandom;
		/*!
		 * This index targets the particle emitter object (TODO: find out what type of
		 * object this refers to).
		 */
		NiObject * emitter;
		/*! ? short=0 ? */
		unsigned short unknownShort2_;
		/*! ? float=1.0 ? */
		float unknownFloat13_;
		/*! ? int=1 ? */
		unsigned int unknownInt1_;
		/*! ? int=0 ? */
		unsigned int unknownInt2_;
		/*! ? short=0 ? */
		unsigned short unknownShort3_;
		/*! Particle velocity */
		Vector3 particleVelocity;
		/*! Unknown */
		Vector3 particleUnknownVector;
		/*! The particle's age. */
		float particleLifetime;
		/*! Unknown. */
		Ref<NiObject > particleLink;
		/*! Timestamp of the last update. */
		unsigned int particleTimestamp;
		/*! Unknown short */
		mutable unsigned short particleUnknownShort;
		/*! Particle/vertex index matches array index */
		unsigned short particleVertexId;
		/*! Size of the following array. (Maximum number of simultaneous active particles) */
		mutable unsigned short numParticles;
		/*!
		 * Number of valid entries in the following array. (Number of active particles at
		 * the time the system was saved)
		 */
		unsigned short numValid;
		/*! Individual particle modifiers? */
		vector<Particle > particles;
		/*! unknown int (=0xffffffff) */
		Ref<NiObject > unknownLink;
		/*!
		 * Link to some optional particle modifiers (NiGravity, NiParticleGrowFade,
		 * NiParticleBomb, ...)
		 */
		Ref<NiParticleModifier > particleExtra;
		/*! Unknown int (=0xffffffff) */
		Ref<NiObject > unknownLink2;
		/*! Trailing null byte */
		byte trailer;
		/*! Unknown. */
		Ref<NiColorData > colorData;
		/*! Unknown. */
		float unknownFloat1;
		/*! Unknown. */
		vector<float > unknownFloats2;
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
