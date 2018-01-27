//
//  AgentGameStyleFactory.hpp
//
//  Created by Cihan Ozer on 24/01/2018.
//

#ifndef AgentGameStyleFactory_hpp
#define AgentGameStyleFactory_hpp

#include "AgentGameStyle.hpp"

#include <memory>

// Factory pattern for creating various kinds of playing style

class AgentGameStyleFactory
{
public:
    
    static std::unique_ptr<AgentGameStyle> instantiate(const AgentPlayingStyleData::ePLAYING_CHARACTER pStyle);
};

#endif /* AgentGameStyleFactory_hpp */
