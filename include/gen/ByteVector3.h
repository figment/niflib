/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _BYTEVECTOR3_H_
#define _BYTEVECTOR3_H_

#include "../NIF_IO.h"

namespace Niflib
{
	/*!  */
	struct ByteVector3
	{
		/*! Default Constructor */
		NIFLIB_API ByteVector3();
		/*! Default Destructor */
		NIFLIB_API ~ByteVector3();
		/*! Copy Constructor */
		NIFLIB_API ByteVector3(const ByteVector3 & src);
		/*! Copy Operator */
		NIFLIB_API ByteVector3 & operator=(const ByteVector3 & src);
		/*! First coordinate. */
		byte x;
		/*! Second coordinate. */
		byte y;
		/*! Third coordinate. */
		byte z;
		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	};
}
#endif
