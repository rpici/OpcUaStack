/*
   Copyright 2015-2019 Kai Huebl (kai@huebl-sgh.de)

   Lizenziert gemäß Apache Licence Version 2.0 (die „Lizenz“); Nutzung dieser
   Datei nur in Übereinstimmung mit der Lizenz erlaubt.
   Eine Kopie der Lizenz erhalten Sie auf http://www.apache.org/licenses/LICENSE-2.0.

   Sofern nicht gemäß geltendem Recht vorgeschrieben oder schriftlich vereinbart,
   erfolgt die Bereitstellung der im Rahmen der Lizenz verbreiteten Software OHNE
   GEWÄHR ODER VORBEHALTE – ganz gleich, ob ausdrücklich oder stillschweigend.

   Informationen über die jeweiligen Bedingungen für Genehmigungen und Einschränkungen
   im Rahmen der Lizenz finden Sie in der Lizenz.

   Autor: Kai Huebl (kai@huebl-sgh.de), Aleksey Timin (atimin@gmail.com)
 */

#include "OpcUaStackCore/ServiceSet/ReferenceDescription.h"

namespace OpcUaStackCore
{

	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------
	//
	// OpcUa ReferenceDescription
	//
	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------

	ReferenceDescription::ReferenceDescription(void)
	: Object()
	, referenceTypeIdSPtr_()
	, isForward_()
	, nodeIdSPtr_(constructSPtr<OpcUaExpandedNodeId>())
	, browseName_()
	, displayName_()
	, nodeClass_()
	, typeDefinitionSPtr_(constructSPtr<OpcUaExpandedNodeId>())
	{
		referenceTypeIdSPtr_ = constructSPtr<OpcUaNodeId>();
	}

	ReferenceDescription::~ReferenceDescription(void)
	{
	}

	void 
	ReferenceDescription::referenceTypeId(const OpcUaNodeId::SPtr referenceTypeId)
	{
		referenceTypeIdSPtr_ = referenceTypeId;
	}
	
	OpcUaNodeId::SPtr 
	ReferenceDescription::referenceTypeId(void) const
	{
		return referenceTypeIdSPtr_;
	}
	
	void 
	ReferenceDescription::isForward(const OpcUaBoolean& isForward)
	{
		isForward_ = isForward;
	}
	
	OpcUaBoolean 
	ReferenceDescription::isForward(void)
	{
		return isForward_;
	}
	
	void 
	ReferenceDescription::expandedNodeId(const OpcUaExpandedNodeId::SPtr nodeId)
	{
		nodeIdSPtr_ = nodeId;
	}
	
	OpcUaExpandedNodeId::SPtr 
	ReferenceDescription::expandedNodeId(void) const
	{
		return nodeIdSPtr_;
	}

	void 
	ReferenceDescription::browseName(const OpcUaQualifiedName& browseName)
	{
		browseName_ = browseName;
	}
	
	OpcUaQualifiedName& 
	ReferenceDescription::browseName(void)
	{
		return browseName_;
	}
	
	void 
	ReferenceDescription::displayName(const OpcUaLocalizedText& displayName)
	{
		displayName_ = displayName;
	}
	
	OpcUaLocalizedText& 
	ReferenceDescription::displayName(void)
	{
		return displayName_;
	}

	void 
	ReferenceDescription::nodeClass(const NodeClass::Enum nodeClass)
	{
		nodeClass_ = nodeClass;
	}
	
	NodeClass::Enum
	ReferenceDescription::nodeClass(void)
	{
		return nodeClass_;
	}
	
	void 
	ReferenceDescription::typeDefinition(const OpcUaExpandedNodeId::SPtr typeDefinition)
	{
		typeDefinitionSPtr_ = typeDefinition;
	}
	
	OpcUaExpandedNodeId::SPtr 
	ReferenceDescription::typeDefinition(void) const
	{
		return typeDefinitionSPtr_;
	}

	void
	ReferenceDescription::copyTo(ReferenceDescription& referenceDescription)
	{
		referenceTypeIdSPtr_->copyTo(*referenceDescription.referenceTypeId().get());
		referenceDescription.isForward(isForward_);
		nodeIdSPtr_->copyTo(*referenceDescription.expandedNodeId().get());
		browseName_.copyTo(referenceDescription.browseName());
		displayName_.copyTo(referenceDescription.displayName());
		referenceDescription.nodeClass(nodeClass_);
		typeDefinitionSPtr_->copyTo(*referenceDescription.typeDefinition().get());
	}

	void 
	ReferenceDescription::opcUaBinaryEncode(std::ostream& os) const
	{
		referenceTypeIdSPtr_->opcUaBinaryEncode(os);
		OpcUaNumber::opcUaBinaryEncode(os, isForward_);
		nodeIdSPtr_->opcUaBinaryEncode(os);
		browseName_.opcUaBinaryEncode(os);
		displayName_.opcUaBinaryEncode(os);
		OpcUaNumber::opcUaBinaryEncode(os, (OpcUaUInt32)nodeClass_);
		typeDefinitionSPtr_->opcUaBinaryEncode(os);
	}
	
	void 
	ReferenceDescription::opcUaBinaryDecode(std::istream& is)
	{
		OpcUaUInt32 tmp;
		referenceTypeIdSPtr_->opcUaBinaryDecode(is);
		OpcUaNumber::opcUaBinaryDecode(is, isForward_);
		nodeIdSPtr_->opcUaBinaryDecode(is);
		browseName_.opcUaBinaryDecode(is);
		displayName_.opcUaBinaryDecode(is);
		OpcUaNumber::opcUaBinaryDecode(is, tmp);
		nodeClass_ = (NodeClass::Enum)tmp;
		typeDefinitionSPtr_->opcUaBinaryDecode(is);
	}

    bool
    ReferenceDescription::jsonEncodeImpl(boost::property_tree::ptree &pt) const
    {
	    bool rc = jsonObjectSPtrEncode(pt, referenceTypeIdSPtr_, "ReferenceTypeId");
	    rc &= jsonNumberEncode(pt, isForward_, "IsForward");
	    rc &= jsonObjectSPtrEncode(pt, nodeIdSPtr_, "NodeId");
        rc &= jsonObjectEncode(pt, browseName_, "BrowseName", true);
        rc &= jsonObjectEncode(pt, displayName_, "DisplayName");
        rc &= jsonNumberEncode(pt, (OpcUaUInt32)nodeClass_, "NodeClass", true, OpcUaUInt32(0));
        rc &= jsonObjectSPtrEncode(pt, typeDefinitionSPtr_, "TypeDefinition", true);

        return rc;
    }

    bool
    ReferenceDescription::jsonDecodeImpl(const boost::property_tree::ptree &pt)
    {
        bool rc = jsonObjectSPtrDecode(pt, referenceTypeIdSPtr_, "ReferenceTypeId");
        rc &= jsonNumberDecode(pt, isForward_, "IsForward");
        rc &= jsonObjectSPtrDecode(pt, nodeIdSPtr_, "NodeId");
        rc &= jsonObjectDecode(pt, browseName_, "BrowseName", true);
        rc &= jsonObjectDecode(pt, displayName_, "DisplayName");

        OpcUaUInt32  tmp;
        rc &= jsonNumberDecode(pt, tmp, "NodeClass", true, OpcUaUInt32(0));
        nodeClass_ = (NodeClass::Enum)tmp;

        rc &= jsonObjectSPtrDecode(pt, typeDefinitionSPtr_, "TypeDefinition", true);

        return rc;
    }

}
