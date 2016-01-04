/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _BSSKINBONETRANS_H_
#define _BSSKINBONETRANS_H_

#include "../NIF_IO.h"

// Include structures
#include "SphereBV.h"
namespace Niflib
{
	/*!  */
	struct BSSkinBoneTrans
	{
		/*! Default Constructor */
		NIFLIB_API BSSkinBoneTrans();
		/*! Default Destructor */
		NIFLIB_API ~BSSkinBoneTrans();
		/*! Copy Constructor */
		NIFLIB_API BSSkinBoneTrans(const BSSkinBoneTrans & src);
		/*! Copy Operator */
		NIFLIB_API BSSkinBoneTrans & operator=(const BSSkinBoneTrans & src);
		/*! The combined bounding volume of all submeshes. */
		SphereBV bounds;
		/*! Unknown. */
		Matrix33 rotation;
		/*! Unknown. */
		Vector3 translation;
		/*! Unknown. */
		float scale;
		//--BEGIN MISC CUSTOM CODE--//
		NIFLIB_API void SetBoundingSphere(Vector3& pos, float radius)
		{
			bounds.center = pos;
			bounds.radius = radius;
		}

		NIFLIB_API void SetTransform(Matrix44& transform)
		{
			rotation = transform.GetRotation();
			translation = transform.GetTranslation();
			scale = transform.GetScale();
		}

		NIFLIB_API Vector3 GetTranslation() const
		{
			return translation;
		}

		NIFLIB_API Matrix33 GetRotation() const
		{
			return rotation;
		}

		NIFLIB_API float GetScale() const
		{
			return scale;
		}

		//--END CUSTOM CODE--//
	};
}
#endif
