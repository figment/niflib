/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/BSSIMaterialSection.h"
#include "../../include/gen/BSSIMaterial.h"
using namespace Niflib;

//Constructor
BSSIMaterialSection::BSSIMaterialSection() : numSegments((unsigned int) 0), numMaterials((unsigned int) 0), ssfLength((unsigned short) 0) {};

//Copy Constructor
BSSIMaterialSection::BSSIMaterialSection(const BSSIMaterialSection & src)
{
	*this = src;
};

//Copy Operator
BSSIMaterialSection & BSSIMaterialSection::operator=(const BSSIMaterialSection & src)
{
	this->numSegments = src.numSegments;
	this->numMaterials = src.numMaterials;
	this->emptyMaterials = src.emptyMaterials;
	this->materials = src.materials;
	this->ssfLength = src.ssfLength;
	this->ssfFile = src.ssfFile;
	return *this;
};

//Destructor
BSSIMaterialSection::~BSSIMaterialSection() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//