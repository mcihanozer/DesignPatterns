//
//  RegularAgentBuilder.hpp
//
//  Created by Cihan Ozer on 01/02/2018.
//

#ifndef RegularAgentBuilder_hpp
#define RegularAgentBuilder_hpp

#include "AgentBuilder.hpp"

class RegularAgentBuilder : public AgentBuilder
{
public:
    
    RegularAgentBuilder();
    virtual ~RegularAgentBuilder() {}
    
    void createNewAgent();
};

#endif /* RegularAgentBuilder_hpp */
