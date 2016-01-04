/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BHKRIGIDBODY_H_
#define _BHKRIGIDBODY_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "bhkEntity.h"

// Include structures
#include "../gen/QuaternionXYZW.h"
#include "../Ref.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class bhkSerializable;
	class bhkRigidBody;
	typedef Ref<bhkRigidBody> bhkRigidBodyRef;

	/*!
	 * This is the default body type for all "normal" usable and static world objects.
	 * The "T" suffix
	 *         marks this body as active for translation and rotation, a normal
	 * bhkRigidBody ignores those
	 *         properties. Because the properties are equal, a bhkRigidBody may be
	 * renamed
	 *         into a bhkRigidBodyT and vice-versa.
	 */
	class bhkRigidBody : public bhkEntity
	{
	public:
		/*! Constructor */
		NIFLIB_API bhkRigidBody();

		/*! Destructor */
		NIFLIB_API virtual ~bhkRigidBody();

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

		// The collision response. See hkResponseType for hkpWorld default implementations.
		// \return The current value.
		hkResponseType GetCollisionResponse_() const;

		// The collision response. See hkResponseType for hkpWorld default implementations.
		// \param[in] value The new value.
		void SetCollisionResponse_( const hkResponseType & value );

		// Lowers the frequency for processContactCallbacks. A value of 5 means that a
		// callback is raised every 5th frame.
		// \return The current value.
		unsigned short GetProcessContactCallbackDelay_() const;

		// Lowers the frequency for processContactCallbacks. A value of 5 means that a
		// callback is raised every 5th frame.
		// \param[in] value The new value.
		void SetProcessContactCallbackDelay_( unsigned short value );

		// Copy of Layer value?
		// \return The current value.
		OblivionLayer GetLayerCopy() const;

		// Copy of Layer value?
		// \param[in] value The new value.
		void SetLayerCopy( const OblivionLayer & value );

		// Copy of Col Filter value?
		// \return The current value.
		byte GetColFilterCopy() const;

		// Copy of Col Filter value?
		// \param[in] value The new value.
		void SetColFilterCopy( byte value );

		// Copy of Skyrim Layer value?
		// \return The current value.
		SkyrimLayer GetSkyrimLayerCopy() const;

		// Copy of Skyrim Layer value?
		// \param[in] value The new value.
		void SetSkyrimLayerCopy( const SkyrimLayer & value );

		// Copy of Flags & Part number?
		// \return The current value.
		byte GetFlagsAndPartNumberCopy() const;

		// Copy of Flags & Part number?
		// \param[in] value The new value.
		void SetFlagsAndPartNumberCopy( byte value );

		// A vector that moves the body by the specified amount. Only enabled in
		// bhkRigidBodyT objects.
		// \return The current value.
		Vector4 GetTranslation() const;

		// A vector that moves the body by the specified amount. Only enabled in
		// bhkRigidBodyT objects.
		// \param[in] value The new value.
		void SetTranslation( const Vector4 & value );

		// The rotation Yaw/Pitch/Roll to apply to the body. Only enabled in bhkRigidBodyT
		// objects.
		// \return The current value.
		QuaternionXYZW GetRotation() const;

		// The rotation Yaw/Pitch/Roll to apply to the body. Only enabled in bhkRigidBodyT
		// objects.
		// \param[in] value The new value.
		void SetRotation( const QuaternionXYZW & value );

		// Linear velocity.
		// \return The current value.
		Vector4 GetLinearVelocity() const;

		// Linear velocity.
		// \param[in] value The new value.
		void SetLinearVelocity( const Vector4 & value );

		// Angular velocity.
		// \return The current value.
		Vector4 GetAngularVelocity() const;

		// Angular velocity.
		// \param[in] value The new value.
		void SetAngularVelocity( const Vector4 & value );

		// Defines how the mass is distributed among the body.
		// \return The current value.
		InertiaMatrix GetInertia() const;

		// Defines how the mass is distributed among the body.
		// \param[in] value The new value.
		void SetInertia( const InertiaMatrix & value );

		// This seems to be used to relocate the object's center of mass. Useful for
		// balancing objects in contraints.
		// \return The current value.
		Vector4 GetCenter() const;

		// This seems to be used to relocate the object's center of mass. Useful for
		// balancing objects in contraints.
		// \param[in] value The new value.
		void SetCenter( const Vector4 & value );

		// The body's mass in kg. A mass of zero represents an immovable object.
		// \return The current value.
		float GetMass() const;

		// The body's mass in kg. A mass of zero represents an immovable object.
		// \param[in] value The new value.
		void SetMass( float value );

		// Damping value for linear movement. A value that is too small fixes the object in
		// place.
		// \return The current value.
		float GetLinearDamping() const;

		// Damping value for linear movement. A value that is too small fixes the object in
		// place.
		// \param[in] value The new value.
		void SetLinearDamping( float value );

		// Damping value for angular movement.
		// \return The current value.
		float GetAngularDamping() const;

		// Damping value for angular movement.
		// \param[in] value The new value.
		void SetAngularDamping( float value );

		// The body's friction.
		// \return The current value.
		float GetFriction() const;

		// The body's friction.
		// \param[in] value The new value.
		void SetFriction( float value );

		// Unknown.
		// \return The current value.
		float GetRollingfrictionmultiplier_() const;

		// Unknown.
		// \param[in] value The new value.
		void SetRollingfrictionmultiplier_( float value );

		// The body's restitution (elasticity).
		//             If the restitution is not 0.0 the object will need extra CPU for all
		// new collisions.
		//             Try to set restitution to 0 for maximum performance (e.g. collapsing
		// buildings)
		// \return The current value.
		float GetRestitution() const;

		// The body's restitution (elasticity).
		//             If the restitution is not 0.0 the object will need extra CPU for all
		// new collisions.
		//             Try to set restitution to 0 for maximum performance (e.g. collapsing
		// buildings)
		// \param[in] value The new value.
		void SetRestitution( float value );

		// Maximal linear velocity.
		// \return The current value.
		float GetMaxLinearVelocity() const;

		// Maximal linear velocity.
		// \param[in] value The new value.
		void SetMaxLinearVelocity( float value );

		// Maximal angular velocity. Pi x 10?
		// \return The current value.
		float GetMaxAngularVelocity() const;

		// Maximal angular velocity. Pi x 10?
		// \param[in] value The new value.
		void SetMaxAngularVelocity( float value );

		// The maximum allowed penetration for this object.
		//             This is a hint to the engine to see how much CPU the engine should
		// invest to keep this object from penetrating.
		//             A good choice is 5% - 20% of the smallest diameter of the object.
		// \return The current value.
		float GetPenetrationDepth() const;

		// The maximum allowed penetration for this object.
		//             This is a hint to the engine to see how much CPU the engine should
		// invest to keep this object from penetrating.
		//             A good choice is 5% - 20% of the smallest diameter of the object.
		// \param[in] value The new value.
		void SetPenetrationDepth( float value );

		// Motion system? Overrides Quality when on Keyframed?
		// \return The current value.
		MotionSystem GetMotionSystem() const;

		// Motion system? Overrides Quality when on Keyframed?
		// \param[in] value The new value.
		void SetMotionSystem( const MotionSystem & value );

		// The initial deactivator type of the body.
		// \return The current value.
		DeactivatorType GetDeactivatorType() const;

		// The initial deactivator type of the body.
		// \param[in] value The new value.
		void SetDeactivatorType( const DeactivatorType & value );

		// Usually set to 1 for fixed objects, or set to 2 for moving ones.  Seems to
		// always be same as Unknown Byte 1.
		// \return The current value.
		SolverDeactivation GetSolverDeactivation() const;

		// Usually set to 1 for fixed objects, or set to 2 for moving ones.  Seems to
		// always be same as Unknown Byte 1.
		// \param[in] value The new value.
		void SetSolverDeactivation( const SolverDeactivation & value );

		// The motion type. Determines quality of motion?
		// \return The current value.
		MotionQuality GetQualityType() const;

		// The motion type. Determines quality of motion?
		// \param[in] value The new value.
		void SetQualityType( const MotionQuality & value );

		// Unknown.
		// \return The current value.
		vector<Ref<bhkSerializable > > GetConstraints() const;

		// Unknown.
		// \param[in] value The new value.
		void SetConstraints( const vector<Ref<bhkSerializable > >& value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		/*!
		 * Retrieves what appears to be a copy of the layer value.
		 * \return The duplicate layer value.
		 */
		NIFLIB_API OblivionLayer GetLayerCopy() const;

		/*!
		 * Sets what appears to be a copy of the layer value.
		 * \param[in] value The new duplicate layer value.
		 */
		NIFLIB_API void SetLayerCopy(OblivionLayer value);

		/*!
		 * Gets the current translation of this rigid body.
		 * \return The translation of this rigid body.
		 */
		NIFLIB_API Vector4 GetTranslation() const;

		/*!
		 * Sets a new translation for this rigid body.
		 * \param[in] value  The new translation for this rigid body.
		 */
		NIFLIB_API void SetTranslation(const Vector4 & value);

		/*!
		 * Gets the current rotation of this rigid body.
		 * \return The rotation of this rigid body.
		 */
		NIFLIB_API QuaternionXYZW GetRotation() const;

		/*!
		 * Sets a new rotation for this rigid body.
		 * \param[in] value The new rotation for this rigid body.
		 */
		NIFLIB_API void SetRotation(const QuaternionXYZW & value);

		/*!
		 * Gets the current linear velocity of this rigid body.
		 * \return The linear velocity of this rigid body.
		 */
		NIFLIB_API Vector4 GetLinearVelocity() const;

		/*!
		 * Sets a new linear velocity for this rigid body.
		 * \param[in] value The new linear velocity for this rigid body.
		 */
		NIFLIB_API void SetLinearVelocity(const Vector4 & value);

		/*!
		 * Gets the current angular velocity of this rigid body.
		 * \return The angular velocity of this rigid body.
		 */
		NIFLIB_API Vector4 GetAngularVelocity() const;

		/*!
		 * Sets a new angular velocity for this rigid body.
		 * \param[in] value The new angular velocity for this rigid body.
		 */
		NIFLIB_API void SetAngularVelocity(const Vector4 & value);

		/*!
		 * Gets the current inertia of this rigid body.
		 * \return The inertia of this rigid body.
		 */
		NIFLIB_API InertiaMatrix GetInertia() const;

		/*!
		 * Sets a new inertia for this rigid body.
		 * \param[in] value The new inertia for this rigid body.
		 */
		NIFLIB_API void SetInertia(const InertiaMatrix & value);

		/*!
		 * Gets the current center point of this rigid body.
		 * \return The center point of this rigid body.
		 */
		NIFLIB_API Vector4 GetCenter() const;

		/*!
		 * Sets a new center point for this rigid body.
		 * \param[in] value The new center point for this rigid body.
		 */
		NIFLIB_API void SetCenter(const Vector4 & value);

		/*!
		 * Gets the current mass of this rigid body.
		 * \return The mass of this rigid body.
		 */
		NIFLIB_API float GetMass() const;

		/*!
		 * Sets a new mass for this rigid body.
		 * \param[in] value The new mass for this rigid body.
		 */
		NIFLIB_API void SetMass(float value);

		/*!
		 * Gets the current linear damping level of this rigid body.
		 * \return The linear damping level of this rigid body.
		 */
		NIFLIB_API float GetLinearDamping() const;

		/*!
		 * Sets a new linear damping level for this rigid body.
		 * \param[in] value The new linear damping level for this rigid body.
		 */
		NIFLIB_API void SetLinearDamping(float value);

		/*!
		 * Gets the current angular damping level of this rigid body.
		 * \return The angular damping level of this rigid body.
		 */
		NIFLIB_API float GetAngularDamping() const;

		/*!
		 * Sets a new angular damping level for this rigid body.
		 * \param[in] value The new angular damping level for this rigid body.
		 */
		NIFLIB_API void SetAngularDamping(float value);

		/*!
		 * Gets the current friction of this rigid body.
		 * \return The friction of this rigid body.
		 */
		NIFLIB_API float GetFriction() const;

		/*!
		 * Sets a new friction for this rigid body.
		 * \param[in] value The new friction for this rigid body.
		 */
		NIFLIB_API void SetFriction(float value);

		/*!
		 * Gets the current restitution of this rigid body.
		 * \return The restitution of this rigid body.
		 */
		NIFLIB_API float GetRestitution() const;

		/*!
		 * Sets a new restitution for this rigid body.
		 * \param[in] value The new restitution for this rigid body.
		 */
		NIFLIB_API void SetRestitution(float value);

		/*!
		 * Gets the current maximum linear velocity of this rigid body.
		 * \return The maximum linear velocity of this rigid body.
		 */
		NIFLIB_API float GetMaxLinearVelocity() const;

		/*!
		 * Sets a new maximum linear velocit for this rigid body.
		 * \param[in] value The new maximum linear velocity for this rigid body.
		 */
		NIFLIB_API void SetMaxLinearVelocity(float value);

		/*!
		 * Gets the current maximum angular velocity of this rigid body.
		 * \return The maximum angular velocity of this rigid body.
		 */
		NIFLIB_API float GetMaxAngularVelocity() const;

		/*!
		 * Sets a new maximum angular velocity for this rigid body.
		 * \param[in] value The new maximum angular velocit for this rigid body.
		 */
		NIFLIB_API void SetMaxAngularVelocity(float value);

		/*!
		 * Gets the current allowable penetration depth of this rigid body.
		 * \return The allowable penetration depth of this rigid body.
		 */
		NIFLIB_API float GetPenetrationDepth() const;

		/*!
		 * Sets a new allowable penetration depth for this rigid body.
		 * \param[in] value The new allowable penetration depth for this rigid body.
		 */
		NIFLIB_API void SetPenetrationDepth(float value);

		/*!
		 * Sets the current motion system for this rigid body.  Seems to override motion quality when set to keyframed.
		 * \return The current motion system setting of this rigid body.
		 */
		NIFLIB_API MotionSystem GetMotionSystem() const;

		/*!
		 * Gets the current motion system of this rigid body.  Seems to override motion quality when set to keyframed.
		 * \param[in] value The new motion system setting for this rigid body.
		 */
		NIFLIB_API void SetMotionSystem(MotionSystem value);

		/*!
		 * Sets the quality of the calculations used to detect collisions for this object.  Essentially, the faster the object goes, the higher quality of motion it will require.
		 * \return The current motion quality setting of this rigid body.
		 */
		NIFLIB_API MotionQuality GetQualityType() const;

		/*!
		 * Gets the quality of the calculations used to detect collisions for this object.  Essentially, the faster the object goes, the higher quality of motion it will require.
		 * \param[in] value The new motion quality setting for this rigid body.
		 */
		NIFLIB_API void SetQualityType(MotionQuality value);

		// The initial deactivator type of the body.
		// \return The current value.
		NIFLIB_API DeactivatorType GetDeactivatorType() const;

		// The initial deactivator type of the body.
		// \param[in] value The new value.
		NIFLIB_API void SetDeactivatorType(const DeactivatorType & value);

		// Usually set to 1 for fixed objects, or set to 2 for moving ones.  Seems to
		// always be same as Unknown Byte 1.
		// \return The current value.
		NIFLIB_API SolverDeactivation GetSolverDeactivation() const;

		// Usually set to 1 for fixed objects, or set to 2 for moving ones.  Seems to
		// always be same as Unknown Byte 1.
		// \param[in] value The new value.
		NIFLIB_API void SetSolverDeactivation(const SolverDeactivation & value);

		/*!
		 * Adds a constraint to this bhkRigidBody.
		 */
		NIFLIB_API void AddConstraint(bhkSerializable * obj);

		/*!
		 * Removes a constraint from this bhkRigidBody.
		 */
		NIFLIB_API void RemoveConstraint(bhkSerializable * obj);

		/*!
		 * Removes all constraints from this bhkRigidBody.
		 */
		NIFLIB_API void ClearConstraints();

		/*!
		 * Retrieves all the constraints attached to this bhkRigidBody.
		 */
		NIFLIB_API vector< Ref<bhkSerializable> > GetConstraints() const;

		// Apply scale factor <scale> on data.
		// \param[in] scale Factor to scale by
		NIFLIB_API void ApplyScale(float scale);

		// Look at all the objects under this rigid body and update the mass
		//  center of gravity, and inertia tensor accordingly. If the mass parameter
		//  is given then the density argument is ignored.
		NIFLIB_API void UpdateMassProperties(float density = 1.0f, bool solid = true, float mass = 0.0f);

		//--END CUSTOM CODE--//
	protected:
		/*! Unknown. Could be 2 shorts corresponding to Unknown 7 Shorts[1] and [2]. */
		int unknownInt1;
		/*! Unknown. */
		int unknownInt2;
		/*! Unknown. Could be 3 floats. */
		array<3, int > unknown3Ints;
		/*! The collision response. See hkResponseType for hkpWorld default implementations. */
		hkResponseType collisionResponse_;
		/*! Unknown */
		byte unknownByte;
		/*!
		 * Lowers the frequency for processContactCallbacks. A value of 5 means that a
		 * callback is raised every 5th frame.
		 */
		unsigned short processContactCallbackDelay_;
		/*! Unknown. */
		array<2, unsigned short > unknown2Shorts;
		/*! Copy of Layer value? */
		OblivionLayer layerCopy;
		/*! Copy of Col Filter value? */
		byte colFilterCopy;
		/*! Copy of Skyrim Layer value? */
		SkyrimLayer skyrimLayerCopy;
		/*! Copy of Flags & Part number? */
		byte flagsAndPartNumberCopy;
		/*!
		 * Unknown.
		 *             Oblivion defaults: 0 21280 2481 62977 65535 44 0
		 *             Skyrim defaults: 0 56896 1343 0 0 1 65535 (fourth and fifth element
		 * *must* be zero)
		 */
		array<7, unsigned short > unknown7Shorts;
		/*!
		 * A vector that moves the body by the specified amount. Only enabled in
		 * bhkRigidBodyT objects.
		 */
		Vector4 translation;
		/*!
		 * The rotation Yaw/Pitch/Roll to apply to the body. Only enabled in bhkRigidBodyT
		 * objects.
		 */
		QuaternionXYZW rotation;
		/*! Linear velocity. */
		Vector4 linearVelocity;
		/*! Angular velocity. */
		Vector4 angularVelocity;
		/*! Defines how the mass is distributed among the body. */
		InertiaMatrix inertia;
		/*!
		 * This seems to be used to relocate the object's center of mass. Useful for
		 * balancing objects in contraints.
		 */
		Vector4 center;
		/*! The body's mass in kg. A mass of zero represents an immovable object. */
		float mass;
		/*!
		 * Damping value for linear movement. A value that is too small fixes the object in
		 * place.
		 */
		float linearDamping;
		/*! Damping value for angular movement. */
		float angularDamping;
		/*! Unknown. */
		float unknownTimefactorOrGravityfactor1;
		/*! Unknown. */
		float unknownTimefactorOrGravityfactor2;
		/*! The body's friction. */
		float friction;
		/*! Unknown. */
		float rollingfrictionmultiplier_;
		/*!
		 * The body's restitution (elasticity).
		 *             If the restitution is not 0.0 the object will need extra CPU for all
		 * new collisions.
		 *             Try to set restitution to 0 for maximum performance (e.g. collapsing
		 * buildings)
		 */
		float restitution;
		/*! Maximal linear velocity. */
		float maxLinearVelocity;
		/*! Maximal angular velocity. Pi x 10? */
		float maxAngularVelocity;
		/*!
		 * The maximum allowed penetration for this object.
		 *             This is a hint to the engine to see how much CPU the engine should
		 * invest to keep this object from penetrating.
		 *             A good choice is 5% - 20% of the smallest diameter of the object.
		 */
		float penetrationDepth;
		/*! Motion system? Overrides Quality when on Keyframed? */
		MotionSystem motionSystem;
		/*! The initial deactivator type of the body. */
		DeactivatorType deactivatorType;
		/*!
		 * Usually set to 1 for fixed objects, or set to 2 for moving ones.  Seems to
		 * always be same as Unknown Byte 1.
		 */
		SolverDeactivation solverDeactivation;
		/*! The motion type. Determines quality of motion? */
		MotionQuality qualityType;
		/*! Unknown. */
		unsigned int unknownInt6;
		/*! Unknown. */
		unsigned int unknownInt7;
		/*! Unknown. */
		unsigned int unknownInt8;
		/*! Unknown. Skyrim only. */
		unsigned int unknownInt81;
		/*! The number of constraints this object is bound to. */
		mutable unsigned int numConstraints;
		/*! Unknown. */
		vector<Ref<bhkSerializable > > constraints;
		/*! 0 = do not respond to wind, 1 = respond to wind (?) */
		unsigned int unknownInt9;
		/*! Unknown. */
		unsigned short unknownInt91;
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
