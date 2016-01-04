/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _BSSITSSUBSEGMENT_H_
#define _BSSITSSUBSEGMENT_H_

#include "../NIF_IO.h"

namespace Niflib
{
	/*!  */
	struct BSSITSSubSegment
	{
		/*! Default Constructor */
		NIFLIB_API BSSITSSubSegment();
		/*! Default Destructor */
		NIFLIB_API ~BSSITSSubSegment();
		/*! Copy Constructor */
		NIFLIB_API BSSITSSubSegment(const BSSITSSubSegment & src);
		/*! Copy Operator */
		NIFLIB_API BSSITSSubSegment & operator=(const BSSITSSubSegment & src);
		/*! Unknown. */
		unsigned int triangleOffset;
		/*! Unknown. */
		unsigned int triangleCount;
		/*! Unknown. */
		unsigned int segmentOffset;
		/*! Unknown. */
		unsigned int unknownInt1;
		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	};
}
#endif
