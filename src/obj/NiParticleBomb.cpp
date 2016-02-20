/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "../../include/FixLink.h"
#include "../../include/ObjectRegistry.h"
#include "../../include/NIF_IO.h"
#include "../../include/obj/NiParticleBomb.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiParticleBomb::TYPE("NiParticleBomb", &NiParticleModifier::TYPE);

NiParticleBomb::NiParticleBomb() : decay_(0.0f), duration_(0.0f), deltav_(0.0f), start_(0.0f), decayType_((DecayType) 0), symmetryType_((SymmetryType) 0)
{
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

NiParticleBomb::~NiParticleBomb()
{
	//--BEGIN DESTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

const Type & NiParticleBomb::GetType() const
{
	return TYPE;
}

NiObject * NiParticleBomb::Create()
{
	return new NiParticleBomb;
}

void NiParticleBomb::Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info)
{
	//--BEGIN PRE-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiParticleModifier::Read(in, link_stack, info);
	NifStream(decay_, in, info);
	NifStream(duration_, in, info);
	NifStream(deltav_, in, info);
	NifStream(start_, in, info);
	NifStream(decayType_, in, info);
	if(info.version >= 0x0401000C)
	{
		NifStream(symmetryType_, in, info);
	};
	NifStream(position_, in, info);
	NifStream(direction_, in, info);

	//--BEGIN POST-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void NiParticleBomb::Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const
{
	//--BEGIN PRE-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiParticleModifier::Write(out, link_map, missing_link_stack, info);
	NifStream(decay_, out, info);
	NifStream(duration_, out, info);
	NifStream(deltav_, out, info);
	NifStream(start_, out, info);
	NifStream(decayType_, out, info);
	if(info.version >= 0x0401000C)
	{
		NifStream(symmetryType_, out, info);
	};
	NifStream(position_, out, info);
	NifStream(direction_, out, info);

	//--BEGIN POST-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::string NiParticleBomb::asString(bool verbose) const
{
	//--BEGIN PRE-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//

	stringstream out;
	out << NiParticleModifier::asString(verbose);
	out << "  Decay?:  " << decay_ << endl;
	out << "  Duration?:  " << duration_ << endl;
	out << "  DeltaV?:  " << deltav_ << endl;
	out << "  Start?:  " << start_ << endl;
	out << "  Decay Type?:  " << decayType_ << endl;
	out << "  Symmetry Type?:  " << symmetryType_ << endl;
	out << "  Position?:  " << position_ << endl;
	out << "  Direction?:  " << direction_ << endl;
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void NiParticleBomb::FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info)
{
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiParticleModifier::FixLinks(objects, link_stack, missing_link_stack, info);

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> NiParticleBomb::GetRefs() const
{
	list<Ref<NiObject> > refs;
	refs = NiParticleModifier::GetRefs();
	return refs;
}

std::list<NiObject *> NiParticleBomb::GetPtrs() const
{
	list<NiObject *> ptrs;
	ptrs = NiParticleModifier::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

float NiParticleBomb::GetDecay_() const {
return decay_;
}

void NiParticleBomb::SetDecay_( float value ) {
decay_ = value;
}

float NiParticleBomb::GetDuration_() const {
return duration_;
}

void NiParticleBomb::SetDuration_( float value ) {
duration_ = value;
}

float NiParticleBomb::GetDeltav_() const {
return deltav_;
}

void NiParticleBomb::SetDeltav_( float value ) {
deltav_ = value;
}

float NiParticleBomb::GetStart_() const {
return start_;
}

void NiParticleBomb::SetStart_( float value ) {
start_ = value;
}

DecayType NiParticleBomb::GetDecayType_() const {
return decayType_;
}

void NiParticleBomb::SetDecayType_( const DecayType & value ) {
decayType_ = value;
}

SymmetryType NiParticleBomb::GetSymmetryType_() const {
return symmetryType_;
}

void NiParticleBomb::SetSymmetryType_( const SymmetryType & value ) {
symmetryType_ = value;
}

Vector3 NiParticleBomb::GetPosition_() const {
return position_;
}

void NiParticleBomb::SetPosition_( const Vector3 & value ) {
position_ = value;
}

Vector3 NiParticleBomb::GetDirection_() const {
return direction_;
}

void NiParticleBomb::SetDirection_( const Vector3 & value ) {
direction_ = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//
//--END CUSTOM CODE--//