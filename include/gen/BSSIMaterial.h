/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _BSSIMATERIAL_H_
#define _BSSIMATERIAL_H_

#include "../NIF_IO.h"

namespace Niflib
{
	/*!  */
	struct BSSIMaterial
	{
		/*! Default Constructor */
		NIFLIB_API BSSIMaterial();
		/*! Default Destructor */
		NIFLIB_API ~BSSIMaterial();
		/*! Copy Constructor */
		NIFLIB_API BSSIMaterial(const BSSIMaterial & src);
		/*! Copy Operator */
		NIFLIB_API BSSIMaterial & operator=(const BSSIMaterial & src);
		/*! Unique ID Per Material Hash */
		unsigned int bodyPartIndex;
		/*! Unknown. */
		unsigned int materialHash;
		/*! Unknown. */
		mutable unsigned int numData;
		/*! Unknown. */
		vector<float > extraData;
		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	};
}
#endif
