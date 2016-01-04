/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _BSSUBINDEXTRISHAPE_H_
#define _BSSUBINDEXTRISHAPE_H_

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "BSTriShape.h"

// Include structures
#include "../gen/BSSITSSegment.h"
#include "../gen/BSSIMaterialSection.h"
namespace Niflib
{
	class BSSubIndexTriShape;
	typedef Ref<BSSubIndexTriShape> BSSubIndexTriShapeRef;

	/*! Fallout 4 */
	class BSSubIndexTriShape : public BSTriShape
	{
	public:
		/*! Constructor */
		NIFLIB_API BSSubIndexTriShape();

		/*! Destructor */
		NIFLIB_API virtual ~BSSubIndexTriShape();

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
		unsigned int GetNumTriangles2() const;

		// Unknown.
		// \param[in] value The new value.
		void SetNumTriangles2( unsigned int value );

		// Unknown.
		// \return The current value.
		unsigned int GetNumMaterials() const;

		// Unknown.
		// \param[in] value The new value.
		void SetNumMaterials( unsigned int value );

		// Unknown.
		// \return The current value.
		vector<BSSITSSegment > GetSegments() const;

		// Unknown.
		// \param[in] value The new value.
		void SetSegments( const vector<BSSITSSegment >& value );

		// Unknown.
		// \return The current value.
		BSSIMaterialSection GetMaterialSections() const;

		// Unknown.
		// \param[in] value The new value.
		void SetMaterialSections( const BSSIMaterialSection & value );

		****End Example Naive Implementation***/

		//--BEGIN MISC CUSTOM CODE--//

		// Unknown.
		// \return The current value.
		NIFLIB_API const vector<BSSITSSegment>& GetSegments() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetSegments(const vector<BSSITSSegment >& value);

		// Unknown.
		// \return The current value.
		NIFLIB_API const BSSIMaterialSection& GetMaterialSections() const;

		// Unknown.
		// \param[in] value The new value.
		NIFLIB_API void SetMaterialSections(const BSSIMaterialSection & value);

		// return triangle list
		NIFLIB_API vector<Triangle> GetTriangles(int segment) const;

		// return triangle list
		NIFLIB_API vector<Triangle> GetTriangles(int segment, int subindex) const;

		NIFLIB_API string GetSSF() const;

		NIFLIB_API void SetSSF(const string& value);

	private:
		NIFLIB_HIDDEN unsigned int numTriangles2Calc(const NifInfo info) const;
		NIFLIB_HIDDEN unsigned int numMaterialsCalc(const NifInfo info) const;

		//--END CUSTOM CODE--//
	protected:
		/*! Unknown. */
		mutable unsigned int numTriangles2;
		/*! Unknown. */
		mutable unsigned int numSegments;
		/*! Unknown. */
		mutable unsigned int numMaterials;
		/*! Unknown. */
		vector<BSSITSSegment > segments;
		/*! Unknown. */
		BSSIMaterialSection materialSections;
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
