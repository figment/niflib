/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/BSSIMaterial.h"
using namespace Niflib;

//Constructor
BSSIMaterial::BSSIMaterial() : bodyPartIndex((unsigned int) 0), materialHash((unsigned int) 0), numData((unsigned int) 0) {};

//Copy Constructor
BSSIMaterial::BSSIMaterial(const BSSIMaterial & src)
{
	*this = src;
};

//Copy Operator
BSSIMaterial & BSSIMaterial::operator=(const BSSIMaterial & src)
{
	this->bodyPartIndex = src.bodyPartIndex;
	this->materialHash = src.materialHash;
	this->numData = src.numData;
	this->extraData = src.extraData;
	return *this;
};

//Destructor
BSSIMaterial::~BSSIMaterial() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//