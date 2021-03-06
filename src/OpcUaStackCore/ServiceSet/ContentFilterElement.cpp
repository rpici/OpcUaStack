/*
   Copyright 2015 Kai Huebl (kai@huebl-sgh.de)

   Lizenziert gemäß Apache Licence Version 2.0 (die „Lizenz“); Nutzung dieser
   Datei nur in Übereinstimmung mit der Lizenz erlaubt.
   Eine Kopie der Lizenz erhalten Sie auf http://www.apache.org/licenses/LICENSE-2.0.

   Sofern nicht gemäß geltendem Recht vorgeschrieben oder schriftlich vereinbart,
   erfolgt die Bereitstellung der im Rahmen der Lizenz verbreiteten Software OHNE
   GEWÄHR ODER VORBEHALTE – ganz gleich, ob ausdrücklich oder stillschweigend.

   Informationen über die jeweiligen Bedingungen für Genehmigungen und Einschränkungen
   im Rahmen der Lizenz finden Sie in der Lizenz.

   Autor: Kai Huebl (kai@huebl-sgh.de)
 */

#include "OpcUaStackCore/ServiceSet/ContentFilterElement.h"

namespace OpcUaStackCore
{

	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------
	//
	// OpcUa ContentFilterElement
	//
	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------

	ContentFilterElement::ContentFilterElement(void)
	: Object()
	, filterOperator_(BasicFilterOperator_Anonymous)
	, filterOperandsArraySPtr_(constructSPtr<ExtensibleParameterArray>())
	{
	}

	ContentFilterElement::~ContentFilterElement(void)
	{
	}

	void 
	ContentFilterElement::filterOperator(const BasicFilterOperator filterOperator)
	{
		filterOperator_ = filterOperator;
	}
	
	BasicFilterOperator
	ContentFilterElement::filterOperator(void)
	{
		return filterOperator_;
	}
	
	void 
	ContentFilterElement::filterOperands(const ExtensibleParameterArray::SPtr filterOperands)
	{
		filterOperandsArraySPtr_ = filterOperands;
	}

	ExtensibleParameterArray::SPtr 
	ContentFilterElement::filterOperands(void) const
	{
		return filterOperandsArraySPtr_;
	}

	void 
	ContentFilterElement::opcUaBinaryEncode(std::ostream& os) const
	{
		OpcUaNumber::opcUaBinaryEncode(os, (OpcUaUInt32)filterOperator_);
		filterOperandsArraySPtr_->opcUaBinaryEncode(os);
	}
	
	void 
	ContentFilterElement::opcUaBinaryDecode(std::istream& is)
	{
		OpcUaUInt32 tmp;
		OpcUaNumber::opcUaBinaryDecode(is, tmp);
		filterOperator_ = (BasicFilterOperator)tmp;
		filterOperandsArraySPtr_->opcUaBinaryDecode(is);
	}
}
