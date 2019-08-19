/*
    DataTypeClass: ModificationInfo

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor:     Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackCore_ModificationInfo_h__
#define __OpcUaStackCore_ModificationInfo_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/StandardDataTypes/HistoryUpdateType.h"

namespace OpcUaStackCore
{
    
    class DLLEXPORT ModificationInfo
    : public Object
    , public ExtensionObjectBase
    {
      public:
        typedef boost::shared_ptr<ModificationInfo> SPtr;
        typedef std::vector<ModificationInfo::SPtr> Vec;
    
        ModificationInfo(void);
        ModificationInfo(const ModificationInfo& value);
        virtual ~ModificationInfo(void);
        
        OpcUaUtcTime& modificationTime(void);
        HistoryUpdateType& updateType(void);
        OpcUaString& userName(void);
        
        //- ExtensionObjectBase -----------------------------------------------
        virtual ExtensionObjectBase::SPtr factory(void) override;
        virtual std::string namespaceName(void) override;
        virtual std::string typeName(void) override;
        virtual OpcUaNodeId typeId(void) override;
        virtual OpcUaNodeId binaryTypeId(void) override;
        virtual OpcUaNodeId xmlTypeId(void) override;
        virtual OpcUaNodeId jsonTypeId(void) override;
        virtual void opcUaBinaryEncode(std::ostream& os) const override;
        virtual void opcUaBinaryDecode(std::istream& is) override;
        virtual bool xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns) override;
        virtual bool xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns) override;
        virtual bool xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns) override;
        virtual bool xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns) override;
        virtual void copyTo(ExtensionObjectBase& extensionObjectBase) override;
        virtual bool equal(ExtensionObjectBase& extensionObjectBase) const override;
        virtual void out(std::ostream& os) override;
        //- ExtensionObjectBase -----------------------------------------------
        
        virtual bool jsonEncodeImpl(boost::property_tree::ptree& pt) const override;
        virtual bool jsonDecodeImpl(const boost::property_tree::ptree& pt) override;
        
        void copyTo(ModificationInfo& value);
        bool operator==(const ModificationInfo& value);
        bool operator!=(const ModificationInfo& value);
        ModificationInfo& operator=(const ModificationInfo& value);
    
      private:
        OpcUaUtcTime modificationTime_;
        HistoryUpdateType updateType_;
        OpcUaString userName_;
    
    };
    
    class DLLEXPORT ModificationInfoArray
    : public OpcUaArray<ModificationInfo::SPtr, SPtrTypeCoder<ModificationInfo> >
    , public Object
    {
      public:
    	   typedef boost::shared_ptr<ModificationInfoArray> SPtr;
    };

}

#endif
