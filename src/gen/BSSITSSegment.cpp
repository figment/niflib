/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/BSSITSSegment.h"
#include "../../include/gen/BSSITSSubSegment.h"
using namespace Niflib;

//Constructor
BSSITSSegment::BSSITSSegment() : triangleOffset((unsigned int) 0), triangleCount((unsigned int) 0), materialHash((unsigned int) 0), numRecords((unsigned int) 0) {};

//Copy Constructor
BSSITSSegment::BSSITSSegment(const BSSITSSegment & src)
{
	*this = src;
};

//Copy Operator
BSSITSSegment & BSSITSSegment::operator=(const BSSITSSegment & src)
{
	this->triangleOffset = src.triangleOffset;
	this->triangleCount = src.triangleCount;
	this->materialHash = src.materialHash;
	this->numRecords = src.numRecords;
	this->subIndexRecord = src.subIndexRecord;
	return *this;
};

//Destructor
BSSITSSegment::~BSSITSSegment() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//