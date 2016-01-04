/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/bhkCMSDChunk.h"
using namespace Niflib;

//Constructor
bhkCMSDChunk::bhkCMSDChunk() : materialIndex((unsigned int) 0), reference((unsigned short) 65535), transformIndex((unsigned short) 0), numVertices((unsigned int) 0), numIndices((unsigned int) 0), numStrips((unsigned int) 0), numWeldings((unsigned int) 0) {};

//Copy Constructor
bhkCMSDChunk::bhkCMSDChunk(const bhkCMSDChunk & src)
{
	*this = src;
};

//Copy Operator
bhkCMSDChunk & bhkCMSDChunk::operator=(const bhkCMSDChunk & src)
{
	this->translation = src.translation;
	this->materialIndex = src.materialIndex;
	this->reference = src.reference;
	this->transformIndex = src.transformIndex;
	this->numVertices = src.numVertices;
	this->vertices = src.vertices;
	this->numIndices = src.numIndices;
	this->indices = src.indices;
	this->numStrips = src.numStrips;
	this->strips = src.strips;
	this->numWeldings = src.numWeldings;
	this->weldings = src.weldings;
	return *this;
};

//Destructor
bhkCMSDChunk::~bhkCMSDChunk() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//