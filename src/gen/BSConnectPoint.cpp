/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/BSConnectPoint.h"
using namespace Niflib;

//Constructor
BSConnectPoint::BSConnectPoint() : scale(0.0f) {};

//Copy Constructor
BSConnectPoint::BSConnectPoint(const BSConnectPoint & src)
{
	*this = src;
};

//Copy Operator
BSConnectPoint & BSConnectPoint::operator=(const BSConnectPoint & src)
{
	this->root = src.root;
	this->variableName = src.variableName;
	this->rotation = src.rotation;
	this->translation = src.translation;
	this->scale = src.scale;
	return *this;
};

//Destructor
BSConnectPoint::~BSConnectPoint() {};

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//