/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NIPOINT3INTERPCONTROLLER_H_
#define _NIPOINT3INTERPCONTROLLER_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "NiSingleInterpController.h"

// Include structures
#include "../Ref.h"
namespace Niflib
{
	// Forward define of referenced NIF objects
	class NiPosData;
	class NiPoint3InterpController;
	typedef Ref<NiPoint3InterpController> NiPoint3InterpControllerRef;

	/*! A controller that interpolates point 3 data? */
	class NiPoint3InterpController : public NiSingleInterpController
	{
	public:
		/*! Constructor */
		NIFLIB_API NiPoint3InterpController();

		/*! Destructor */
		NIFLIB_API virtual ~NiPoint3InterpController();

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

		// Selects which color to control.
		// \return The current value.
		TargetColor GetTargetColor() const;

		// Selects which color to control.
		// \param[in] value The new value.
		void SetTargetColor( const TargetColor & value );

		// Material color controller data object index. Points to NiPosData.
		// \return The current value.
		Ref<NiPosData > GetData() const;

		// Material color controller data object index. Points to NiPosData.
		// \param[in] value The new value.
		void SetData( Ref<NiPosData > value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		/*!
		 * Retrives the pos data used by this controller.
		 * \return The pos data.
		 */
		NIFLIB_API Ref<NiPosData> GetData() const;

		/*!
		 * Sets the pos data used by this controller.
		 * \param[in] value The new pos data.
		 */
		NIFLIB_API void SetData(NiPosData * value);

		//--END CUSTOM CODE--//
	protected:
		/*! Selects which color to control. */
		TargetColor targetColor;
		/*! Material color controller data object index. Points to NiPosData. */
		Ref<NiPosData > data;
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
