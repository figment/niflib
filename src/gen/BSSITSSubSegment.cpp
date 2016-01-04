/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/BSSITSSubSegment.h"
using namespace Niflib;

//Constructor
BSSITSSubSegment::BSSITSSubSegment() : triangleOffset((unsigned int) 0), triangleCount((unsigned int) 0), segmentOffset((unsigned int) 0), unknownInt1((unsigned int) 0) {};

//Copy Constructor
BSSITSSubSegment::BSSITSSubSegment(const BSSITSSubSegment & src)
{
	*this = src;
};

//Copy Operator
BSSITSSubSegment & BSSITSSubSegment::operator=(const BSSITSSubSegment & src)
{
	this->triangleOffset = src.triangleOffset;
	this->triangleCount = src.triangleCount;
	this->segmentOffset = src.segmentOffset;
	this->unknownInt1 = src.unknownInt1;
	return *this;
};

//Destructor
BSSITSSubSegment::~BSSITSSubSegment() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//