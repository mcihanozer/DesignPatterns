//
//  AgentBuilder.hpp
//
//  Created by Cihan Ozer on 02/02/2018.
//

#ifndef AgentBuilder_hpp
#define AgentBuilder_hpp

// SOME INCLUDES 

#include "AgentBuilder.hpp"

// A base class for builders to control the generation process easier
class AgentBuilder : public AbstractAgentBuilder
{
public:
    
    virtual ~AgentBuilder() {}
    
    // Where you will init the smart pointer and call startCreationProcess()
    virtual void createNewAgent() = 0;
    
    virtual void setKickingChance();
    virtual void setBallControlChance();
    virtual void setBeatingChance();
    
protected:
    
    // This is the method that calls the setters of the builder
    void startCreationProcess();
    
    // A struct for managing the required information in the builders
    AgentInfoBundle mAgentInfo;
};

#endif /* AgentBuilder_hpp */
