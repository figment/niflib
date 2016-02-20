/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _BSCONNECTPOINT_H_
#define _BSCONNECTPOINT_H_

#include "../NIF_IO.h"

namespace Niflib
{
	/*!  */
	struct BSConnectPoint
	{
		/*! Default Constructor */
		NIFLIB_API BSConnectPoint();
		/*! Default Destructor */
		NIFLIB_API ~BSConnectPoint();
		/*! Copy Constructor */
		NIFLIB_API BSConnectPoint(const BSConnectPoint & src);
		/*! Copy Operator */
		NIFLIB_API BSConnectPoint & operator=(const BSConnectPoint & src);
		/*! Unknown. */
		string root;
		/*! Unknown. */
		string variableName;
		/*! Unknown. */
		Quaternion rotation;
		/*! Unknown. */
		Vector3 translation;
		/*! Unknown. */
		float scale;
		//--BEGIN MISC CUSTOM CODE--//

		//--END CUSTOM CODE--//
	};
}
#endif
