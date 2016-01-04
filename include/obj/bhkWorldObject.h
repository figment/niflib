/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BHKWORLDOBJECT_H_
#define _BHKWORLDOBJECT_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "bhkSerializable.h"

// Include structures
#include "../Ref.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class bhkShape;
	class bhkWorldObject;
	typedef Ref<bhkWorldObject> bhkWorldObjectRef;

	/*! Havok objects that have a position in the world? */
	class bhkWorldObject : public bhkSerializable
	{
	public:
		/*! Constructor */
		NIFLIB_API bhkWorldObject();

		/*! Destructor */
		NIFLIB_API virtual ~bhkWorldObject();

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

		// Link to the body for this collision object.
		// \return The current value.
		Ref<bhkShape > GetShape() const;

		// Link to the body for this collision object.
		// \param[in] value The new value.
		void SetShape( Ref<bhkShape > value );

		// Sets mesh color in Oblivion Construction Set.
		// \return The current value.
		OblivionLayer GetLayer() const;

		// Sets mesh color in Oblivion Construction Set.
		// \param[in] value The new value.
		void SetLayer( const OblivionLayer & value );

		// The first bit sets the LINK property and controls whether this body is
		// physically linked to others. The next bit turns collision off. Then, the next
		// bit sets the SCALED property in Oblivion. The next five bits make up the number
		// of this part in a linked body list.
		// \return The current value.
		byte GetColFilter() const;

		// The first bit sets the LINK property and controls whether this body is
		// physically linked to others. The next bit turns collision off. Then, the next
		// bit sets the SCALED property in Oblivion. The next five bits make up the number
		// of this part in a linked body list.
		// \param[in] value The new value.
		void SetColFilter( byte value );

		// Physical purpose of collision object? The setting affects objetct's havok
		// behavior in game.
		// \return The current value.
		SkyrimLayer GetSkyrimLayer() const;

		// Physical purpose of collision object? The setting affects objetct's havok
		// behavior in game.
		// \param[in] value The new value.
		void SetSkyrimLayer( const SkyrimLayer & value );

		// FLAGS are stored in highest 3 bits:
		//                 Bit 7: sets the LINK property and controls whether this body is
		// physically linked to others.
		//                 Bit 6: turns collision off (not used for Layer SKYL_BIPED).
		//                 Bit 5: sets the SCALED property.
		//
		//                 PART NUMBER in a linked body list is stored in lowest 5 bits
		// (used only when Skyrim Layer is set to SKYL_BIPED):
		//                 0 - OTHER
		//                 1 - HEAD
		//                 2 - BODY
		//                 3 - SPINE1
		//                 4 - SPINE2
		//                 5 - LUPPERARM
		//                 6 - LFOREARM
		//                 7 - LHAND
		//                 8 - LTHIGH
		//                 9 - LCALF
		//                 10 - LFOOT
		//                 11 - RUPPERARM
		//                 12 - RFOREARM
		//                 13 - RHAND
		//                 14 - RTHIGH
		//                 15 - RCALF
		//                 16 - RFOOT
		//                 17 - TAIL
		//                 18 - SHIELD
		//                 19 - QUIVER
		//                 20 - WEAPON
		//                 21 - PONYTAIL
		//                 22 - WING
		//                 23 - PACK
		//                 24 - CHAIN
		//                 25 - ADDONHEAD
		//                 26 - ADDONCHEST
		//                 27 - ADDONARM
		//                 28 - ADDONLEG
		//                 29-31 - NULL
		// \return The current value.
		byte GetFlagsAndPartNumber() const;

		// FLAGS are stored in highest 3 bits:
		//                 Bit 7: sets the LINK property and controls whether this body is
		// physically linked to others.
		//                 Bit 6: turns collision off (not used for Layer SKYL_BIPED).
		//                 Bit 5: sets the SCALED property.
		//
		//                 PART NUMBER in a linked body list is stored in lowest 5 bits
		// (used only when Skyrim Layer is set to SKYL_BIPED):
		//                 0 - OTHER
		//                 1 - HEAD
		//                 2 - BODY
		//                 3 - SPINE1
		//                 4 - SPINE2
		//                 5 - LUPPERARM
		//                 6 - LFOREARM
		//                 7 - LHAND
		//                 8 - LTHIGH
		//                 9 - LCALF
		//                 10 - LFOOT
		//                 11 - RUPPERARM
		//                 12 - RFOREARM
		//                 13 - RHAND
		//                 14 - RTHIGH
		//                 15 - RCALF
		//                 16 - RFOOT
		//                 17 - TAIL
		//                 18 - SHIELD
		//                 19 - QUIVER
		//                 20 - WEAPON
		//                 21 - PONYTAIL
		//                 22 - WING
		//                 23 - PACK
		//                 24 - CHAIN
		//                 25 - ADDONHEAD
		//                 26 - ADDONCHEST
		//                 27 - ADDONARM
		//                 28 - ADDONLEG
		//                 29-31 - NULL
		// \param[in] value The new value.
		void SetFlagsAndPartNumber( byte value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		/*!
		 * Retrieves the shape object that this body is using.
		 * \return The shape object being used by this body.
		 */
		NIFLIB_API Ref<bhkShape > GetShape() const;

		/*!
		 * Sets the shape object that this body will use.
		 * \param[in] value The new shape object for this body to use.
		 */
		NIFLIB_API void SetShape(bhkShape * value);

		/*!
		 * Gets the current Oblivion layer, which seems to determine the mesh color displayed by the Oblivion Construction Set.
		 * \return The current Oblivion Layer.
		 */
		NIFLIB_API OblivionLayer GetLayer() const;

		/*!
		 * Sets the Oblivion layer, which seems to determine the mesh color displayed by the Oblivion Construction Set.
		 * \param[in] value The new Oblivoin layer to use.
		 */
		NIFLIB_API void SetLayer(OblivionLayer value);

		// Physical purpose of collision object? The setting affects objetct's havok
		// behavior in game.
		// \return The current value.
		NIFLIB_API SkyrimLayer GetSkyrimLayer() const;

		// Physical purpose of collision object? The setting affects objetct's havok
		// behavior in game.
		// \param[in] value The new value.
		NIFLIB_API void SetSkyrimLayer(SkyrimLayer value);

		//--END CUSTOM CODE--//
	protected:
		/*! Link to the body for this collision object. */
		Ref<bhkShape > shape;
		/*! Sets mesh color in Oblivion Construction Set. */
		OblivionLayer layer;
		/*!
		 * The first bit sets the LINK property and controls whether this body is
		 * physically linked to others. The next bit turns collision off. Then, the next
		 * bit sets the SCALED property in Oblivion. The next five bits make up the number
		 * of this part in a linked body list.
		 */
		byte colFilter;
		/*!
		 * Physical purpose of collision object? The setting affects objetct's havok
		 * behavior in game.
		 */
		SkyrimLayer skyrimLayer;
		/*!
		 * FLAGS are stored in highest 3 bits:
		 *                 Bit 7: sets the LINK property and controls whether this body is
		 * physically linked to others.
		 *                 Bit 6: turns collision off (not used for Layer SKYL_BIPED).
		 *                 Bit 5: sets the SCALED property.
		 *
		 *                 PART NUMBER in a linked body list is stored in lowest 5 bits
		 * (used only when Skyrim Layer is set to SKYL_BIPED):
		 *                 0 - OTHER
		 *                 1 - HEAD
		 *                 2 - BODY
		 *                 3 - SPINE1
		 *                 4 - SPINE2
		 *                 5 - LUPPERARM
		 *                 6 - LFOREARM
		 *                 7 - LHAND
		 *                 8 - LTHIGH
		 *                 9 - LCALF
		 *                 10 - LFOOT
		 *                 11 - RUPPERARM
		 *                 12 - RFOREARM
		 *                 13 - RHAND
		 *                 14 - RTHIGH
		 *                 15 - RCALF
		 *                 16 - RFOOT
		 *                 17 - TAIL
		 *                 18 - SHIELD
		 *                 19 - QUIVER
		 *                 20 - WEAPON
		 *                 21 - PONYTAIL
		 *                 22 - WING
		 *                 23 - PACK
		 *                 24 - CHAIN
		 *                 25 - ADDONHEAD
		 *                 26 - ADDONCHEST
		 *                 27 - ADDONARM
		 *                 28 - ADDONLEG
		 *                 29-31 - NULL
		 */
		byte flagsAndPartNumber;
		/*! Unknown. */
		unsigned short unknownShort;
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
