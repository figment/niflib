/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/HalfVector3.h"
using namespace Niflib;

//Constructor
HalfVector3::HalfVector3() : x((hfloat) 0), y((hfloat) 0), z((hfloat) 0) {};

//Copy Constructor
HalfVector3::HalfVector3(const HalfVector3 & src)
{
	*this = src;
};

//Copy Operator
HalfVector3 & HalfVector3::operator=(const HalfVector3 & src)
{
	this->x = src.x;
	this->y = src.y;
	this->z = src.z;
	return *this;
};

//Destructor
HalfVector3::~HalfVector3() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//