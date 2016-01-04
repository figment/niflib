/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/ByteVector4.h"
using namespace Niflib;

//Constructor
ByteVector4::ByteVector4() : x((byte) 0), y((byte) 0), z((byte) 0), w((byte) 0) {};

//Copy Constructor
ByteVector4::ByteVector4(const ByteVector4 & src)
{
	*this = src;
};

//Copy Operator
ByteVector4 & ByteVector4::operator=(const ByteVector4 & src)
{
	this->x = src.x;
	this->y = src.y;
	this->z = src.z;
	this->w = src.w;
	return *this;
};

//Destructor
ByteVector4::~ByteVector4() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//