/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _BSSITSSEGMENT_H_
#define _BSSITSSEGMENT_H_

#include "../NIF_IO.h"

// Include structures
#include "BSSITSSubSegment.h"
namespace Niflib
{
	/*!  */
	struct BSSITSSegment
	{
		/*! Default Constructor */
		NIFLIB_API BSSITSSegment();
		/*! Default Destructor */
		NIFLIB_API ~BSSITSSegment();
		/*! Copy Constructor */
		NIFLIB_API BSSITSSegment(const BSSITSSegment & src);
		/*! Copy Operator */
		NIFLIB_API BSSITSSegment & operator=(const BSSITSSegment & src);
		/*! Unknown. */
		unsigned int triangleOffset;
		/*! Unknown. */
		unsigned int triangleCount;
		/*! Unknown. */
		unsigned int materialHash;
		/*! Unknown. */
		mutable unsigned int numRecords;
		/*! Unknown. */
		vector<BSSITSSubSegment > subIndexRecord;
		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	};
}
#endif
