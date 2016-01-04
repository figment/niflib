/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _BSSIMATERIALSECTION_H_
#define _BSSIMATERIALSECTION_H_

#include "../NIF_IO.h"

// Include structures
#include "BSSIMaterial.h"
namespace Niflib
{
	/*!  */
	struct BSSIMaterialSection
	{
		/*! Default Constructor */
		NIFLIB_API BSSIMaterialSection();
		/*! Default Destructor */
		NIFLIB_API ~BSSIMaterialSection();
		/*! Copy Constructor */
		NIFLIB_API BSSIMaterialSection(const BSSIMaterialSection & src);
		/*! Copy Operator */
		NIFLIB_API BSSIMaterialSection & operator=(const BSSIMaterialSection & src);
		/*! Unknown. */
		mutable unsigned int numSegments;
		/*! Unknown. */
		mutable unsigned int numMaterials;
		/*! Unknown. */
		vector<unsigned int > emptyMaterials;
		/*! Unknown. */
		vector<BSSIMaterial > materials;
		/*! Unknown. */
		mutable unsigned short ssfLength;
		/*! Unknown. */
		vector<byte > ssfFile;
		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	};
}
#endif
