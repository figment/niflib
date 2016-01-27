#pragma once
#ifndef NifNodeTreeData_IncludeGuard
#define NifNodeTreeData_IncludeGuard
#include "LooseNodeTreeTemplate.h"
#include "ObjectRegistryClasses.h"
#include "gen\Header.h"

//Need to add this to library API later
namespace NifNodeTreeData
{
	//Basic NifNode Variables/Functions (Use as part of base of ObjectRegistryNodes combined with Node classes in Niflib)
	//Actual full Node Data is Stored in Object Registry VariableLists
	class NifNode : public LooseNodeTreeTemplate::Node
	{
	public:
		/*std::string asString(bool verbose=false) const
		{
		}*/
		//NodeType of Actual Node stored inside Object Registry
		std::string NodeType = "";
		//Index of actual node inside VariableList with name NodeType
		size_t IndexInRegistry;
	};
	class NifNodeTree : public LooseNodeTreeTemplate::NodeTree<NifNode>
	{
	public:
		//NifNode Object Registry holding the actual node data
		ObjectRegistry TargetObjectRegistry;
		Niflib::NifInfo NifHeaderInfo;
		//************************************
		// Method:    FixCurrentNodeData
		// FullName:  LooseNodeTreeTemplate::NodeTree<NifNodeTreeData::NifNode>::FixCurrentNodeData
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: std::string TargetNodeType
		// Parameter: std::string TargetMenuMaster
		// Parameter: std::string SpecialModifier
		// Parameter: std::string ItemName
		// Parameter: std::string InternalName
		//************************************
		void AddNodeToTree(std::string TargetNodeType, std::string TargetMenuMaster, std::string SpecialModifier = "", std::string ItemName = "", std::string InternalName = "");
		void CloneNodeByInternalNameAsOtherType(std::string TargetNodeType, std::string TargetNodeName)
		{
		}
		void ReadNifNodeTree(string const & FileName)
		{//Need to create non-address based version of 

		}
		NifNodeTree(string const & FileName)
		{
			ReadNifNodeTree(FileName);
		}
		NifNodeTree(){}
		~NifNodeTree() {}
	};
};
#endif