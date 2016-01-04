/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _BYTEVECTOR4_H_
#define _BYTEVECTOR4_H_

#include "../NIF_IO.h"

namespace Niflib
{
	/*!  */
	struct ByteVector4
	{
		/*! Default Constructor */
		NIFLIB_API ByteVector4();
		/*! Default Destructor */
		NIFLIB_API ~ByteVector4();
		/*! Copy Constructor */
		NIFLIB_API ByteVector4(const ByteVector4 & src);
		/*! Copy Operator */
		NIFLIB_API ByteVector4 & operator=(const ByteVector4 & src);
		/*! First coordinate. */
		byte x;
		/*! Second coordinate. */
		byte y;
		/*! Third coordinate. */
		byte z;
		/*! Unknown */
		byte w;
		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	};
}
#endif
