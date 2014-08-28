#include "OpcUaStackCore/ServiceSet/ReadRawModifiedDetails.h"

namespace OpcUaStackCore
{

	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------
	//
	// OpcUa ReadRawModifiedDetails
	//
	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------

	ReadRawModifiedDetails::ReadRawModifiedDetails(void)
	: ObjectPool<ReadRawModifiedDetails>()
	, isReadModified_()
	, startTime_()
	, endTime_()
	, numValuesPerNode_()
	, returnBoolean_()
	{
	}

	ReadRawModifiedDetails::~ReadRawModifiedDetails(void)
	{
	}

	void 
	ReadRawModifiedDetails::isReadModified(const OpcUaBoolean& isReadModified)
	{
		isReadModified_ = isReadModified;
	}
	
	OpcUaBoolean 
	ReadRawModifiedDetails::isReadModified(void)
	{
		return isReadModified_;
	}
	
	void 
	ReadRawModifiedDetails::startTime(const UtcTime& startTime)
	{
		startTime_ = startTime;
	}
	
	void 
	ReadRawModifiedDetails::startTime(const boost::posix_time::ptime& startTime)
	{
		startTime_.dateTime(startTime);
	}
	
	UtcTime& 
	ReadRawModifiedDetails::startTime(void)
	{
		return startTime_;
	}
	
	void 
	ReadRawModifiedDetails::endTime(const UtcTime& endTime)
	{
		endTime_ = endTime;
	}

	void 
	ReadRawModifiedDetails::endTime(const boost::posix_time::ptime& endTime)
	{
		endTime_.dateTime(endTime);
	}
	
	UtcTime& 
	ReadRawModifiedDetails::endTime(void)
	{
		return endTime_;
	}

		void 
	ReadRawModifiedDetails::numValuesPerNode(const OpcUaUInt32& numValuesPerNode)
	{
		numValuesPerNode_ = numValuesPerNode;
	}
	
	OpcUaUInt32 
	ReadRawModifiedDetails::numValuesPerNode(void) const
	{
		return numValuesPerNode_;
	}

	void 
	ReadRawModifiedDetails::returnBoolean(const OpcUaBoolean& returnBoolean)
	{
		returnBoolean_ = returnBoolean;
	}
		
	OpcUaBoolean 
	ReadRawModifiedDetails::returnBoolean(void)
	{
		return returnBoolean_;
	}

	ExtensibleParameterBase::BSPtr 
	ReadRawModifiedDetails::factory(void)
	{
		return ReadRawModifiedDetails::construct();
	}

	void 
	ReadRawModifiedDetails::opcUaBinaryEncode(std::ostream& os) const
	{
		OpcUaNumber::opcUaBinaryEncode(os, isReadModified_);
		startTime_.opcUaBinaryEncode(os);
		endTime_.opcUaBinaryEncode(os);
		OpcUaNumber::opcUaBinaryEncode(os, numValuesPerNode_);
		OpcUaNumber::opcUaBinaryEncode(os, returnBoolean_);
	}
	
	void 
	ReadRawModifiedDetails::opcUaBinaryDecode(std::istream& is)
	{
		OpcUaNumber::opcUaBinaryDecode(is, isReadModified_);
		startTime_.opcUaBinaryDecode(is);
		endTime_.opcUaBinaryDecode(is);
		OpcUaNumber::opcUaBinaryDecode(is, numValuesPerNode_);
		OpcUaNumber::opcUaBinaryDecode(is, returnBoolean_);
	}
}