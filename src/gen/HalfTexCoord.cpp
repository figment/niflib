/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/HalfTexCoord.h"
using namespace Niflib;

//Constructor
HalfTexCoord::HalfTexCoord() : u((hfloat) 0), v((hfloat) 0) {};

//Copy Constructor
HalfTexCoord::HalfTexCoord(const HalfTexCoord & src)
{
	*this = src;
};

//Copy Operator
HalfTexCoord & HalfTexCoord::operator=(const HalfTexCoord & src)
{
	this->u = src.u;
	this->v = src.v;
	return *this;
};

//Destructor
HalfTexCoord::~HalfTexCoord() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//