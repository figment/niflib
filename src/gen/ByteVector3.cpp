/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/ByteVector3.h"
using namespace Niflib;

//Constructor
ByteVector3::ByteVector3() : x((byte) 0), y((byte) 0), z((byte) 0) {};

//Copy Constructor
ByteVector3::ByteVector3(const ByteVector3 & src)
{
	*this = src;
};

//Copy Operator
ByteVector3 & ByteVector3::operator=(const ByteVector3 & src)
{
	this->x = src.x;
	this->y = src.y;
	this->z = src.z;
	return *this;
};

//Destructor
ByteVector3::~ByteVector3() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//