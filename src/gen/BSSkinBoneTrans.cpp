/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/BSSkinBoneTrans.h"
#include "../../include/gen/SphereBV.h"
using namespace Niflib;

//Constructor
BSSkinBoneTrans::BSSkinBoneTrans() : scale(0.0f) {};

//Copy Constructor
BSSkinBoneTrans::BSSkinBoneTrans(const BSSkinBoneTrans & src)
{
	*this = src;
};

//Copy Operator
BSSkinBoneTrans & BSSkinBoneTrans::operator=(const BSSkinBoneTrans & src)
{
	this->bounds = src.bounds;
	this->rotation = src.rotation;
	this->translation = src.translation;
	this->scale = src.scale;
	return *this;
};

//Destructor
BSSkinBoneTrans::~BSSkinBoneTrans() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//