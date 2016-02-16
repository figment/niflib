/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

//--BEGIN FILE HEAD CUSTOM CODE--//
#include "../../GlobalCode/VariableConversionFunctions.h"
//--END CUSTOM CODE--//

#include "../../include/FixLink.h"
#include "../../include/ObjectRegistry.h"
#include "../../include/NIF_IO.h"
#include "../../include/obj/bhkMalleableConstraint.h"
#include "../../include/gen/HingeDescriptor.h"
#include "../../include/gen/RagdollDescriptor.h"
#include "../../include/gen/MotorDescriptor.h"
#include "../../include/gen/LimitedHingeDescriptor.h"
#include "../../include/gen/MotorDescriptor.h"
#include "../../include/obj/NiObject.h"

using namespace Niflib;

//Definition of TYPE constant
const Type bhkMalleableConstraint::TYPE("bhkMalleableConstraint", &bhkConstraint::TYPE);

bhkMalleableConstraint::bhkMalleableConstraint() : type((unsigned int) 0), unknownInt2((unsigned int) 0), unknownLink1(NULL), unknownLink2(NULL), unknownInt3((unsigned int) 0), tau(0.0f), damping(0.0f)
{
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

bhkMalleableConstraint::~bhkMalleableConstraint()
{
	//--BEGIN DESTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

const Type & bhkMalleableConstraint::GetType() const
{
	return TYPE;
}

NiObject * bhkMalleableConstraint::Create()
{
	return new bhkMalleableConstraint;
}

void bhkMalleableConstraint::Read(istream& in, list<unsigned int> & link_stack, const NifInfo & info)
{
	//--BEGIN PRE-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//

	unsigned int block_num;
	bhkConstraint::Read(in, link_stack, info);
	NifStream(type, in, info);
	NifStream(unknownInt2, in, info);
	NifStream(block_num, in, info);
	link_stack.push_back(block_num);
	NifStream(block_num, in, info);
	link_stack.push_back(block_num);
	NifStream(unknownInt3, in, info);
	if((type == 1))
	{
		if(info.version <= 0x14000005)
		{
			NifStream(hinge.pivotA, in, info);
			NifStream(hinge.perp2AxleInA1, in, info);
			NifStream(hinge.perp2AxleInA2, in, info);
			NifStream(hinge.pivotB, in, info);
			NifStream(hinge.axleB, in, info);
		};
		if(info.version >= 0x14020007)
		{
			NifStream(hinge.axleA, in, info);
			NifStream(hinge.perp2AxleInA1, in, info);
			NifStream(hinge.perp2AxleInA2, in, info);
			NifStream(hinge.pivotA, in, info);
			NifStream(hinge.axleB, in, info);
			NifStream(hinge.perp2AxleInB1, in, info);
			NifStream(hinge.perp2AxleInB2, in, info);
			NifStream(hinge.pivotB, in, info);
		};
	};
	if((type == 7))
	{
		if(info.version <= 0x14000005)
		{
			NifStream(ragdoll.pivotA, in, info);
			NifStream(ragdoll.planeA, in, info);
			NifStream(ragdoll.twistA, in, info);
			NifStream(ragdoll.pivotB, in, info);
			NifStream(ragdoll.planeB, in, info);
			NifStream(ragdoll.twistB, in, info);
		};
		if(info.version >= 0x14020007)
		{
			NifStream(ragdoll.twistA, in, info);
			NifStream(ragdoll.planeA, in, info);
			NifStream(ragdoll.motorA, in, info);
			NifStream(ragdoll.pivotA, in, info);
			NifStream(ragdoll.twistB, in, info);
			NifStream(ragdoll.planeB, in, info);
			NifStream(ragdoll.motorB, in, info);
			NifStream(ragdoll.pivotB, in, info);
		};
		NifStream(ragdoll.coneMaxAngle, in, info);
		NifStream(ragdoll.planeMinAngle, in, info);
		NifStream(ragdoll.planeMaxAngle, in, info);
		NifStream(ragdoll.twistMinAngle, in, info);
		NifStream(ragdoll.twistMaxAngle, in, info);
		NifStream(ragdoll.maxFriction, in, info);
		if(info.version >= 0x14020007)
		{
			NifStream(ragdoll.enableMotor, in, info);
			if(ragdoll.enableMotor)
			{
				NifStream(ragdoll.motor.unknownFloat1, in, info);
				NifStream(ragdoll.motor.unknownFloat2, in, info);
				NifStream(ragdoll.motor.unknownFloat3, in, info);
				NifStream(ragdoll.motor.unknownFloat4, in, info);
				NifStream(ragdoll.motor.unknownFloat5, in, info);
				NifStream(ragdoll.motor.unknownFloat6, in, info);
				NifStream(ragdoll.motor.unknownByte1, in, info);
			};
		};
	};
	if((type == 2))
	{
		if(info.version <= 0x14000005)
		{
			NifStream(limitedHinge.pivotA, in, info);
			NifStream(limitedHinge.axleA, in, info);
			NifStream(limitedHinge.perp2AxleInA1, in, info);
			NifStream(limitedHinge.perp2AxleInA2, in, info);
			NifStream(limitedHinge.pivotB, in, info);
			NifStream(limitedHinge.axleB, in, info);
			NifStream(limitedHinge.perp2AxleInB2, in, info);
		};
		if(info.version >= 0x14020007)
		{
			NifStream(limitedHinge.axleA, in, info);
			NifStream(limitedHinge.perp2AxleInA1, in, info);
			NifStream(limitedHinge.perp2AxleInA2, in, info);
			NifStream(limitedHinge.pivotA, in, info);
			NifStream(limitedHinge.axleB, in, info);
			NifStream(limitedHinge.perp2AxleInB1, in, info);
			NifStream(limitedHinge.perp2AxleInB2, in, info);
			NifStream(limitedHinge.pivotB, in, info);
		};
		NifStream(limitedHinge.minAngle, in, info);
		NifStream(limitedHinge.maxAngle, in, info);
		NifStream(limitedHinge.maxFriction, in, info);
		if(info.version >= 0x14020007)
		{
			NifStream(limitedHinge.enableMotor, in, info);
			if(limitedHinge.enableMotor)
			{
				NifStream(limitedHinge.motor.unknownFloat1, in, info);
				NifStream(limitedHinge.motor.unknownFloat2, in, info);
				NifStream(limitedHinge.motor.unknownFloat3, in, info);
				NifStream(limitedHinge.motor.unknownFloat4, in, info);
				NifStream(limitedHinge.motor.unknownFloat5, in, info);
				NifStream(limitedHinge.motor.unknownFloat6, in, info);
				NifStream(limitedHinge.motor.unknownByte1, in, info);
			};
		};
	};
	if(info.version <= 0x14000005)
	{
		NifStream(tau, in, info);
	};
	NifStream(damping, in, info);

	//--BEGIN POST-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void bhkMalleableConstraint::Write(ostream& out, const map<NiObjectRef, unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info) const
{
	//--BEGIN PRE-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//

	bhkConstraint::Write(out, link_map, missing_link_stack, info);
	NifStream(type, out, info);
	NifStream(unknownInt2, out, info);
	if(info.version < VER_3_3_0_13)
	{
		WritePtr32(&(*unknownLink1), out);
	}
	else
	{
		if(unknownLink1 != NULL)
		{
			map<NiObjectRef, unsigned int>::const_iterator it = link_map.find(StaticCast<NiObject>(unknownLink1));
			if(it != link_map.end())
			{
				NifStream(it->second, out, info);
				missing_link_stack.push_back(NULL);
			}
			else
			{
				NifStream(0xFFFFFFFF, out, info);
				missing_link_stack.push_back(unknownLink1);
			}
		}
		else
		{
			NifStream(0xFFFFFFFF, out, info);
			missing_link_stack.push_back(NULL);
		}
	}
	if(info.version < VER_3_3_0_13)
	{
		WritePtr32(&(*unknownLink2), out);
	}
	else
	{
		if(unknownLink2 != NULL)
		{
			map<NiObjectRef, unsigned int>::const_iterator it = link_map.find(StaticCast<NiObject>(unknownLink2));
			if(it != link_map.end())
			{
				NifStream(it->second, out, info);
				missing_link_stack.push_back(NULL);
			}
			else
			{
				NifStream(0xFFFFFFFF, out, info);
				missing_link_stack.push_back(unknownLink2);
			}
		}
		else
		{
			NifStream(0xFFFFFFFF, out, info);
			missing_link_stack.push_back(NULL);
		}
	}
	NifStream(unknownInt3, out, info);
	if((type == 1))
	{
		if(info.version <= 0x14000005)
		{
			NifStream(hinge.pivotA, out, info);
			NifStream(hinge.perp2AxleInA1, out, info);
			NifStream(hinge.perp2AxleInA2, out, info);
			NifStream(hinge.pivotB, out, info);
			NifStream(hinge.axleB, out, info);
		};
		if(info.version >= 0x14020007)
		{
			NifStream(hinge.axleA, out, info);
			NifStream(hinge.perp2AxleInA1, out, info);
			NifStream(hinge.perp2AxleInA2, out, info);
			NifStream(hinge.pivotA, out, info);
			NifStream(hinge.axleB, out, info);
			NifStream(hinge.perp2AxleInB1, out, info);
			NifStream(hinge.perp2AxleInB2, out, info);
			NifStream(hinge.pivotB, out, info);
		};
	};
	if((type == 7))
	{
		if(info.version <= 0x14000005)
		{
			NifStream(ragdoll.pivotA, out, info);
			NifStream(ragdoll.planeA, out, info);
			NifStream(ragdoll.twistA, out, info);
			NifStream(ragdoll.pivotB, out, info);
			NifStream(ragdoll.planeB, out, info);
			NifStream(ragdoll.twistB, out, info);
		};
		if(info.version >= 0x14020007)
		{
			NifStream(ragdoll.twistA, out, info);
			NifStream(ragdoll.planeA, out, info);
			NifStream(ragdoll.motorA, out, info);
			NifStream(ragdoll.pivotA, out, info);
			NifStream(ragdoll.twistB, out, info);
			NifStream(ragdoll.planeB, out, info);
			NifStream(ragdoll.motorB, out, info);
			NifStream(ragdoll.pivotB, out, info);
		};
		NifStream(ragdoll.coneMaxAngle, out, info);
		NifStream(ragdoll.planeMinAngle, out, info);
		NifStream(ragdoll.planeMaxAngle, out, info);
		NifStream(ragdoll.twistMinAngle, out, info);
		NifStream(ragdoll.twistMaxAngle, out, info);
		NifStream(ragdoll.maxFriction, out, info);
		if(info.version >= 0x14020007)
		{
			NifStream(ragdoll.enableMotor, out, info);
			if(ragdoll.enableMotor)
			{
				NifStream(ragdoll.motor.unknownFloat1, out, info);
				NifStream(ragdoll.motor.unknownFloat2, out, info);
				NifStream(ragdoll.motor.unknownFloat3, out, info);
				NifStream(ragdoll.motor.unknownFloat4, out, info);
				NifStream(ragdoll.motor.unknownFloat5, out, info);
				NifStream(ragdoll.motor.unknownFloat6, out, info);
				NifStream(ragdoll.motor.unknownByte1, out, info);
			};
		};
	};
	if((type == 2))
	{
		if(info.version <= 0x14000005)
		{
			NifStream(limitedHinge.pivotA, out, info);
			NifStream(limitedHinge.axleA, out, info);
			NifStream(limitedHinge.perp2AxleInA1, out, info);
			NifStream(limitedHinge.perp2AxleInA2, out, info);
			NifStream(limitedHinge.pivotB, out, info);
			NifStream(limitedHinge.axleB, out, info);
			NifStream(limitedHinge.perp2AxleInB2, out, info);
		};
		if(info.version >= 0x14020007)
		{
			NifStream(limitedHinge.axleA, out, info);
			NifStream(limitedHinge.perp2AxleInA1, out, info);
			NifStream(limitedHinge.perp2AxleInA2, out, info);
			NifStream(limitedHinge.pivotA, out, info);
			NifStream(limitedHinge.axleB, out, info);
			NifStream(limitedHinge.perp2AxleInB1, out, info);
			NifStream(limitedHinge.perp2AxleInB2, out, info);
			NifStream(limitedHinge.pivotB, out, info);
		};
		NifStream(limitedHinge.minAngle, out, info);
		NifStream(limitedHinge.maxAngle, out, info);
		NifStream(limitedHinge.maxFriction, out, info);
		if(info.version >= 0x14020007)
		{
			NifStream(limitedHinge.enableMotor, out, info);
			if(limitedHinge.enableMotor)
			{
				NifStream(limitedHinge.motor.unknownFloat1, out, info);
				NifStream(limitedHinge.motor.unknownFloat2, out, info);
				NifStream(limitedHinge.motor.unknownFloat3, out, info);
				NifStream(limitedHinge.motor.unknownFloat4, out, info);
				NifStream(limitedHinge.motor.unknownFloat5, out, info);
				NifStream(limitedHinge.motor.unknownFloat6, out, info);
				NifStream(limitedHinge.motor.unknownByte1, out, info);
			};
		};
	};
	if(info.version <= 0x14000005)
	{
		NifStream(tau, out, info);
	};
	NifStream(damping, out, info);

	//--BEGIN POST-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::string bhkMalleableConstraint::asString(bool verbose) const
{
	//--BEGIN PRE-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//

	stringstream out;
	out << bhkConstraint::asString(verbose);
	out << "  Type:  " << type << endl;
	out << "  Unknown Int 2:  " << unknownInt2 << endl;
	out << "  Unknown Link 1:  " << unknownLink1 << endl;
	out << "  Unknown Link 2:  " << unknownLink2 << endl;
	out << "  Unknown Int 3:  " << unknownInt3 << endl;
	if((type == 1))
	{
		out << "    Pivot A:  " << VariableConversionFunctions::DisplayFullValues_Vector(hinge.pivotA.x, hinge.pivotA.y, hinge.pivotA.z, hinge.pivotA.w) << endl;
		out << "    Perp2 Axle In A1:  " << VariableConversionFunctions::DisplayFullValues_Vector(hinge.perp2AxleInA1.x, hinge.perp2AxleInA1.y, hinge.perp2AxleInA1.z, hinge.perp2AxleInA1.w) << endl;
		out << "    Perp2 Axle In A2:  " << VariableConversionFunctions::DisplayFullValues_Vector(hinge.perp2AxleInA2.x, hinge.perp2AxleInA2.y, hinge.perp2AxleInA2.z, hinge.perp2AxleInA2.w) << endl;
		out << "    Pivot B:  " << VariableConversionFunctions::DisplayFullValues_Vector(hinge.pivotB.x, hinge.pivotB.y, hinge.pivotB.z, hinge.pivotB.w) << endl;
		out << "    Axle B:  " << VariableConversionFunctions::DisplayFullValues_Vector(hinge.axleB.x, hinge.axleB.y, hinge.axleB.z, hinge.axleB.w) << endl;
		out << "    Axle A:  " << VariableConversionFunctions::DisplayFullValues_Vector(hinge.axleA.x, hinge.axleA.y, hinge.axleA.z, hinge.axleA.w) << endl;
		out << "    Perp2 Axle In B1:  " << VariableConversionFunctions::DisplayFullValues_Vector(hinge.perp2AxleInB1.x, hinge.perp2AxleInB1.y, hinge.perp2AxleInB1.z, hinge.perp2AxleInB1.w) << endl;
		out << "    Perp2 Axle In B2:  " << VariableConversionFunctions::DisplayFullValues_Vector(hinge.perp2AxleInB2.x, hinge.perp2AxleInB2.y, hinge.perp2AxleInB2.z, hinge.perp2AxleInB2.w) << endl;
	};
	if((type == 7))
	{
		out << "    Pivot A:  " << VariableConversionFunctions::DisplayFullValues_Vector(ragdoll.pivotA.x, ragdoll.pivotA.y, ragdoll.pivotA.z, ragdoll.pivotA.w) << endl;
		out << "    Plane A:  " << VariableConversionFunctions::DisplayFullValues_Vector(ragdoll.planeA.x, ragdoll.planeA.y, ragdoll.planeA.z, ragdoll.planeA.w) << endl;
		out << "    Twist A:  " << VariableConversionFunctions::DisplayFullValues_Vector(ragdoll.twistA.x, ragdoll.twistA.y, ragdoll.twistA.z, ragdoll.twistA.w) << endl;
		out << "    Pivot B:  " << VariableConversionFunctions::DisplayFullValues_Vector(ragdoll.pivotB.x, ragdoll.pivotB.y, ragdoll.pivotB.z, ragdoll.pivotB.w) << endl;
		out << "    Plane B:  " << VariableConversionFunctions::DisplayFullValues_Vector(ragdoll.planeB.x, ragdoll.planeB.y, ragdoll.planeB.z, ragdoll.planeB.w) << endl;
		out << "    Twist B:  " << VariableConversionFunctions::DisplayFullValues_Vector(ragdoll.twistB.x, ragdoll.twistB.y, ragdoll.twistB.z, ragdoll.twistB.w) << endl;
		out << "    Motor A:  " << VariableConversionFunctions::DisplayFullValues_Vector(ragdoll.motorA.x, ragdoll.motorA.y, ragdoll.motorA.z, ragdoll.motorA.w) << endl;
		out << "    Motor B:  " << VariableConversionFunctions::DisplayFullValues_Vector(ragdoll.motorB.x, ragdoll.motorB.y, ragdoll.motorB.z, ragdoll.motorB.w) << endl;
		out << "    Cone Max Angle:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.coneMaxAngle) << endl;
		out << "    Plane Min Angle:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.planeMinAngle) << endl;
		out << "    Plane Max Angle:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.planeMaxAngle) << endl;
		out << "    Twist Min Angle:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.twistMinAngle) << endl;
		out << "    Twist Max Angle:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.twistMaxAngle) << endl;
		out << "    Max Friction:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.maxFriction) << endl;
		out << "    Enable Motor:  " << ragdoll.enableMotor << endl;
		if(ragdoll.enableMotor)
		{
			out << "      Unknown Float 1:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.motor.unknownFloat1) << endl;
			out << "      Unknown Float 2:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.motor.unknownFloat2) << endl;
			out << "      Unknown Float 3:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.motor.unknownFloat3) << endl;
			out << "      Unknown Float 4:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.motor.unknownFloat4) << endl;
			out << "      Unknown Float 5:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.motor.unknownFloat5) << endl;
			out << "      Unknown Float 6:  " << VariableConversionFunctions::FloatToStringConversion(ragdoll.motor.unknownFloat6) << endl;
			out << "      Unknown Byte 1:  " << ragdoll.motor.unknownByte1 << endl;
		};
	};
	if((type == 2))
	{
		out << "    Pivot A:  " << VariableConversionFunctions::DisplayFullValues_Vector(limitedHinge.pivotA.x, limitedHinge.pivotA.y, limitedHinge.pivotA.z, limitedHinge.pivotA.w) << endl;
		out << "    Axle A:  " << VariableConversionFunctions::DisplayFullValues_Vector(limitedHinge.axleA.x, limitedHinge.axleA.y, limitedHinge.axleA.z, limitedHinge.axleA.w) << endl;
		out << "    Perp2 Axle In A1:  " << VariableConversionFunctions::DisplayFullValues_Vector(limitedHinge.perp2AxleInA1.x, limitedHinge.perp2AxleInA1.y, limitedHinge.perp2AxleInA1.z, limitedHinge.perp2AxleInA1.w) << endl;
		out << "    Perp2 Axle In A2:  " << VariableConversionFunctions::DisplayFullValues_Vector(limitedHinge.perp2AxleInA2.x, limitedHinge.perp2AxleInA2.y, limitedHinge.perp2AxleInA2.z, limitedHinge.perp2AxleInA2.w) << endl;
		out << "    Pivot B:  " << VariableConversionFunctions::DisplayFullValues_Vector(limitedHinge.pivotB.x, limitedHinge.pivotB.y, limitedHinge.pivotB.z, limitedHinge.pivotB.w) << endl;
		out << "    Axle B:  " << VariableConversionFunctions::DisplayFullValues_Vector(limitedHinge.axleB.x, limitedHinge.axleB.y, limitedHinge.axleB.z, limitedHinge.axleB.w) << endl;
		out << "    Perp2 Axle In B2:  " << VariableConversionFunctions::DisplayFullValues_Vector(limitedHinge.perp2AxleInB2.x, limitedHinge.perp2AxleInB2.y, limitedHinge.perp2AxleInB2.z, limitedHinge.perp2AxleInB2.w) << endl;
		out << "    Perp2 Axle In B1:  " << VariableConversionFunctions::DisplayFullValues_Vector(limitedHinge.perp2AxleInB1.x, limitedHinge.perp2AxleInB1.y, limitedHinge.perp2AxleInB1.z, limitedHinge.perp2AxleInB1.w) << endl;
		out << "    Min Angle:  " << VariableConversionFunctions::FloatToStringConversion(limitedHinge.minAngle) << endl;
		out << "    Max Angle:  " << VariableConversionFunctions::FloatToStringConversion(limitedHinge.maxAngle) << endl;
		out << "    Max Friction:  " << VariableConversionFunctions::FloatToStringConversion(limitedHinge.maxFriction) << endl;
		out << "    Enable Motor:  " << limitedHinge.enableMotor << endl;
		if(limitedHinge.enableMotor)
		{
			out << "      Unknown Float 1:  " << VariableConversionFunctions::FloatToStringConversion(limitedHinge.motor.unknownFloat1) << endl;
			out << "      Unknown Float 2:  " << VariableConversionFunctions::FloatToStringConversion(limitedHinge.motor.unknownFloat2) << endl;
			out << "      Unknown Float 3:  " << VariableConversionFunctions::FloatToStringConversion(limitedHinge.motor.unknownFloat3) << endl;
			out << "      Unknown Float 4:  " << VariableConversionFunctions::FloatToStringConversion(limitedHinge.motor.unknownFloat4) << endl;
			out << "      Unknown Float 5:  " << VariableConversionFunctions::FloatToStringConversion(limitedHinge.motor.unknownFloat5) << endl;
			out << "      Unknown Float 6:  " << VariableConversionFunctions::FloatToStringConversion(limitedHinge.motor.unknownFloat6) << endl;
			out << "      Unknown Byte 1:  " << limitedHinge.motor.unknownByte1 << endl;
		};
	};
	out << "  Tau:  " << tau << endl;
	out << "  Damping:  " << damping << endl;
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void bhkMalleableConstraint::FixLinks(const map<unsigned int, NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info)
{
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//

	bhkConstraint::FixLinks(objects, link_stack, missing_link_stack, info);
	unknownLink1 = FixLink<NiObject>(objects, link_stack, missing_link_stack, info);
	unknownLink2 = FixLink<NiObject>(objects, link_stack, missing_link_stack, info);

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> bhkMalleableConstraint::GetRefs() const
{
	list<Ref<NiObject> > refs;
	refs = bhkConstraint::GetRefs();
	if(unknownLink1 != NULL)
		refs.push_back(StaticCast<NiObject>(unknownLink1));
	if(unknownLink2 != NULL)
		refs.push_back(StaticCast<NiObject>(unknownLink2));
	return refs;
}

std::list<NiObject *> bhkMalleableConstraint::GetPtrs() const
{
	list<NiObject *> ptrs;
	ptrs = bhkConstraint::GetPtrs();
	return ptrs;
}

/***Begin Example Naive Implementation****

unsigned int bhkMalleableConstraint::GetType() const {
return type;
}

void bhkMalleableConstraint::SetType( unsigned int value ) {
type = value;
}

HingeDescriptor bhkMalleableConstraint::GetHinge() const {
return hinge;
}

void bhkMalleableConstraint::SetHinge( const HingeDescriptor & value ) {
hinge = value;
}

RagdollDescriptor bhkMalleableConstraint::GetRagdoll() const {
return ragdoll;
}

void bhkMalleableConstraint::SetRagdoll( const RagdollDescriptor & value ) {
ragdoll = value;
}

LimitedHingeDescriptor bhkMalleableConstraint::GetLimitedHinge() const {
return limitedHinge;
}

void bhkMalleableConstraint::SetLimitedHinge( const LimitedHingeDescriptor & value ) {
limitedHinge = value;
}

float bhkMalleableConstraint::GetTau() const {
return tau;
}

void bhkMalleableConstraint::SetTau( float value ) {
tau = value;
}

float bhkMalleableConstraint::GetDamping() const {
return damping;
}

void bhkMalleableConstraint::SetDamping( float value ) {
damping = value;
}

****End Example Naive Implementation***/

//--BEGIN MISC CUSTOM CODE--//
//--END CUSTOM CODE--//