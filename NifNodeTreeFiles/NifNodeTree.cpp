#include "NifNodeTree.h"

void NifNodeTreeData::NifNodeTree::AddNodeToTree(std::string TargetNodeType, std::string TargetMenuMaster, std::string SpecialModifier/* = ""*/, std::string ItemName/* = ""*/, std::string InternalName/* = ""*/)
{
	AddMenuItemData(TargetMenuMaster, SpecialModifier, ItemName, InternalName);
	FixCurrentNodeData();
	CurrentNode->NodeType = TargetNodeType;
	size_t Index;
	//Now add actual node to ObjectRegistry
	if(TargetNodeType == "NiObject")
	{
		Index = TargetObjectRegistry.NiObject_Registry.Size();
		TargetObjectRegistry.NiObject_Registry.AddData();
	}
	else if(TargetNodeType == "Ni3dsAlphaAnimator")
	{
		Index = TargetObjectRegistry.Ni3dsAlphaAnimator_Registry.Size();
		TargetObjectRegistry.Ni3dsAlphaAnimator_Registry.AddData();
	}
	else if(TargetNodeType == "Ni3dsAnimationNode")
	{
		Index = TargetObjectRegistry.Ni3dsAnimationNode_Registry.Size();
		TargetObjectRegistry.Ni3dsAnimationNode_Registry.AddData();
	}
	else if(TargetNodeType == "Ni3dsColorAnimator")
	{
		Index = TargetObjectRegistry.Ni3dsColorAnimator_Registry.Size();
		TargetObjectRegistry.Ni3dsColorAnimator_Registry.AddData();
	}
	else if(TargetNodeType == "Ni3dsMorphShape")
	{
		Index = TargetObjectRegistry.Ni3dsMorphShape_Registry.Size();
		TargetObjectRegistry.Ni3dsMorphShape_Registry.AddData();
	}
	else if(TargetNodeType == "Ni3dsParticleSystem")
	{
		Index = TargetObjectRegistry.Ni3dsParticleSystem_Registry.Size();
		TargetObjectRegistry.Ni3dsParticleSystem_Registry.AddData();
	}
	else if(TargetNodeType == "Ni3dsPathController")
	{
		Index = TargetObjectRegistry.Ni3dsPathController_Registry.Size();
		TargetObjectRegistry.Ni3dsPathController_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleModifier")
	{
		Index = TargetObjectRegistry.NiParticleModifier_Registry.Size();
		TargetObjectRegistry.NiParticleModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysCollider")
	{
		Index = TargetObjectRegistry.NiPSysCollider_Registry.Size();
		TargetObjectRegistry.NiPSysCollider_Registry.AddData();
	}
	else if(TargetNodeType == "bhkRefObject")
	{
		Index = TargetObjectRegistry.bhkRefObject_Registry.Size();
		TargetObjectRegistry.bhkRefObject_Registry.AddData();
	}
	else if(TargetNodeType == "bhkSerializable")
	{
		Index = TargetObjectRegistry.bhkSerializable_Registry.Size();
		TargetObjectRegistry.bhkSerializable_Registry.AddData();
	}
	else if(TargetNodeType == "bhkWorldObject")
	{
		Index = TargetObjectRegistry.bhkWorldObject_Registry.Size();
		TargetObjectRegistry.bhkWorldObject_Registry.AddData();
	}
	else if(TargetNodeType == "bhkPhantom")
	{
		Index = TargetObjectRegistry.bhkPhantom_Registry.Size();
		TargetObjectRegistry.bhkPhantom_Registry.AddData();
	}
	else if(TargetNodeType == "bhkShapePhantom")
	{
		Index = TargetObjectRegistry.bhkShapePhantom_Registry.Size();
		TargetObjectRegistry.bhkShapePhantom_Registry.AddData();
	}
	else if(TargetNodeType == "bhkSimpleShapePhantom")
	{
		Index = TargetObjectRegistry.bhkSimpleShapePhantom_Registry.Size();
		TargetObjectRegistry.bhkSimpleShapePhantom_Registry.AddData();
	}
	else if(TargetNodeType == "bhkEntity")
	{
		Index = TargetObjectRegistry.bhkEntity_Registry.Size();
		TargetObjectRegistry.bhkEntity_Registry.AddData();
	}
	else if(TargetNodeType == "bhkRigidBody")
	{
		Index = TargetObjectRegistry.bhkRigidBody_Registry.Size();
		TargetObjectRegistry.bhkRigidBody_Registry.AddData();
	}
	else if(TargetNodeType == "bhkRigidBodyT")
	{
		Index = TargetObjectRegistry.bhkRigidBodyT_Registry.Size();
		TargetObjectRegistry.bhkRigidBodyT_Registry.AddData();
	}
	else if(TargetNodeType == "bhkConstraint")
	{
		Index = TargetObjectRegistry.bhkConstraint_Registry.Size();
		TargetObjectRegistry.bhkConstraint_Registry.AddData();
	}
	else if(TargetNodeType == "bhkLimitedHingeConstraint")
	{
		Index = TargetObjectRegistry.bhkLimitedHingeConstraint_Registry.Size();
		TargetObjectRegistry.bhkLimitedHingeConstraint_Registry.AddData();
	}
	else if(TargetNodeType == "bhkMalleableConstraint")
	{
		Index = TargetObjectRegistry.bhkMalleableConstraint_Registry.Size();
		TargetObjectRegistry.bhkMalleableConstraint_Registry.AddData();
	}
	else if(TargetNodeType == "bhkStiffSpringConstraint")
	{
		Index = TargetObjectRegistry.bhkStiffSpringConstraint_Registry.Size();
		TargetObjectRegistry.bhkStiffSpringConstraint_Registry.AddData();
	}
	else if(TargetNodeType == "bhkRagdollConstraint")
	{
		Index = TargetObjectRegistry.bhkRagdollConstraint_Registry.Size();
		TargetObjectRegistry.bhkRagdollConstraint_Registry.AddData();
	}
	else if(TargetNodeType == "bhkPrismaticConstraint")
	{
		Index = TargetObjectRegistry.bhkPrismaticConstraint_Registry.Size();
		TargetObjectRegistry.bhkPrismaticConstraint_Registry.AddData();
	}
	else if(TargetNodeType == "bhkHingeConstraint")
	{
		Index = TargetObjectRegistry.bhkHingeConstraint_Registry.Size();
		TargetObjectRegistry.bhkHingeConstraint_Registry.AddData();
	}
	else if(TargetNodeType == "bhkBallAndSocketConstraint")
	{
		Index = TargetObjectRegistry.bhkBallAndSocketConstraint_Registry.Size();
		TargetObjectRegistry.bhkBallAndSocketConstraint_Registry.AddData();
	}
	else if(TargetNodeType == "bhkBallSocketConstraintChain")
	{
		Index = TargetObjectRegistry.bhkBallSocketConstraintChain_Registry.Size();
		TargetObjectRegistry.bhkBallSocketConstraintChain_Registry.AddData();
	}
	else if(TargetNodeType == "bhkShape")
	{
		Index = TargetObjectRegistry.bhkShape_Registry.Size();
		TargetObjectRegistry.bhkShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkTransformShape")
	{
		Index = TargetObjectRegistry.bhkTransformShape_Registry.Size();
		TargetObjectRegistry.bhkTransformShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkSphereRepShape")
	{
		Index = TargetObjectRegistry.bhkSphereRepShape_Registry.Size();
		TargetObjectRegistry.bhkSphereRepShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkConvexShape")
	{
		Index = TargetObjectRegistry.bhkConvexShape_Registry.Size();
		TargetObjectRegistry.bhkConvexShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkSphereShape")
	{
		Index = TargetObjectRegistry.bhkSphereShape_Registry.Size();
		TargetObjectRegistry.bhkSphereShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkCapsuleShape")
	{
		Index = TargetObjectRegistry.bhkCapsuleShape_Registry.Size();
		TargetObjectRegistry.bhkCapsuleShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkBoxShape")
	{
		Index = TargetObjectRegistry.bhkBoxShape_Registry.Size();
		TargetObjectRegistry.bhkBoxShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkConvexVerticesShape")
	{
		Index = TargetObjectRegistry.bhkConvexVerticesShape_Registry.Size();
		TargetObjectRegistry.bhkConvexVerticesShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkConvexTransformShape")
	{
		Index = TargetObjectRegistry.bhkConvexTransformShape_Registry.Size();
		TargetObjectRegistry.bhkConvexTransformShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkMultiSphereShape")
	{
		Index = TargetObjectRegistry.bhkMultiSphereShape_Registry.Size();
		TargetObjectRegistry.bhkMultiSphereShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkBvTreeShape")
	{
		Index = TargetObjectRegistry.bhkBvTreeShape_Registry.Size();
		TargetObjectRegistry.bhkBvTreeShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkMoppBvTreeShape")
	{
		Index = TargetObjectRegistry.bhkMoppBvTreeShape_Registry.Size();
		TargetObjectRegistry.bhkMoppBvTreeShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkShapeCollection")
	{
		Index = TargetObjectRegistry.bhkShapeCollection_Registry.Size();
		TargetObjectRegistry.bhkShapeCollection_Registry.AddData();
	}
	else if(TargetNodeType == "bhkListShape")
	{
		Index = TargetObjectRegistry.bhkListShape_Registry.Size();
		TargetObjectRegistry.bhkListShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkMeshShape")
	{
		Index = TargetObjectRegistry.bhkMeshShape_Registry.Size();
		TargetObjectRegistry.bhkMeshShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkPackedNiTriStripsShape")
	{
		Index = TargetObjectRegistry.bhkPackedNiTriStripsShape_Registry.Size();
		TargetObjectRegistry.bhkPackedNiTriStripsShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkNiTriStripsShape")
	{
		Index = TargetObjectRegistry.bhkNiTriStripsShape_Registry.Size();
		TargetObjectRegistry.bhkNiTriStripsShape_Registry.AddData();
	}
	else if(TargetNodeType == "NiExtraData")
	{
		Index = TargetObjectRegistry.NiExtraData_Registry.Size();
		TargetObjectRegistry.NiExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiInterpolator")
	{
		Index = TargetObjectRegistry.NiInterpolator_Registry.Size();
		TargetObjectRegistry.NiInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiKeyBasedInterpolator")
	{
		Index = TargetObjectRegistry.NiKeyBasedInterpolator_Registry.Size();
		TargetObjectRegistry.NiKeyBasedInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiFloatInterpolator")
	{
		Index = TargetObjectRegistry.NiFloatInterpolator_Registry.Size();
		TargetObjectRegistry.NiFloatInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiTransformInterpolator")
	{
		Index = TargetObjectRegistry.NiTransformInterpolator_Registry.Size();
		TargetObjectRegistry.NiTransformInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiPoint3Interpolator")
	{
		Index = TargetObjectRegistry.NiPoint3Interpolator_Registry.Size();
		TargetObjectRegistry.NiPoint3Interpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiPathInterpolator")
	{
		Index = TargetObjectRegistry.NiPathInterpolator_Registry.Size();
		TargetObjectRegistry.NiPathInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBoolInterpolator")
	{
		Index = TargetObjectRegistry.NiBoolInterpolator_Registry.Size();
		TargetObjectRegistry.NiBoolInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBoolTimelineInterpolator")
	{
		Index = TargetObjectRegistry.NiBoolTimelineInterpolator_Registry.Size();
		TargetObjectRegistry.NiBoolTimelineInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBlendInterpolator")
	{
		Index = TargetObjectRegistry.NiBlendInterpolator_Registry.Size();
		TargetObjectRegistry.NiBlendInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplineInterpolator")
	{
		Index = TargetObjectRegistry.NiBSplineInterpolator_Registry.Size();
		TargetObjectRegistry.NiBSplineInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiObjectNET")
	{
		Index = TargetObjectRegistry.NiObjectNET_Registry.Size();
		TargetObjectRegistry.NiObjectNET_Registry.AddData();
	}
	else if(TargetNodeType == "NiCollisionObject")
	{
		Index = TargetObjectRegistry.NiCollisionObject_Registry.Size();
		TargetObjectRegistry.NiCollisionObject_Registry.AddData();
	}
	else if(TargetNodeType == "NiCollisionData")
	{
		Index = TargetObjectRegistry.NiCollisionData_Registry.Size();
		TargetObjectRegistry.NiCollisionData_Registry.AddData();
	}
	else if(TargetNodeType == "bhkNiCollisionObject")
	{
		Index = TargetObjectRegistry.bhkNiCollisionObject_Registry.Size();
		TargetObjectRegistry.bhkNiCollisionObject_Registry.AddData();
	}
	else if(TargetNodeType == "bhkCollisionObject")
	{
		Index = TargetObjectRegistry.bhkCollisionObject_Registry.Size();
		TargetObjectRegistry.bhkCollisionObject_Registry.AddData();
	}
	else if(TargetNodeType == "bhkBlendCollisionObject")
	{
		Index = TargetObjectRegistry.bhkBlendCollisionObject_Registry.Size();
		TargetObjectRegistry.bhkBlendCollisionObject_Registry.AddData();
	}
	else if(TargetNodeType == "bhkPCollisionObject")
	{
		Index = TargetObjectRegistry.bhkPCollisionObject_Registry.Size();
		TargetObjectRegistry.bhkPCollisionObject_Registry.AddData();
	}
	else if(TargetNodeType == "bhkSPCollisionObject")
	{
		Index = TargetObjectRegistry.bhkSPCollisionObject_Registry.Size();
		TargetObjectRegistry.bhkSPCollisionObject_Registry.AddData();
	}
	else if(TargetNodeType == "NiAVObject")
	{
		Index = TargetObjectRegistry.NiAVObject_Registry.Size();
		TargetObjectRegistry.NiAVObject_Registry.AddData();
	}
	else if(TargetNodeType == "NiDynamicEffect")
	{
		Index = TargetObjectRegistry.NiDynamicEffect_Registry.Size();
		TargetObjectRegistry.NiDynamicEffect_Registry.AddData();
	}
	else if(TargetNodeType == "NiLight")
	{
		Index = TargetObjectRegistry.NiLight_Registry.Size();
		TargetObjectRegistry.NiLight_Registry.AddData();
	}
	else if(TargetNodeType == "NiProperty")
	{
		Index = TargetObjectRegistry.NiProperty_Registry.Size();
		TargetObjectRegistry.NiProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiTransparentProperty")
	{
		Index = TargetObjectRegistry.NiTransparentProperty_Registry.Size();
		TargetObjectRegistry.NiTransparentProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysModifier")
	{
		Index = TargetObjectRegistry.NiPSysModifier_Registry.Size();
		TargetObjectRegistry.NiPSysModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitter")
	{
		Index = TargetObjectRegistry.NiPSysEmitter_Registry.Size();
		TargetObjectRegistry.NiPSysEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysVolumeEmitter")
	{
		Index = TargetObjectRegistry.NiPSysVolumeEmitter_Registry.Size();
		TargetObjectRegistry.NiPSysVolumeEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiTimeController")
	{
		Index = TargetObjectRegistry.NiTimeController_Registry.Size();
		TargetObjectRegistry.NiTimeController_Registry.AddData();
	}
	else if(TargetNodeType == "NiInterpController")
	{
		Index = TargetObjectRegistry.NiInterpController_Registry.Size();
		TargetObjectRegistry.NiInterpController_Registry.AddData();
	}
	else if(TargetNodeType == "NiMultiTargetTransformController")
	{
		Index = TargetObjectRegistry.NiMultiTargetTransformController_Registry.Size();
		TargetObjectRegistry.NiMultiTargetTransformController_Registry.AddData();
	}
	else if(TargetNodeType == "NiGeomMorpherController")
	{
		Index = TargetObjectRegistry.NiGeomMorpherController_Registry.Size();
		TargetObjectRegistry.NiGeomMorpherController_Registry.AddData();
	}
	else if(TargetNodeType == "NiMorphController")
	{
		Index = TargetObjectRegistry.NiMorphController_Registry.Size();
		TargetObjectRegistry.NiMorphController_Registry.AddData();
	}
	else if(TargetNodeType == "NiMorpherController")
	{
		Index = TargetObjectRegistry.NiMorpherController_Registry.Size();
		TargetObjectRegistry.NiMorpherController_Registry.AddData();
	}
	else if(TargetNodeType == "NiSingleInterpController")
	{
		Index = TargetObjectRegistry.NiSingleInterpController_Registry.Size();
		TargetObjectRegistry.NiSingleInterpController_Registry.AddData();
	}
	else if(TargetNodeType == "NiKeyframeController")
	{
		Index = TargetObjectRegistry.NiKeyframeController_Registry.Size();
		TargetObjectRegistry.NiKeyframeController_Registry.AddData();
	}
	else if(TargetNodeType == "NiTransformController")
	{
		Index = TargetObjectRegistry.NiTransformController_Registry.Size();
		TargetObjectRegistry.NiTransformController_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysModifierCtlr")
	{
		Index = TargetObjectRegistry.NiPSysModifierCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysModifierCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitterCtlr")
	{
		Index = TargetObjectRegistry.NiPSysEmitterCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysEmitterCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysModifierBoolCtlr")
	{
		Index = TargetObjectRegistry.NiPSysModifierBoolCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysModifierBoolCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysModifierActiveCtlr")
	{
		Index = TargetObjectRegistry.NiPSysModifierActiveCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysModifierActiveCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysModifierFloatCtlr")
	{
		Index = TargetObjectRegistry.NiPSysModifierFloatCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysModifierFloatCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitterDeclinationCtlr")
	{
		Index = TargetObjectRegistry.NiPSysEmitterDeclinationCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysEmitterDeclinationCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitterDeclinationVarCtlr")
	{
		Index = TargetObjectRegistry.NiPSysEmitterDeclinationVarCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysEmitterDeclinationVarCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitterInitialRadiusCtlr")
	{
		Index = TargetObjectRegistry.NiPSysEmitterInitialRadiusCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysEmitterInitialRadiusCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitterLifeSpanCtlr")
	{
		Index = TargetObjectRegistry.NiPSysEmitterLifeSpanCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysEmitterLifeSpanCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitterSpeedCtlr")
	{
		Index = TargetObjectRegistry.NiPSysEmitterSpeedCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysEmitterSpeedCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysGravityStrengthCtlr")
	{
		Index = TargetObjectRegistry.NiPSysGravityStrengthCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysGravityStrengthCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiFloatInterpController")
	{
		Index = TargetObjectRegistry.NiFloatInterpController_Registry.Size();
		TargetObjectRegistry.NiFloatInterpController_Registry.AddData();
	}
	else if(TargetNodeType == "NiFlipController")
	{
		Index = TargetObjectRegistry.NiFlipController_Registry.Size();
		TargetObjectRegistry.NiFlipController_Registry.AddData();
	}
	else if(TargetNodeType == "NiAlphaController")
	{
		Index = TargetObjectRegistry.NiAlphaController_Registry.Size();
		TargetObjectRegistry.NiAlphaController_Registry.AddData();
	}
	else if(TargetNodeType == "NiTextureTransformController")
	{
		Index = TargetObjectRegistry.NiTextureTransformController_Registry.Size();
		TargetObjectRegistry.NiTextureTransformController_Registry.AddData();
	}
	else if(TargetNodeType == "NiLightDimmerController")
	{
		Index = TargetObjectRegistry.NiLightDimmerController_Registry.Size();
		TargetObjectRegistry.NiLightDimmerController_Registry.AddData();
	}
	else if(TargetNodeType == "NiBoolInterpController")
	{
		Index = TargetObjectRegistry.NiBoolInterpController_Registry.Size();
		TargetObjectRegistry.NiBoolInterpController_Registry.AddData();
	}
	else if(TargetNodeType == "NiVisController")
	{
		Index = TargetObjectRegistry.NiVisController_Registry.Size();
		TargetObjectRegistry.NiVisController_Registry.AddData();
	}
	else if(TargetNodeType == "NiPoint3InterpController")
	{
		Index = TargetObjectRegistry.NiPoint3InterpController_Registry.Size();
		TargetObjectRegistry.NiPoint3InterpController_Registry.AddData();
	}
	else if(TargetNodeType == "NiMaterialColorController")
	{
		Index = TargetObjectRegistry.NiMaterialColorController_Registry.Size();
		TargetObjectRegistry.NiMaterialColorController_Registry.AddData();
	}
	else if(TargetNodeType == "NiLightColorController")
	{
		Index = TargetObjectRegistry.NiLightColorController_Registry.Size();
		TargetObjectRegistry.NiLightColorController_Registry.AddData();
	}
	else if(TargetNodeType == "NiExtraDataController")
	{
		Index = TargetObjectRegistry.NiExtraDataController_Registry.Size();
		TargetObjectRegistry.NiExtraDataController_Registry.AddData();
	}
	else if(TargetNodeType == "NiFloatExtraDataController")
	{
		Index = TargetObjectRegistry.NiFloatExtraDataController_Registry.Size();
		TargetObjectRegistry.NiFloatExtraDataController_Registry.AddData();
	}
	else if(TargetNodeType == "NiBoneLODController")
	{
		Index = TargetObjectRegistry.NiBoneLODController_Registry.Size();
		TargetObjectRegistry.NiBoneLODController_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSBoneLODController")
	{
		Index = TargetObjectRegistry.NiBSBoneLODController_Registry.Size();
		TargetObjectRegistry.NiBSBoneLODController_Registry.AddData();
	}
	else if(TargetNodeType == "NiGeometry")
	{
		Index = TargetObjectRegistry.NiGeometry_Registry.Size();
		TargetObjectRegistry.NiGeometry_Registry.AddData();
	}
	else if(TargetNodeType == "NiTriBasedGeom")
	{
		Index = TargetObjectRegistry.NiTriBasedGeom_Registry.Size();
		TargetObjectRegistry.NiTriBasedGeom_Registry.AddData();
	}
	else if(TargetNodeType == "NiGeometryData")
	{
		Index = TargetObjectRegistry.NiGeometryData_Registry.Size();
		TargetObjectRegistry.NiGeometryData_Registry.AddData();
	}
	else if(TargetNodeType == "AbstractAdditionalGeometryData")
	{
		Index = TargetObjectRegistry.AbstractAdditionalGeometryData_Registry.Size();
		TargetObjectRegistry.AbstractAdditionalGeometryData_Registry.AddData();
	}
	else if(TargetNodeType == "NiTriBasedGeomData")
	{
		Index = TargetObjectRegistry.NiTriBasedGeomData_Registry.Size();
		TargetObjectRegistry.NiTriBasedGeomData_Registry.AddData();
	}
	else if(TargetNodeType == "bhkBlendController")
	{
		Index = TargetObjectRegistry.bhkBlendController_Registry.Size();
		TargetObjectRegistry.bhkBlendController_Registry.AddData();
	}
	else if(TargetNodeType == "BSBound")
	{
		Index = TargetObjectRegistry.BSBound_Registry.Size();
		TargetObjectRegistry.BSBound_Registry.AddData();
	}
	else if(TargetNodeType == "BSFurnitureMarker")
	{
		Index = TargetObjectRegistry.BSFurnitureMarker_Registry.Size();
		TargetObjectRegistry.BSFurnitureMarker_Registry.AddData();
	}
	else if(TargetNodeType == "BSParentVelocityModifier")
	{
		Index = TargetObjectRegistry.BSParentVelocityModifier_Registry.Size();
		TargetObjectRegistry.BSParentVelocityModifier_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysArrayEmitter")
	{
		Index = TargetObjectRegistry.BSPSysArrayEmitter_Registry.Size();
		TargetObjectRegistry.BSPSysArrayEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "BSWindModifier")
	{
		Index = TargetObjectRegistry.BSWindModifier_Registry.Size();
		TargetObjectRegistry.BSWindModifier_Registry.AddData();
	}
	else if(TargetNodeType == "hkPackedNiTriStripsData")
	{
		Index = TargetObjectRegistry.hkPackedNiTriStripsData_Registry.Size();
		TargetObjectRegistry.hkPackedNiTriStripsData_Registry.AddData();
	}
	else if(TargetNodeType == "NiAlphaProperty")
	{
		Index = TargetObjectRegistry.NiAlphaProperty_Registry.Size();
		TargetObjectRegistry.NiAlphaProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiAmbientLight")
	{
		Index = TargetObjectRegistry.NiAmbientLight_Registry.Size();
		TargetObjectRegistry.NiAmbientLight_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticlesData")
	{
		Index = TargetObjectRegistry.NiParticlesData_Registry.Size();
		TargetObjectRegistry.NiParticlesData_Registry.AddData();
	}
	else if(TargetNodeType == "NiRotatingParticlesData")
	{
		Index = TargetObjectRegistry.NiRotatingParticlesData_Registry.Size();
		TargetObjectRegistry.NiRotatingParticlesData_Registry.AddData();
	}
	else if(TargetNodeType == "NiAutoNormalParticlesData")
	{
		Index = TargetObjectRegistry.NiAutoNormalParticlesData_Registry.Size();
		TargetObjectRegistry.NiAutoNormalParticlesData_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysData")
	{
		Index = TargetObjectRegistry.NiPSysData_Registry.Size();
		TargetObjectRegistry.NiPSysData_Registry.AddData();
	}
	else if(TargetNodeType == "NiMeshPSysData")
	{
		Index = TargetObjectRegistry.NiMeshPSysData_Registry.Size();
		TargetObjectRegistry.NiMeshPSysData_Registry.AddData();
	}
	else if(TargetNodeType == "NiBinaryExtraData")
	{
		Index = TargetObjectRegistry.NiBinaryExtraData_Registry.Size();
		TargetObjectRegistry.NiBinaryExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiBinaryVoxelExtraData")
	{
		Index = TargetObjectRegistry.NiBinaryVoxelExtraData_Registry.Size();
		TargetObjectRegistry.NiBinaryVoxelExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiBinaryVoxelData")
	{
		Index = TargetObjectRegistry.NiBinaryVoxelData_Registry.Size();
		TargetObjectRegistry.NiBinaryVoxelData_Registry.AddData();
	}
	else if(TargetNodeType == "NiBlendBoolInterpolator")
	{
		Index = TargetObjectRegistry.NiBlendBoolInterpolator_Registry.Size();
		TargetObjectRegistry.NiBlendBoolInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBlendFloatInterpolator")
	{
		Index = TargetObjectRegistry.NiBlendFloatInterpolator_Registry.Size();
		TargetObjectRegistry.NiBlendFloatInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBlendPoint3Interpolator")
	{
		Index = TargetObjectRegistry.NiBlendPoint3Interpolator_Registry.Size();
		TargetObjectRegistry.NiBlendPoint3Interpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBlendTransformInterpolator")
	{
		Index = TargetObjectRegistry.NiBlendTransformInterpolator_Registry.Size();
		TargetObjectRegistry.NiBlendTransformInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBoolData")
	{
		Index = TargetObjectRegistry.NiBoolData_Registry.Size();
		TargetObjectRegistry.NiBoolData_Registry.AddData();
	}
	else if(TargetNodeType == "NiBooleanExtraData")
	{
		Index = TargetObjectRegistry.NiBooleanExtraData_Registry.Size();
		TargetObjectRegistry.NiBooleanExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplineBasisData")
	{
		Index = TargetObjectRegistry.NiBSplineBasisData_Registry.Size();
		TargetObjectRegistry.NiBSplineBasisData_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplineFloatInterpolator")
	{
		Index = TargetObjectRegistry.NiBSplineFloatInterpolator_Registry.Size();
		TargetObjectRegistry.NiBSplineFloatInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplineCompFloatInterpolator")
	{
		Index = TargetObjectRegistry.NiBSplineCompFloatInterpolator_Registry.Size();
		TargetObjectRegistry.NiBSplineCompFloatInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplinePoint3Interpolator")
	{
		Index = TargetObjectRegistry.NiBSplinePoint3Interpolator_Registry.Size();
		TargetObjectRegistry.NiBSplinePoint3Interpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplineCompPoint3Interpolator")
	{
		Index = TargetObjectRegistry.NiBSplineCompPoint3Interpolator_Registry.Size();
		TargetObjectRegistry.NiBSplineCompPoint3Interpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplineTransformInterpolator")
	{
		Index = TargetObjectRegistry.NiBSplineTransformInterpolator_Registry.Size();
		TargetObjectRegistry.NiBSplineTransformInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplineCompTransformInterpolator")
	{
		Index = TargetObjectRegistry.NiBSplineCompTransformInterpolator_Registry.Size();
		TargetObjectRegistry.NiBSplineCompTransformInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "BSRotAccumTransfInterpolator")
	{
		Index = TargetObjectRegistry.BSRotAccumTransfInterpolator_Registry.Size();
		TargetObjectRegistry.BSRotAccumTransfInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplineData")
	{
		Index = TargetObjectRegistry.NiBSplineData_Registry.Size();
		TargetObjectRegistry.NiBSplineData_Registry.AddData();
	}
	else if(TargetNodeType == "NiCamera")
	{
		Index = TargetObjectRegistry.NiCamera_Registry.Size();
		TargetObjectRegistry.NiCamera_Registry.AddData();
	}
	else if(TargetNodeType == "NiColorData")
	{
		Index = TargetObjectRegistry.NiColorData_Registry.Size();
		TargetObjectRegistry.NiColorData_Registry.AddData();
	}
	else if(TargetNodeType == "NiColorExtraData")
	{
		Index = TargetObjectRegistry.NiColorExtraData_Registry.Size();
		TargetObjectRegistry.NiColorExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiControllerManager")
	{
		Index = TargetObjectRegistry.NiControllerManager_Registry.Size();
		TargetObjectRegistry.NiControllerManager_Registry.AddData();
	}
	else if(TargetNodeType == "NiSequence")
	{
		Index = TargetObjectRegistry.NiSequence_Registry.Size();
		TargetObjectRegistry.NiSequence_Registry.AddData();
	}
	else if(TargetNodeType == "NiControllerSequence")
	{
		Index = TargetObjectRegistry.NiControllerSequence_Registry.Size();
		TargetObjectRegistry.NiControllerSequence_Registry.AddData();
	}
	else if(TargetNodeType == "NiAVObjectPalette")
	{
		Index = TargetObjectRegistry.NiAVObjectPalette_Registry.Size();
		TargetObjectRegistry.NiAVObjectPalette_Registry.AddData();
	}
	else if(TargetNodeType == "NiDefaultAVObjectPalette")
	{
		Index = TargetObjectRegistry.NiDefaultAVObjectPalette_Registry.Size();
		TargetObjectRegistry.NiDefaultAVObjectPalette_Registry.AddData();
	}
	else if(TargetNodeType == "NiDirectionalLight")
	{
		Index = TargetObjectRegistry.NiDirectionalLight_Registry.Size();
		TargetObjectRegistry.NiDirectionalLight_Registry.AddData();
	}
	else if(TargetNodeType == "NiDitherProperty")
	{
		Index = TargetObjectRegistry.NiDitherProperty_Registry.Size();
		TargetObjectRegistry.NiDitherProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiRollController")
	{
		Index = TargetObjectRegistry.NiRollController_Registry.Size();
		TargetObjectRegistry.NiRollController_Registry.AddData();
	}
	else if(TargetNodeType == "NiFloatData")
	{
		Index = TargetObjectRegistry.NiFloatData_Registry.Size();
		TargetObjectRegistry.NiFloatData_Registry.AddData();
	}
	else if(TargetNodeType == "NiFloatExtraData")
	{
		Index = TargetObjectRegistry.NiFloatExtraData_Registry.Size();
		TargetObjectRegistry.NiFloatExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiFloatsExtraData")
	{
		Index = TargetObjectRegistry.NiFloatsExtraData_Registry.Size();
		TargetObjectRegistry.NiFloatsExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiFogProperty")
	{
		Index = TargetObjectRegistry.NiFogProperty_Registry.Size();
		TargetObjectRegistry.NiFogProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiGravity")
	{
		Index = TargetObjectRegistry.NiGravity_Registry.Size();
		TargetObjectRegistry.NiGravity_Registry.AddData();
	}
	else if(TargetNodeType == "NiIntegerExtraData")
	{
		Index = TargetObjectRegistry.NiIntegerExtraData_Registry.Size();
		TargetObjectRegistry.NiIntegerExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "BSXFlags")
	{
		Index = TargetObjectRegistry.BSXFlags_Registry.Size();
		TargetObjectRegistry.BSXFlags_Registry.AddData();
	}
	else if(TargetNodeType == "NiIntegersExtraData")
	{
		Index = TargetObjectRegistry.NiIntegersExtraData_Registry.Size();
		TargetObjectRegistry.NiIntegersExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "BSKeyframeController")
	{
		Index = TargetObjectRegistry.BSKeyframeController_Registry.Size();
		TargetObjectRegistry.BSKeyframeController_Registry.AddData();
	}
	else if(TargetNodeType == "NiKeyframeData")
	{
		Index = TargetObjectRegistry.NiKeyframeData_Registry.Size();
		TargetObjectRegistry.NiKeyframeData_Registry.AddData();
	}
	else if(TargetNodeType == "NiLookAtController")
	{
		Index = TargetObjectRegistry.NiLookAtController_Registry.Size();
		TargetObjectRegistry.NiLookAtController_Registry.AddData();
	}
	else if(TargetNodeType == "NiLookAtInterpolator")
	{
		Index = TargetObjectRegistry.NiLookAtInterpolator_Registry.Size();
		TargetObjectRegistry.NiLookAtInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "NiMaterialProperty")
	{
		Index = TargetObjectRegistry.NiMaterialProperty_Registry.Size();
		TargetObjectRegistry.NiMaterialProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiMorphData")
	{
		Index = TargetObjectRegistry.NiMorphData_Registry.Size();
		TargetObjectRegistry.NiMorphData_Registry.AddData();
	}
	else if(TargetNodeType == "NiNode")
	{
		Index = TargetObjectRegistry.NiNode_Registry.Size();
		TargetObjectRegistry.NiNode_Registry.AddData();
	}
	else if(TargetNodeType == "NiBone")
	{
		Index = TargetObjectRegistry.NiBone_Registry.Size();
		TargetObjectRegistry.NiBone_Registry.AddData();
	}
	else if(TargetNodeType == "AvoidNode")
	{
		Index = TargetObjectRegistry.AvoidNode_Registry.Size();
		TargetObjectRegistry.AvoidNode_Registry.AddData();
	}
	else if(TargetNodeType == "FxWidget")
	{
		Index = TargetObjectRegistry.FxWidget_Registry.Size();
		TargetObjectRegistry.FxWidget_Registry.AddData();
	}
	else if(TargetNodeType == "FxButton")
	{
		Index = TargetObjectRegistry.FxButton_Registry.Size();
		TargetObjectRegistry.FxButton_Registry.AddData();
	}
	else if(TargetNodeType == "FxRadioButton")
	{
		Index = TargetObjectRegistry.FxRadioButton_Registry.Size();
		TargetObjectRegistry.FxRadioButton_Registry.AddData();
	}
	else if(TargetNodeType == "NiBillboardNode")
	{
		Index = TargetObjectRegistry.NiBillboardNode_Registry.Size();
		TargetObjectRegistry.NiBillboardNode_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSAnimationNode")
	{
		Index = TargetObjectRegistry.NiBSAnimationNode_Registry.Size();
		TargetObjectRegistry.NiBSAnimationNode_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSParticleNode")
	{
		Index = TargetObjectRegistry.NiBSParticleNode_Registry.Size();
		TargetObjectRegistry.NiBSParticleNode_Registry.AddData();
	}
	else if(TargetNodeType == "NiSwitchNode")
	{
		Index = TargetObjectRegistry.NiSwitchNode_Registry.Size();
		TargetObjectRegistry.NiSwitchNode_Registry.AddData();
	}
	else if(TargetNodeType == "NiLODNode")
	{
		Index = TargetObjectRegistry.NiLODNode_Registry.Size();
		TargetObjectRegistry.NiLODNode_Registry.AddData();
	}
	else if(TargetNodeType == "NiPalette")
	{
		Index = TargetObjectRegistry.NiPalette_Registry.Size();
		TargetObjectRegistry.NiPalette_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleBomb")
	{
		Index = TargetObjectRegistry.NiParticleBomb_Registry.Size();
		TargetObjectRegistry.NiParticleBomb_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleColorModifier")
	{
		Index = TargetObjectRegistry.NiParticleColorModifier_Registry.Size();
		TargetObjectRegistry.NiParticleColorModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleGrowFade")
	{
		Index = TargetObjectRegistry.NiParticleGrowFade_Registry.Size();
		TargetObjectRegistry.NiParticleGrowFade_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleMeshModifier")
	{
		Index = TargetObjectRegistry.NiParticleMeshModifier_Registry.Size();
		TargetObjectRegistry.NiParticleMeshModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleRotation")
	{
		Index = TargetObjectRegistry.NiParticleRotation_Registry.Size();
		TargetObjectRegistry.NiParticleRotation_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticles")
	{
		Index = TargetObjectRegistry.NiParticles_Registry.Size();
		TargetObjectRegistry.NiParticles_Registry.AddData();
	}
	else if(TargetNodeType == "NiAutoNormalParticles")
	{
		Index = TargetObjectRegistry.NiAutoNormalParticles_Registry.Size();
		TargetObjectRegistry.NiAutoNormalParticles_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleMeshes")
	{
		Index = TargetObjectRegistry.NiParticleMeshes_Registry.Size();
		TargetObjectRegistry.NiParticleMeshes_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleMeshesData")
	{
		Index = TargetObjectRegistry.NiParticleMeshesData_Registry.Size();
		TargetObjectRegistry.NiParticleMeshesData_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleSystem")
	{
		Index = TargetObjectRegistry.NiParticleSystem_Registry.Size();
		TargetObjectRegistry.NiParticleSystem_Registry.AddData();
	}
	else if(TargetNodeType == "NiMeshParticleSystem")
	{
		Index = TargetObjectRegistry.NiMeshParticleSystem_Registry.Size();
		TargetObjectRegistry.NiMeshParticleSystem_Registry.AddData();
	}
	else if(TargetNodeType == "NiParticleSystemController")
	{
		Index = TargetObjectRegistry.NiParticleSystemController_Registry.Size();
		TargetObjectRegistry.NiParticleSystemController_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSPArrayController")
	{
		Index = TargetObjectRegistry.NiBSPArrayController_Registry.Size();
		TargetObjectRegistry.NiBSPArrayController_Registry.AddData();
	}
	else if(TargetNodeType == "NiPathController")
	{
		Index = TargetObjectRegistry.NiPathController_Registry.Size();
		TargetObjectRegistry.NiPathController_Registry.AddData();
	}
	else if(TargetNodeType == "ATextureRenderData")
	{
		Index = TargetObjectRegistry.ATextureRenderData_Registry.Size();
		TargetObjectRegistry.ATextureRenderData_Registry.AddData();
	}
	else if(TargetNodeType == "NiPersistentSrcTextureRendererData")
	{
		Index = TargetObjectRegistry.NiPersistentSrcTextureRendererData_Registry.Size();
		TargetObjectRegistry.NiPersistentSrcTextureRendererData_Registry.AddData();
	}
	else if(TargetNodeType == "NiPixelData")
	{
		Index = TargetObjectRegistry.NiPixelData_Registry.Size();
		TargetObjectRegistry.NiPixelData_Registry.AddData();
	}
	else if(TargetNodeType == "NiPlanarCollider")
	{
		Index = TargetObjectRegistry.NiPlanarCollider_Registry.Size();
		TargetObjectRegistry.NiPlanarCollider_Registry.AddData();
	}
	else if(TargetNodeType == "NiPointLight")
	{
		Index = TargetObjectRegistry.NiPointLight_Registry.Size();
		TargetObjectRegistry.NiPointLight_Registry.AddData();
	}
	else if(TargetNodeType == "NiPosData")
	{
		Index = TargetObjectRegistry.NiPosData_Registry.Size();
		TargetObjectRegistry.NiPosData_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysAgeDeathModifier")
	{
		Index = TargetObjectRegistry.NiPSysAgeDeathModifier_Registry.Size();
		TargetObjectRegistry.NiPSysAgeDeathModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysBombModifier")
	{
		Index = TargetObjectRegistry.NiPSysBombModifier_Registry.Size();
		TargetObjectRegistry.NiPSysBombModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysBoundUpdateModifier")
	{
		Index = TargetObjectRegistry.NiPSysBoundUpdateModifier_Registry.Size();
		TargetObjectRegistry.NiPSysBoundUpdateModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysBoxEmitter")
	{
		Index = TargetObjectRegistry.NiPSysBoxEmitter_Registry.Size();
		TargetObjectRegistry.NiPSysBoxEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysColliderManager")
	{
		Index = TargetObjectRegistry.NiPSysColliderManager_Registry.Size();
		TargetObjectRegistry.NiPSysColliderManager_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysColorModifier")
	{
		Index = TargetObjectRegistry.NiPSysColorModifier_Registry.Size();
		TargetObjectRegistry.NiPSysColorModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysCylinderEmitter")
	{
		Index = TargetObjectRegistry.NiPSysCylinderEmitter_Registry.Size();
		TargetObjectRegistry.NiPSysCylinderEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysDragModifier")
	{
		Index = TargetObjectRegistry.NiPSysDragModifier_Registry.Size();
		TargetObjectRegistry.NiPSysDragModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitterCtlrData")
	{
		Index = TargetObjectRegistry.NiPSysEmitterCtlrData_Registry.Size();
		TargetObjectRegistry.NiPSysEmitterCtlrData_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysGravityModifier")
	{
		Index = TargetObjectRegistry.NiPSysGravityModifier_Registry.Size();
		TargetObjectRegistry.NiPSysGravityModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysGrowFadeModifier")
	{
		Index = TargetObjectRegistry.NiPSysGrowFadeModifier_Registry.Size();
		TargetObjectRegistry.NiPSysGrowFadeModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysMeshEmitter")
	{
		Index = TargetObjectRegistry.NiPSysMeshEmitter_Registry.Size();
		TargetObjectRegistry.NiPSysMeshEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysMeshUpdateModifier")
	{
		Index = TargetObjectRegistry.NiPSysMeshUpdateModifier_Registry.Size();
		TargetObjectRegistry.NiPSysMeshUpdateModifier_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysInheritVelocityModifier")
	{
		Index = TargetObjectRegistry.BSPSysInheritVelocityModifier_Registry.Size();
		TargetObjectRegistry.BSPSysInheritVelocityModifier_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysHavokUpdateModifier")
	{
		Index = TargetObjectRegistry.BSPSysHavokUpdateModifier_Registry.Size();
		TargetObjectRegistry.BSPSysHavokUpdateModifier_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysRecycleBoundModifier")
	{
		Index = TargetObjectRegistry.BSPSysRecycleBoundModifier_Registry.Size();
		TargetObjectRegistry.BSPSysRecycleBoundModifier_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysSubTexModifier")
	{
		Index = TargetObjectRegistry.BSPSysSubTexModifier_Registry.Size();
		TargetObjectRegistry.BSPSysSubTexModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysPlanarCollider")
	{
		Index = TargetObjectRegistry.NiPSysPlanarCollider_Registry.Size();
		TargetObjectRegistry.NiPSysPlanarCollider_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysSphericalCollider")
	{
		Index = TargetObjectRegistry.NiPSysSphericalCollider_Registry.Size();
		TargetObjectRegistry.NiPSysSphericalCollider_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysPositionModifier")
	{
		Index = TargetObjectRegistry.NiPSysPositionModifier_Registry.Size();
		TargetObjectRegistry.NiPSysPositionModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysResetOnLoopCtlr")
	{
		Index = TargetObjectRegistry.NiPSysResetOnLoopCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysResetOnLoopCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysRotationModifier")
	{
		Index = TargetObjectRegistry.NiPSysRotationModifier_Registry.Size();
		TargetObjectRegistry.NiPSysRotationModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysSpawnModifier")
	{
		Index = TargetObjectRegistry.NiPSysSpawnModifier_Registry.Size();
		TargetObjectRegistry.NiPSysSpawnModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysSphereEmitter")
	{
		Index = TargetObjectRegistry.NiPSysSphereEmitter_Registry.Size();
		TargetObjectRegistry.NiPSysSphereEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysUpdateCtlr")
	{
		Index = TargetObjectRegistry.NiPSysUpdateCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysUpdateCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysFieldModifier")
	{
		Index = TargetObjectRegistry.NiPSysFieldModifier_Registry.Size();
		TargetObjectRegistry.NiPSysFieldModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysVortexFieldModifier")
	{
		Index = TargetObjectRegistry.NiPSysVortexFieldModifier_Registry.Size();
		TargetObjectRegistry.NiPSysVortexFieldModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysGravityFieldModifier")
	{
		Index = TargetObjectRegistry.NiPSysGravityFieldModifier_Registry.Size();
		TargetObjectRegistry.NiPSysGravityFieldModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysDragFieldModifier")
	{
		Index = TargetObjectRegistry.NiPSysDragFieldModifier_Registry.Size();
		TargetObjectRegistry.NiPSysDragFieldModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysTurbulenceFieldModifier")
	{
		Index = TargetObjectRegistry.NiPSysTurbulenceFieldModifier_Registry.Size();
		TargetObjectRegistry.NiPSysTurbulenceFieldModifier_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysLODModifier")
	{
		Index = TargetObjectRegistry.BSPSysLODModifier_Registry.Size();
		TargetObjectRegistry.BSPSysLODModifier_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysScaleModifier")
	{
		Index = TargetObjectRegistry.BSPSysScaleModifier_Registry.Size();
		TargetObjectRegistry.BSPSysScaleModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysFieldMagnitudeCtlr")
	{
		Index = TargetObjectRegistry.NiPSysFieldMagnitudeCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysFieldMagnitudeCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysFieldAttenuationCtlr")
	{
		Index = TargetObjectRegistry.NiPSysFieldAttenuationCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysFieldAttenuationCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysFieldMaxDistanceCtlr")
	{
		Index = TargetObjectRegistry.NiPSysFieldMaxDistanceCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysFieldMaxDistanceCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysAirFieldAirFrictionCtlr")
	{
		Index = TargetObjectRegistry.NiPSysAirFieldAirFrictionCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysAirFieldAirFrictionCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysAirFieldInheritVelocityCtlr")
	{
		Index = TargetObjectRegistry.NiPSysAirFieldInheritVelocityCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysAirFieldInheritVelocityCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysAirFieldSpreadCtlr")
	{
		Index = TargetObjectRegistry.NiPSysAirFieldSpreadCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysAirFieldSpreadCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysInitialRotSpeedCtlr")
	{
		Index = TargetObjectRegistry.NiPSysInitialRotSpeedCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysInitialRotSpeedCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysInitialRotSpeedVarCtlr")
	{
		Index = TargetObjectRegistry.NiPSysInitialRotSpeedVarCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysInitialRotSpeedVarCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysInitialRotAngleCtlr")
	{
		Index = TargetObjectRegistry.NiPSysInitialRotAngleCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysInitialRotAngleCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysInitialRotAngleVarCtlr")
	{
		Index = TargetObjectRegistry.NiPSysInitialRotAngleVarCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysInitialRotAngleVarCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitterPlanarAngleCtlr")
	{
		Index = TargetObjectRegistry.NiPSysEmitterPlanarAngleCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysEmitterPlanarAngleCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysEmitterPlanarAngleVarCtlr")
	{
		Index = TargetObjectRegistry.NiPSysEmitterPlanarAngleVarCtlr_Registry.Size();
		TargetObjectRegistry.NiPSysEmitterPlanarAngleVarCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysAirFieldModifier")
	{
		Index = TargetObjectRegistry.NiPSysAirFieldModifier_Registry.Size();
		TargetObjectRegistry.NiPSysAirFieldModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysTrailEmitter")
	{
		Index = TargetObjectRegistry.NiPSysTrailEmitter_Registry.Size();
		TargetObjectRegistry.NiPSysTrailEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiLightIntensityController")
	{
		Index = TargetObjectRegistry.NiLightIntensityController_Registry.Size();
		TargetObjectRegistry.NiLightIntensityController_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSysRadialFieldModifier")
	{
		Index = TargetObjectRegistry.NiPSysRadialFieldModifier_Registry.Size();
		TargetObjectRegistry.NiPSysRadialFieldModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiLODData")
	{
		Index = TargetObjectRegistry.NiLODData_Registry.Size();
		TargetObjectRegistry.NiLODData_Registry.AddData();
	}
	else if(TargetNodeType == "NiRangeLODData")
	{
		Index = TargetObjectRegistry.NiRangeLODData_Registry.Size();
		TargetObjectRegistry.NiRangeLODData_Registry.AddData();
	}
	else if(TargetNodeType == "NiScreenLODData")
	{
		Index = TargetObjectRegistry.NiScreenLODData_Registry.Size();
		TargetObjectRegistry.NiScreenLODData_Registry.AddData();
	}
	else if(TargetNodeType == "NiRotatingParticles")
	{
		Index = TargetObjectRegistry.NiRotatingParticles_Registry.Size();
		TargetObjectRegistry.NiRotatingParticles_Registry.AddData();
	}
	else if(TargetNodeType == "NiSequenceStreamHelper")
	{
		Index = TargetObjectRegistry.NiSequenceStreamHelper_Registry.Size();
		TargetObjectRegistry.NiSequenceStreamHelper_Registry.AddData();
	}
	else if(TargetNodeType == "NiShadeProperty")
	{
		Index = TargetObjectRegistry.NiShadeProperty_Registry.Size();
		TargetObjectRegistry.NiShadeProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiSkinData")
	{
		Index = TargetObjectRegistry.NiSkinData_Registry.Size();
		TargetObjectRegistry.NiSkinData_Registry.AddData();
	}
	else if(TargetNodeType == "NiSkinInstance")
	{
		Index = TargetObjectRegistry.NiSkinInstance_Registry.Size();
		TargetObjectRegistry.NiSkinInstance_Registry.AddData();
	}
	else if(TargetNodeType == "NiTriShapeSkinController")
	{
		Index = TargetObjectRegistry.NiTriShapeSkinController_Registry.Size();
		TargetObjectRegistry.NiTriShapeSkinController_Registry.AddData();
	}
	else if(TargetNodeType == "NiClodSkinInstance")
	{
		Index = TargetObjectRegistry.NiClodSkinInstance_Registry.Size();
		TargetObjectRegistry.NiClodSkinInstance_Registry.AddData();
	}
	else if(TargetNodeType == "NiSkinPartition")
	{
		Index = TargetObjectRegistry.NiSkinPartition_Registry.Size();
		TargetObjectRegistry.NiSkinPartition_Registry.AddData();
	}
	else if(TargetNodeType == "NiTexture")
	{
		Index = TargetObjectRegistry.NiTexture_Registry.Size();
		TargetObjectRegistry.NiTexture_Registry.AddData();
	}
	else if(TargetNodeType == "NiSourceTexture")
	{
		Index = TargetObjectRegistry.NiSourceTexture_Registry.Size();
		TargetObjectRegistry.NiSourceTexture_Registry.AddData();
	}
	else if(TargetNodeType == "NiSpecularProperty")
	{
		Index = TargetObjectRegistry.NiSpecularProperty_Registry.Size();
		TargetObjectRegistry.NiSpecularProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiSphericalCollider")
	{
		Index = TargetObjectRegistry.NiSphericalCollider_Registry.Size();
		TargetObjectRegistry.NiSphericalCollider_Registry.AddData();
	}
	else if(TargetNodeType == "NiSpotLight")
	{
		Index = TargetObjectRegistry.NiSpotLight_Registry.Size();
		TargetObjectRegistry.NiSpotLight_Registry.AddData();
	}
	else if(TargetNodeType == "NiStencilProperty")
	{
		Index = TargetObjectRegistry.NiStencilProperty_Registry.Size();
		TargetObjectRegistry.NiStencilProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiStringExtraData")
	{
		Index = TargetObjectRegistry.NiStringExtraData_Registry.Size();
		TargetObjectRegistry.NiStringExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiStringPalette")
	{
		Index = TargetObjectRegistry.NiStringPalette_Registry.Size();
		TargetObjectRegistry.NiStringPalette_Registry.AddData();
	}
	else if(TargetNodeType == "NiStringsExtraData")
	{
		Index = TargetObjectRegistry.NiStringsExtraData_Registry.Size();
		TargetObjectRegistry.NiStringsExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiTextKeyExtraData")
	{
		Index = TargetObjectRegistry.NiTextKeyExtraData_Registry.Size();
		TargetObjectRegistry.NiTextKeyExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiTextureEffect")
	{
		Index = TargetObjectRegistry.NiTextureEffect_Registry.Size();
		TargetObjectRegistry.NiTextureEffect_Registry.AddData();
	}
	else if(TargetNodeType == "NiTextureModeProperty")
	{
		Index = TargetObjectRegistry.NiTextureModeProperty_Registry.Size();
		TargetObjectRegistry.NiTextureModeProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiImage")
	{
		Index = TargetObjectRegistry.NiImage_Registry.Size();
		TargetObjectRegistry.NiImage_Registry.AddData();
	}
	else if(TargetNodeType == "NiTextureProperty")
	{
		Index = TargetObjectRegistry.NiTextureProperty_Registry.Size();
		TargetObjectRegistry.NiTextureProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiMultiTextureProperty")
	{
		Index = TargetObjectRegistry.NiMultiTextureProperty_Registry.Size();
		TargetObjectRegistry.NiMultiTextureProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiTexturingProperty")
	{
		Index = TargetObjectRegistry.NiTexturingProperty_Registry.Size();
		TargetObjectRegistry.NiTexturingProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiTransformData")
	{
		Index = TargetObjectRegistry.NiTransformData_Registry.Size();
		TargetObjectRegistry.NiTransformData_Registry.AddData();
	}
	else if(TargetNodeType == "NiTriShape")
	{
		Index = TargetObjectRegistry.NiTriShape_Registry.Size();
		TargetObjectRegistry.NiTriShape_Registry.AddData();
	}
	else if(TargetNodeType == "NiTriShapeData")
	{
		Index = TargetObjectRegistry.NiTriShapeData_Registry.Size();
		TargetObjectRegistry.NiTriShapeData_Registry.AddData();
	}
	else if(TargetNodeType == "NiTriStrips")
	{
		Index = TargetObjectRegistry.NiTriStrips_Registry.Size();
		TargetObjectRegistry.NiTriStrips_Registry.AddData();
	}
	else if(TargetNodeType == "NiTriStripsData")
	{
		Index = TargetObjectRegistry.NiTriStripsData_Registry.Size();
		TargetObjectRegistry.NiTriStripsData_Registry.AddData();
	}
	else if(TargetNodeType == "NiEnvMappedTriShape")
	{
		Index = TargetObjectRegistry.NiEnvMappedTriShape_Registry.Size();
		TargetObjectRegistry.NiEnvMappedTriShape_Registry.AddData();
	}
	else if(TargetNodeType == "NiEnvMappedTriShapeData")
	{
		Index = TargetObjectRegistry.NiEnvMappedTriShapeData_Registry.Size();
		TargetObjectRegistry.NiEnvMappedTriShapeData_Registry.AddData();
	}
	else if(TargetNodeType == "NiBezierTriangle4")
	{
		Index = TargetObjectRegistry.NiBezierTriangle4_Registry.Size();
		TargetObjectRegistry.NiBezierTriangle4_Registry.AddData();
	}
	else if(TargetNodeType == "NiBezierMesh")
	{
		Index = TargetObjectRegistry.NiBezierMesh_Registry.Size();
		TargetObjectRegistry.NiBezierMesh_Registry.AddData();
	}
	else if(TargetNodeType == "NiClod")
	{
		Index = TargetObjectRegistry.NiClod_Registry.Size();
		TargetObjectRegistry.NiClod_Registry.AddData();
	}
	else if(TargetNodeType == "NiClodData")
	{
		Index = TargetObjectRegistry.NiClodData_Registry.Size();
		TargetObjectRegistry.NiClodData_Registry.AddData();
	}
	else if(TargetNodeType == "NiUVController")
	{
		Index = TargetObjectRegistry.NiUVController_Registry.Size();
		TargetObjectRegistry.NiUVController_Registry.AddData();
	}
	else if(TargetNodeType == "NiUVData")
	{
		Index = TargetObjectRegistry.NiUVData_Registry.Size();
		TargetObjectRegistry.NiUVData_Registry.AddData();
	}
	else if(TargetNodeType == "NiVectorExtraData")
	{
		Index = TargetObjectRegistry.NiVectorExtraData_Registry.Size();
		TargetObjectRegistry.NiVectorExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiVertexColorProperty")
	{
		Index = TargetObjectRegistry.NiVertexColorProperty_Registry.Size();
		TargetObjectRegistry.NiVertexColorProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiVertWeightsExtraData")
	{
		Index = TargetObjectRegistry.NiVertWeightsExtraData_Registry.Size();
		TargetObjectRegistry.NiVertWeightsExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiVisData")
	{
		Index = TargetObjectRegistry.NiVisData_Registry.Size();
		TargetObjectRegistry.NiVisData_Registry.AddData();
	}
	else if(TargetNodeType == "NiWireframeProperty")
	{
		Index = TargetObjectRegistry.NiWireframeProperty_Registry.Size();
		TargetObjectRegistry.NiWireframeProperty_Registry.AddData();
	}
	else if(TargetNodeType == "NiZBufferProperty")
	{
		Index = TargetObjectRegistry.NiZBufferProperty_Registry.Size();
		TargetObjectRegistry.NiZBufferProperty_Registry.AddData();
	}
	else if(TargetNodeType == "RootCollisionNode")
	{
		Index = TargetObjectRegistry.RootCollisionNode_Registry.Size();
		TargetObjectRegistry.RootCollisionNode_Registry.AddData();
	}
	else if(TargetNodeType == "NiRawImageData")
	{
		Index = TargetObjectRegistry.NiRawImageData_Registry.Size();
		TargetObjectRegistry.NiRawImageData_Registry.AddData();
	}
	else if(TargetNodeType == "NiSortAdjustNode")
	{
		Index = TargetObjectRegistry.NiSortAdjustNode_Registry.Size();
		TargetObjectRegistry.NiSortAdjustNode_Registry.AddData();
	}
	else if(TargetNodeType == "NiSourceCubeMap")
	{
		Index = TargetObjectRegistry.NiSourceCubeMap_Registry.Size();
		TargetObjectRegistry.NiSourceCubeMap_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXProp")
	{
		Index = TargetObjectRegistry.NiPhysXProp_Registry.Size();
		TargetObjectRegistry.NiPhysXProp_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXPropDesc")
	{
		Index = TargetObjectRegistry.NiPhysXPropDesc_Registry.Size();
		TargetObjectRegistry.NiPhysXPropDesc_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXActorDesc")
	{
		Index = TargetObjectRegistry.NiPhysXActorDesc_Registry.Size();
		TargetObjectRegistry.NiPhysXActorDesc_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXBodyDesc")
	{
		Index = TargetObjectRegistry.NiPhysXBodyDesc_Registry.Size();
		TargetObjectRegistry.NiPhysXBodyDesc_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXD6JointDesc")
	{
		Index = TargetObjectRegistry.NiPhysXD6JointDesc_Registry.Size();
		TargetObjectRegistry.NiPhysXD6JointDesc_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXShapeDesc")
	{
		Index = TargetObjectRegistry.NiPhysXShapeDesc_Registry.Size();
		TargetObjectRegistry.NiPhysXShapeDesc_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXMeshDesc")
	{
		Index = TargetObjectRegistry.NiPhysXMeshDesc_Registry.Size();
		TargetObjectRegistry.NiPhysXMeshDesc_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXMaterialDesc")
	{
		Index = TargetObjectRegistry.NiPhysXMaterialDesc_Registry.Size();
		TargetObjectRegistry.NiPhysXMaterialDesc_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXKinematicSrc")
	{
		Index = TargetObjectRegistry.NiPhysXKinematicSrc_Registry.Size();
		TargetObjectRegistry.NiPhysXKinematicSrc_Registry.AddData();
	}
	else if(TargetNodeType == "NiPhysXTransformDest")
	{
		Index = TargetObjectRegistry.NiPhysXTransformDest_Registry.Size();
		TargetObjectRegistry.NiPhysXTransformDest_Registry.AddData();
	}
	else if(TargetNodeType == "NiArkAnimationExtraData")
	{
		Index = TargetObjectRegistry.NiArkAnimationExtraData_Registry.Size();
		TargetObjectRegistry.NiArkAnimationExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiArkImporterExtraData")
	{
		Index = TargetObjectRegistry.NiArkImporterExtraData_Registry.Size();
		TargetObjectRegistry.NiArkImporterExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiArkTextureExtraData")
	{
		Index = TargetObjectRegistry.NiArkTextureExtraData_Registry.Size();
		TargetObjectRegistry.NiArkTextureExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiArkViewportInfoExtraData")
	{
		Index = TargetObjectRegistry.NiArkViewportInfoExtraData_Registry.Size();
		TargetObjectRegistry.NiArkViewportInfoExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiArkShaderExtraData")
	{
		Index = TargetObjectRegistry.NiArkShaderExtraData_Registry.Size();
		TargetObjectRegistry.NiArkShaderExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "NiLines")
	{
		Index = TargetObjectRegistry.NiLines_Registry.Size();
		TargetObjectRegistry.NiLines_Registry.AddData();
	}
	else if(TargetNodeType == "NiLinesData")
	{
		Index = TargetObjectRegistry.NiLinesData_Registry.Size();
		TargetObjectRegistry.NiLinesData_Registry.AddData();
	}
	else if(TargetNodeType == "NiScreenElementsData")
	{
		Index = TargetObjectRegistry.NiScreenElementsData_Registry.Size();
		TargetObjectRegistry.NiScreenElementsData_Registry.AddData();
	}
	else if(TargetNodeType == "NiScreenElements")
	{
		Index = TargetObjectRegistry.NiScreenElements_Registry.Size();
		TargetObjectRegistry.NiScreenElements_Registry.AddData();
	}
	else if(TargetNodeType == "NiRoomGroup")
	{
		Index = TargetObjectRegistry.NiRoomGroup_Registry.Size();
		TargetObjectRegistry.NiRoomGroup_Registry.AddData();
	}
	else if(TargetNodeType == "NiRoom")
	{
		Index = TargetObjectRegistry.NiRoom_Registry.Size();
		TargetObjectRegistry.NiRoom_Registry.AddData();
	}
	else if(TargetNodeType == "NiPortal")
	{
		Index = TargetObjectRegistry.NiPortal_Registry.Size();
		TargetObjectRegistry.NiPortal_Registry.AddData();
	}
	else if(TargetNodeType == "BSFadeNode")
	{
		Index = TargetObjectRegistry.BSFadeNode_Registry.Size();
		TargetObjectRegistry.BSFadeNode_Registry.AddData();
	}
	else if(TargetNodeType == "BSShaderProperty")
	{
		Index = TargetObjectRegistry.BSShaderProperty_Registry.Size();
		TargetObjectRegistry.BSShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSShaderLightingProperty")
	{
		Index = TargetObjectRegistry.BSShaderLightingProperty_Registry.Size();
		TargetObjectRegistry.BSShaderLightingProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSShaderNoLightingProperty")
	{
		Index = TargetObjectRegistry.BSShaderNoLightingProperty_Registry.Size();
		TargetObjectRegistry.BSShaderNoLightingProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSShaderPPLightingProperty")
	{
		Index = TargetObjectRegistry.BSShaderPPLightingProperty_Registry.Size();
		TargetObjectRegistry.BSShaderPPLightingProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSEffectShaderPropertyFloatController")
	{
		Index = TargetObjectRegistry.BSEffectShaderPropertyFloatController_Registry.Size();
		TargetObjectRegistry.BSEffectShaderPropertyFloatController_Registry.AddData();
	}
	else if(TargetNodeType == "BSEffectShaderPropertyColorController")
	{
		Index = TargetObjectRegistry.BSEffectShaderPropertyColorController_Registry.Size();
		TargetObjectRegistry.BSEffectShaderPropertyColorController_Registry.AddData();
	}
	else if(TargetNodeType == "BSLightingShaderPropertyFloatController")
	{
		Index = TargetObjectRegistry.BSLightingShaderPropertyFloatController_Registry.Size();
		TargetObjectRegistry.BSLightingShaderPropertyFloatController_Registry.AddData();
	}
	else if(TargetNodeType == "BSLightingShaderPropertyColorController")
	{
		Index = TargetObjectRegistry.BSLightingShaderPropertyColorController_Registry.Size();
		TargetObjectRegistry.BSLightingShaderPropertyColorController_Registry.AddData();
	}
	else if(TargetNodeType == "BSNiAlphaPropertyTestRefController")
	{
		Index = TargetObjectRegistry.BSNiAlphaPropertyTestRefController_Registry.Size();
		TargetObjectRegistry.BSNiAlphaPropertyTestRefController_Registry.AddData();
	}
	else if(TargetNodeType == "BSProceduralLightningController")
	{
		Index = TargetObjectRegistry.BSProceduralLightningController_Registry.Size();
		TargetObjectRegistry.BSProceduralLightningController_Registry.AddData();
	}
	else if(TargetNodeType == "BSShaderTextureSet")
	{
		Index = TargetObjectRegistry.BSShaderTextureSet_Registry.Size();
		TargetObjectRegistry.BSShaderTextureSet_Registry.AddData();
	}
	else if(TargetNodeType == "WaterShaderProperty")
	{
		Index = TargetObjectRegistry.WaterShaderProperty_Registry.Size();
		TargetObjectRegistry.WaterShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "SkyShaderProperty")
	{
		Index = TargetObjectRegistry.SkyShaderProperty_Registry.Size();
		TargetObjectRegistry.SkyShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "TileShaderProperty")
	{
		Index = TargetObjectRegistry.TileShaderProperty_Registry.Size();
		TargetObjectRegistry.TileShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "DistantLODShaderProperty")
	{
		Index = TargetObjectRegistry.DistantLODShaderProperty_Registry.Size();
		TargetObjectRegistry.DistantLODShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSDistantTreeShaderProperty")
	{
		Index = TargetObjectRegistry.BSDistantTreeShaderProperty_Registry.Size();
		TargetObjectRegistry.BSDistantTreeShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "TallGrassShaderProperty")
	{
		Index = TargetObjectRegistry.TallGrassShaderProperty_Registry.Size();
		TargetObjectRegistry.TallGrassShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "VolumetricFogShaderProperty")
	{
		Index = TargetObjectRegistry.VolumetricFogShaderProperty_Registry.Size();
		TargetObjectRegistry.VolumetricFogShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "HairShaderProperty")
	{
		Index = TargetObjectRegistry.HairShaderProperty_Registry.Size();
		TargetObjectRegistry.HairShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "Lighting30ShaderProperty")
	{
		Index = TargetObjectRegistry.Lighting30ShaderProperty_Registry.Size();
		TargetObjectRegistry.Lighting30ShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSLightingShaderProperty")
	{
		Index = TargetObjectRegistry.BSLightingShaderProperty_Registry.Size();
		TargetObjectRegistry.BSLightingShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSEffectShaderProperty")
	{
		Index = TargetObjectRegistry.BSEffectShaderProperty_Registry.Size();
		TargetObjectRegistry.BSEffectShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSWaterShaderProperty")
	{
		Index = TargetObjectRegistry.BSWaterShaderProperty_Registry.Size();
		TargetObjectRegistry.BSWaterShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSSkyShaderProperty")
	{
		Index = TargetObjectRegistry.BSSkyShaderProperty_Registry.Size();
		TargetObjectRegistry.BSSkyShaderProperty_Registry.AddData();
	}
	else if(TargetNodeType == "BSDismemberSkinInstance")
	{
		Index = TargetObjectRegistry.BSDismemberSkinInstance_Registry.Size();
		TargetObjectRegistry.BSDismemberSkinInstance_Registry.AddData();
	}
	else if(TargetNodeType == "BSDecalPlacementVectorExtraData")
	{
		Index = TargetObjectRegistry.BSDecalPlacementVectorExtraData_Registry.Size();
		TargetObjectRegistry.BSDecalPlacementVectorExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysSimpleColorModifier")
	{
		Index = TargetObjectRegistry.BSPSysSimpleColorModifier_Registry.Size();
		TargetObjectRegistry.BSPSysSimpleColorModifier_Registry.AddData();
	}
	else if(TargetNodeType == "BSValueNode")
	{
		Index = TargetObjectRegistry.BSValueNode_Registry.Size();
		TargetObjectRegistry.BSValueNode_Registry.AddData();
	}
	else if(TargetNodeType == "BSStripParticleSystem")
	{
		Index = TargetObjectRegistry.BSStripParticleSystem_Registry.Size();
		TargetObjectRegistry.BSStripParticleSystem_Registry.AddData();
	}
	else if(TargetNodeType == "BSStripPSysData")
	{
		Index = TargetObjectRegistry.BSStripPSysData_Registry.Size();
		TargetObjectRegistry.BSStripPSysData_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysStripUpdateModifier")
	{
		Index = TargetObjectRegistry.BSPSysStripUpdateModifier_Registry.Size();
		TargetObjectRegistry.BSPSysStripUpdateModifier_Registry.AddData();
	}
	else if(TargetNodeType == "BSMaterialEmittanceMultController")
	{
		Index = TargetObjectRegistry.BSMaterialEmittanceMultController_Registry.Size();
		TargetObjectRegistry.BSMaterialEmittanceMultController_Registry.AddData();
	}
	else if(TargetNodeType == "BSMasterParticleSystem")
	{
		Index = TargetObjectRegistry.BSMasterParticleSystem_Registry.Size();
		TargetObjectRegistry.BSMasterParticleSystem_Registry.AddData();
	}
	else if(TargetNodeType == "BSPSysMultiTargetEmitterCtlr")
	{
		Index = TargetObjectRegistry.BSPSysMultiTargetEmitterCtlr_Registry.Size();
		TargetObjectRegistry.BSPSysMultiTargetEmitterCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "BSRefractionStrengthController")
	{
		Index = TargetObjectRegistry.BSRefractionStrengthController_Registry.Size();
		TargetObjectRegistry.BSRefractionStrengthController_Registry.AddData();
	}
	else if(TargetNodeType == "BSOrderedNode")
	{
		Index = TargetObjectRegistry.BSOrderedNode_Registry.Size();
		TargetObjectRegistry.BSOrderedNode_Registry.AddData();
	}
	else if(TargetNodeType == "BSBlastNode")
	{
		Index = TargetObjectRegistry.BSBlastNode_Registry.Size();
		TargetObjectRegistry.BSBlastNode_Registry.AddData();
	}
	else if(TargetNodeType == "BSDamageStage")
	{
		Index = TargetObjectRegistry.BSDamageStage_Registry.Size();
		TargetObjectRegistry.BSDamageStage_Registry.AddData();
	}
	else if(TargetNodeType == "BSRefractionFirePeriodController")
	{
		Index = TargetObjectRegistry.BSRefractionFirePeriodController_Registry.Size();
		TargetObjectRegistry.BSRefractionFirePeriodController_Registry.AddData();
	}
	else if(TargetNodeType == "bhkConvexListShape")
	{
		Index = TargetObjectRegistry.bhkConvexListShape_Registry.Size();
		TargetObjectRegistry.bhkConvexListShape_Registry.AddData();
	}
	else if(TargetNodeType == "BSTreadTransfInterpolator")
	{
		Index = TargetObjectRegistry.BSTreadTransfInterpolator_Registry.Size();
		TargetObjectRegistry.BSTreadTransfInterpolator_Registry.AddData();
	}
	else if(TargetNodeType == "BSAnimNotes")
	{
		Index = TargetObjectRegistry.BSAnimNotes_Registry.Size();
		TargetObjectRegistry.BSAnimNotes_Registry.AddData();
	}
	else if(TargetNodeType == "bhkLiquidAction")
	{
		Index = TargetObjectRegistry.bhkLiquidAction_Registry.Size();
		TargetObjectRegistry.bhkLiquidAction_Registry.AddData();
	}
	else if(TargetNodeType == "BSMultiBoundNode")
	{
		Index = TargetObjectRegistry.BSMultiBoundNode_Registry.Size();
		TargetObjectRegistry.BSMultiBoundNode_Registry.AddData();
	}
	else if(TargetNodeType == "BSMultiBound")
	{
		Index = TargetObjectRegistry.BSMultiBound_Registry.Size();
		TargetObjectRegistry.BSMultiBound_Registry.AddData();
	}
	else if(TargetNodeType == "BSMultiBoundData")
	{
		Index = TargetObjectRegistry.BSMultiBoundData_Registry.Size();
		TargetObjectRegistry.BSMultiBoundData_Registry.AddData();
	}
	else if(TargetNodeType == "BSMultiBoundOBB")
	{
		Index = TargetObjectRegistry.BSMultiBoundOBB_Registry.Size();
		TargetObjectRegistry.BSMultiBoundOBB_Registry.AddData();
	}
	else if(TargetNodeType == "BSMultiBoundSphere")
	{
		Index = TargetObjectRegistry.BSMultiBoundSphere_Registry.Size();
		TargetObjectRegistry.BSMultiBoundSphere_Registry.AddData();
	}
	else if(TargetNodeType == "BSSegmentedTriShape")
	{
		Index = TargetObjectRegistry.BSSegmentedTriShape_Registry.Size();
		TargetObjectRegistry.BSSegmentedTriShape_Registry.AddData();
	}
	else if(TargetNodeType == "BSMultiBoundAABB")
	{
		Index = TargetObjectRegistry.BSMultiBoundAABB_Registry.Size();
		TargetObjectRegistry.BSMultiBoundAABB_Registry.AddData();
	}
	else if(TargetNodeType == "NiAdditionalGeometryData")
	{
		Index = TargetObjectRegistry.NiAdditionalGeometryData_Registry.Size();
		TargetObjectRegistry.NiAdditionalGeometryData_Registry.AddData();
	}
	else if(TargetNodeType == "BSPackedAdditionalGeometryData")
	{
		Index = TargetObjectRegistry.BSPackedAdditionalGeometryData_Registry.Size();
		TargetObjectRegistry.BSPackedAdditionalGeometryData_Registry.AddData();
	}
	else if(TargetNodeType == "BSWArray")
	{
		Index = TargetObjectRegistry.BSWArray_Registry.Size();
		TargetObjectRegistry.BSWArray_Registry.AddData();
	}
	else if(TargetNodeType == "bhkAabbPhantom")
	{
		Index = TargetObjectRegistry.bhkAabbPhantom_Registry.Size();
		TargetObjectRegistry.bhkAabbPhantom_Registry.AddData();
	}
	else if(TargetNodeType == "BSFrustumFOVController")
	{
		Index = TargetObjectRegistry.BSFrustumFOVController_Registry.Size();
		TargetObjectRegistry.BSFrustumFOVController_Registry.AddData();
	}
	else if(TargetNodeType == "BSDebrisNode")
	{
		Index = TargetObjectRegistry.BSDebrisNode_Registry.Size();
		TargetObjectRegistry.BSDebrisNode_Registry.AddData();
	}
	else if(TargetNodeType == "bhkBreakableConstraint")
	{
		Index = TargetObjectRegistry.bhkBreakableConstraint_Registry.Size();
		TargetObjectRegistry.bhkBreakableConstraint_Registry.AddData();
	}
	else if(TargetNodeType == "bhkOrientHingedBodyAction")
	{
		Index = TargetObjectRegistry.bhkOrientHingedBodyAction_Registry.Size();
		TargetObjectRegistry.bhkOrientHingedBodyAction_Registry.AddData();
	}
	else if(TargetNodeType == "NiDataStream")
	{
		Index = TargetObjectRegistry.NiDataStream_Registry.Size();
		TargetObjectRegistry.NiDataStream_Registry.AddData();
	}
	else if(TargetNodeType == "NiRenderObject")
	{
		Index = TargetObjectRegistry.NiRenderObject_Registry.Size();
		TargetObjectRegistry.NiRenderObject_Registry.AddData();
	}
	else if(TargetNodeType == "NiMeshModifier")
	{
		Index = TargetObjectRegistry.NiMeshModifier_Registry.Size();
		TargetObjectRegistry.NiMeshModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiMesh")
	{
		Index = TargetObjectRegistry.NiMesh_Registry.Size();
		TargetObjectRegistry.NiMesh_Registry.AddData();
	}
	else if(TargetNodeType == "NiMorphWeightsController")
	{
		Index = TargetObjectRegistry.NiMorphWeightsController_Registry.Size();
		TargetObjectRegistry.NiMorphWeightsController_Registry.AddData();
	}
	else if(TargetNodeType == "NiMorphMeshModifier")
	{
		Index = TargetObjectRegistry.NiMorphMeshModifier_Registry.Size();
		TargetObjectRegistry.NiMorphMeshModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiSkinningMeshModifier")
	{
		Index = TargetObjectRegistry.NiSkinningMeshModifier_Registry.Size();
		TargetObjectRegistry.NiSkinningMeshModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiInstancingMeshModifier")
	{
		Index = TargetObjectRegistry.NiInstancingMeshModifier_Registry.Size();
		TargetObjectRegistry.NiInstancingMeshModifier_Registry.AddData();
	}
	else if(TargetNodeType == "NiSkinningLODController")
	{
		Index = TargetObjectRegistry.NiSkinningLODController_Registry.Size();
		TargetObjectRegistry.NiSkinningLODController_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSParticleSystem")
	{
		Index = TargetObjectRegistry.NiPSParticleSystem_Registry.Size();
		TargetObjectRegistry.NiPSParticleSystem_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSMeshParticleSystem")
	{
		Index = TargetObjectRegistry.NiPSMeshParticleSystem_Registry.Size();
		TargetObjectRegistry.NiPSMeshParticleSystem_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitParticlesCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitParticlesCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitParticlesCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSForceActiveCtlr")
	{
		Index = TargetObjectRegistry.NiPSForceActiveCtlr_Registry.Size();
		TargetObjectRegistry.NiPSForceActiveCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSimulator")
	{
		Index = TargetObjectRegistry.NiPSSimulator_Registry.Size();
		TargetObjectRegistry.NiPSSimulator_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSimulatorStep")
	{
		Index = TargetObjectRegistry.NiPSSimulatorStep_Registry.Size();
		TargetObjectRegistry.NiPSSimulatorStep_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSimulatorGeneralStep")
	{
		Index = TargetObjectRegistry.NiPSSimulatorGeneralStep_Registry.Size();
		TargetObjectRegistry.NiPSSimulatorGeneralStep_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSimulatorForcesStep")
	{
		Index = TargetObjectRegistry.NiPSSimulatorForcesStep_Registry.Size();
		TargetObjectRegistry.NiPSSimulatorForcesStep_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSimulatorCollidersStep")
	{
		Index = TargetObjectRegistry.NiPSSimulatorCollidersStep_Registry.Size();
		TargetObjectRegistry.NiPSSimulatorCollidersStep_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSimulatorMeshAlignStep")
	{
		Index = TargetObjectRegistry.NiPSSimulatorMeshAlignStep_Registry.Size();
		TargetObjectRegistry.NiPSSimulatorMeshAlignStep_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSimulatorFinalStep")
	{
		Index = TargetObjectRegistry.NiPSSimulatorFinalStep_Registry.Size();
		TargetObjectRegistry.NiPSSimulatorFinalStep_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSFacingQuadGenerator")
	{
		Index = TargetObjectRegistry.NiPSFacingQuadGenerator_Registry.Size();
		TargetObjectRegistry.NiPSFacingQuadGenerator_Registry.AddData();
	}
	else if(TargetNodeType == "NiShadowGenerator")
	{
		Index = TargetObjectRegistry.NiShadowGenerator_Registry.Size();
		TargetObjectRegistry.NiShadowGenerator_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSBoundUpdater")
	{
		Index = TargetObjectRegistry.NiPSBoundUpdater_Registry.Size();
		TargetObjectRegistry.NiPSBoundUpdater_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSDragForce")
	{
		Index = TargetObjectRegistry.NiPSDragForce_Registry.Size();
		TargetObjectRegistry.NiPSDragForce_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSGravityForce")
	{
		Index = TargetObjectRegistry.NiPSGravityForce_Registry.Size();
		TargetObjectRegistry.NiPSGravityForce_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSBoxEmitter")
	{
		Index = TargetObjectRegistry.NiPSBoxEmitter_Registry.Size();
		TargetObjectRegistry.NiPSBoxEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSMeshEmitter")
	{
		Index = TargetObjectRegistry.NiPSMeshEmitter_Registry.Size();
		TargetObjectRegistry.NiPSMeshEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSGravityStrengthCtlr")
	{
		Index = TargetObjectRegistry.NiPSGravityStrengthCtlr_Registry.Size();
		TargetObjectRegistry.NiPSGravityStrengthCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSPlanarCollider")
	{
		Index = TargetObjectRegistry.NiPSPlanarCollider_Registry.Size();
		TargetObjectRegistry.NiPSPlanarCollider_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterSpeedCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterSpeedCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterSpeedCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterRadiusCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterRadiusCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterRadiusCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSResetOnLoopCtlr")
	{
		Index = TargetObjectRegistry.NiPSResetOnLoopCtlr_Registry.Size();
		TargetObjectRegistry.NiPSResetOnLoopCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSphereEmitter")
	{
		Index = TargetObjectRegistry.NiPSSphereEmitter_Registry.Size();
		TargetObjectRegistry.NiPSSphereEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSCylinderEmitter")
	{
		Index = TargetObjectRegistry.NiPSCylinderEmitter_Registry.Size();
		TargetObjectRegistry.NiPSCylinderEmitter_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterDeclinationCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterDeclinationCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterDeclinationCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterDeclinationVarCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterDeclinationVarCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterDeclinationVarCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterPlanarAngleCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterPlanarAngleCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterPlanarAngleCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterPlanarAngleVarCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterPlanarAngleVarCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterPlanarAngleVarCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterRotAngleCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterRotAngleCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterRotAngleCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterRotAngleVarCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterRotAngleVarCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterRotAngleVarCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterRotSpeedCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterRotSpeedCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterRotSpeedCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterRotSpeedVarCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterRotSpeedVarCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterRotSpeedVarCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSEmitterLifeSpanCtlr")
	{
		Index = TargetObjectRegistry.NiPSEmitterLifeSpanCtlr_Registry.Size();
		TargetObjectRegistry.NiPSEmitterLifeSpanCtlr_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSBombForce")
	{
		Index = TargetObjectRegistry.NiPSBombForce_Registry.Size();
		TargetObjectRegistry.NiPSBombForce_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSphericalCollider")
	{
		Index = TargetObjectRegistry.NiPSSphericalCollider_Registry.Size();
		TargetObjectRegistry.NiPSSphericalCollider_Registry.AddData();
	}
	else if(TargetNodeType == "NiPSSpawner")
	{
		Index = TargetObjectRegistry.NiPSSpawner_Registry.Size();
		TargetObjectRegistry.NiPSSpawner_Registry.AddData();
	}
	else if(TargetNodeType == "NiSequenceData")
	{
		Index = TargetObjectRegistry.NiSequenceData_Registry.Size();
		TargetObjectRegistry.NiSequenceData_Registry.AddData();
	}
	else if(TargetNodeType == "NiTransformEvaluator")
	{
		Index = TargetObjectRegistry.NiTransformEvaluator_Registry.Size();
		TargetObjectRegistry.NiTransformEvaluator_Registry.AddData();
	}
	else if(TargetNodeType == "NiBSplineCompTransformEvaluator")
	{
		Index = TargetObjectRegistry.NiBSplineCompTransformEvaluator_Registry.Size();
		TargetObjectRegistry.NiBSplineCompTransformEvaluator_Registry.AddData();
	}
	else if(TargetNodeType == "NiMeshHWInstance")
	{
		Index = TargetObjectRegistry.NiMeshHWInstance_Registry.Size();
		TargetObjectRegistry.NiMeshHWInstance_Registry.AddData();
	}
	else if(TargetNodeType == "NiFurSpringController")
	{
		Index = TargetObjectRegistry.NiFurSpringController_Registry.Size();
		TargetObjectRegistry.NiFurSpringController_Registry.AddData();
	}
	else if(TargetNodeType == "CStreamableAssetData")
	{
		Index = TargetObjectRegistry.CStreamableAssetData_Registry.Size();
		TargetObjectRegistry.CStreamableAssetData_Registry.AddData();
	}
	else if(TargetNodeType == "bhkCompressedMeshShape")
	{
		Index = TargetObjectRegistry.bhkCompressedMeshShape_Registry.Size();
		TargetObjectRegistry.bhkCompressedMeshShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkCompressedMeshShapeData")
	{
		Index = TargetObjectRegistry.bhkCompressedMeshShapeData_Registry.Size();
		TargetObjectRegistry.bhkCompressedMeshShapeData_Registry.AddData();
	}
	else if(TargetNodeType == "BSInvMarker")
	{
		Index = TargetObjectRegistry.BSInvMarker_Registry.Size();
		TargetObjectRegistry.BSInvMarker_Registry.AddData();
	}
	else if(TargetNodeType == "BSBoneLODExtraData")
	{
		Index = TargetObjectRegistry.BSBoneLODExtraData_Registry.Size();
		TargetObjectRegistry.BSBoneLODExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "BSBehaviorGraphExtraData")
	{
		Index = TargetObjectRegistry.BSBehaviorGraphExtraData_Registry.Size();
		TargetObjectRegistry.BSBehaviorGraphExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "BSLagBoneController")
	{
		Index = TargetObjectRegistry.BSLagBoneController_Registry.Size();
		TargetObjectRegistry.BSLagBoneController_Registry.AddData();
	}
	else if(TargetNodeType == "BSLODTriShape")
	{
		Index = TargetObjectRegistry.BSLODTriShape_Registry.Size();
		TargetObjectRegistry.BSLODTriShape_Registry.AddData();
	}
	else if(TargetNodeType == "BSFurnitureMarkerNode")
	{
		Index = TargetObjectRegistry.BSFurnitureMarkerNode_Registry.Size();
		TargetObjectRegistry.BSFurnitureMarkerNode_Registry.AddData();
	}
	else if(TargetNodeType == "BSLeafAnimNode")
	{
		Index = TargetObjectRegistry.BSLeafAnimNode_Registry.Size();
		TargetObjectRegistry.BSLeafAnimNode_Registry.AddData();
	}
	else if(TargetNodeType == "BSTreeNode")
	{
		Index = TargetObjectRegistry.BSTreeNode_Registry.Size();
		TargetObjectRegistry.BSTreeNode_Registry.AddData();
	}
	else if(TargetNodeType == "NiLightRadiusController")
	{
		Index = TargetObjectRegistry.NiLightRadiusController_Registry.Size();
		TargetObjectRegistry.NiLightRadiusController_Registry.AddData();
	}
	else if(TargetNodeType == "BSShape")
	{
		Index = TargetObjectRegistry.BSShape_Registry.Size();
		TargetObjectRegistry.BSShape_Registry.AddData();
	}
	else if(TargetNodeType == "BSTriShape")
	{
		Index = TargetObjectRegistry.BSTriShape_Registry.Size();
		TargetObjectRegistry.BSTriShape_Registry.AddData();
	}
	else if(TargetNodeType == "BSSubIndexTriShape")
	{
		Index = TargetObjectRegistry.BSSubIndexTriShape_Registry.Size();
		TargetObjectRegistry.BSSubIndexTriShape_Registry.AddData();
	}
	else if(TargetNodeType == "BSMeshLODTriShape")
	{
		Index = TargetObjectRegistry.BSMeshLODTriShape_Registry.Size();
		TargetObjectRegistry.BSMeshLODTriShape_Registry.AddData();
	}
	else if(TargetNodeType == "bhkNPCollisionObject")
	{
		Index = TargetObjectRegistry.bhkNPCollisionObject_Registry.Size();
		TargetObjectRegistry.bhkNPCollisionObject_Registry.AddData();
	}
	else if(TargetNodeType == "BSExtraData")
	{
		Index = TargetObjectRegistry.BSExtraData_Registry.Size();
		TargetObjectRegistry.BSExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "bhkPhysicsSystem")
	{
		Index = TargetObjectRegistry.bhkPhysicsSystem_Registry.Size();
		TargetObjectRegistry.bhkPhysicsSystem_Registry.AddData();
	}
	else if(TargetNodeType == "bhkRagdollSystem")
	{
		Index = TargetObjectRegistry.bhkRagdollSystem_Registry.Size();
		TargetObjectRegistry.bhkRagdollSystem_Registry.AddData();
	}
	else if(TargetNodeType == "BSClothExtraData")
	{
		Index = TargetObjectRegistry.BSClothExtraData_Registry.Size();
		TargetObjectRegistry.BSClothExtraData_Registry.AddData();
	}
	else if(TargetNodeType == "BSSkin__Instance")
	{
		Index = TargetObjectRegistry.BSSkin__Instance_Registry.Size();
		TargetObjectRegistry.BSSkin__Instance_Registry.AddData();
	}
	else if(TargetNodeType == "BSSkin__BoneData")
	{
		Index = TargetObjectRegistry.BSSkin__BoneData_Registry.Size();
		TargetObjectRegistry.BSSkin__BoneData_Registry.AddData();
	}
	else if(TargetNodeType == "BSPositionData")
	{
		Index = TargetObjectRegistry.BSPositionData_Registry.Size();
		TargetObjectRegistry.BSPositionData_Registry.AddData();
	}
	else if(TargetNodeType == "BSConnectPoint__Parents")
	{
		Index = TargetObjectRegistry.BSConnectPoint__Parents_Registry.Size();
		TargetObjectRegistry.BSConnectPoint__Parents_Registry.AddData();
	}
	else if(TargetNodeType == "BSConnectPoint__Children")
	{
		Index = TargetObjectRegistry.BSConnectPoint__Children_Registry.Size();
		TargetObjectRegistry.BSConnectPoint__Children_Registry.AddData();
	}
	else
	{
		std::cout << "Invalid/Non-Implimented NodeType.\n";
	}
	FixCurrentNodeData();
	CurrentNode->IndexInRegistry = Index;
}