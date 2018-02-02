//
//  AbstractAgentBuilder.hpp
//
//  Created by Cihan Ozer on 01/02/2018.
//

#ifndef AbstractAgentBuilder_hpp
#define AbstractAgentBuilder_hpp

#include "Agent.hpp"

// Abstract Agent builder
class AbstractAgentBuilder
{
public:
    
    virtual ~AbstractAgentBuilder() {}
    
    Agent* getAgent()
    {
        return mAgentSptr.release();
    }
    
    // Where you will init the smart pointer
    virtual void createNewAgent() = 0;
    
    virtual void setKickinChance() = 0;
    virtual void setBallControlChance() = 0;
    virtual void setBeatingChance() = 0;
    
protected:
    
    std::unique_ptr<Agent> mAgentSptr;
    
};

#endif /* AbstractAgentBuilder_hpp */
