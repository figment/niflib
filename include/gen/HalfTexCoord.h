/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _HALFTEXCOORD_H_
#define _HALFTEXCOORD_H_

#include "../NIF_IO.h"

namespace Niflib
{
	/*! Texture coordinates (u,v). */
	struct HalfTexCoord
	{
		/*! Default Constructor */
		NIFLIB_API HalfTexCoord();
		/*! Default Destructor */
		NIFLIB_API ~HalfTexCoord();
		/*! Copy Constructor */
		NIFLIB_API HalfTexCoord(const HalfTexCoord & src);
		/*! Copy Operator */
		NIFLIB_API HalfTexCoord & operator=(const HalfTexCoord & src);
		/*! First coordinate. */
		hfloat u;
		/*! Second coordinate. */
		hfloat v;
		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	};
}
#endif
