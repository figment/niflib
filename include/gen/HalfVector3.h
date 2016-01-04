/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _HALFVECTOR3_H_
#define _HALFVECTOR3_H_

#include "../NIF_IO.h"

namespace Niflib
{
	/*! A vector in 3D space (x,y,z). */
	struct HalfVector3
	{
		/*! Default Constructor */
		NIFLIB_API HalfVector3();
		/*! Default Destructor */
		NIFLIB_API ~HalfVector3();
		/*! Copy Constructor */
		NIFLIB_API HalfVector3(const HalfVector3 & src);
		/*! Copy Operator */
		NIFLIB_API HalfVector3 & operator=(const HalfVector3 & src);
		/*! First coordinate. */
		hfloat x;
		/*! Second coordinate. */
		hfloat y;
		/*! Third coordinate. */
		hfloat z;
		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	};
}
#endif
