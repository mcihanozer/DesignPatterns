//
//  AgentGameStyleFactory.cpp
//
//  Created by Cihan Ozer on 24/01/2018.
//

// Factory pattern for creating various kinds of playing style

#include "AgentGameStyleFactory.hpp"

using namespace AgentPlayingStyleData;

// IN CASE YOU DO NOT HAVE C++14: use make_unique() template below
// IF YOU HAVE C++14 and ABOVE: use std::make_unique()

// http://en.cppreference.com/w/cpp/memory/unique_ptr/make_unique
// note: this implementation does not disable this overload for array types
template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args)
{
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

std::unique_ptr<AgentGameStyle> AgentGameStyleFactory::instantiate(const ePLAYING_CHARACTER pStyle)
{
    switch(pStyle)
    {
        case ePLAYING_CHARACTER::ePC_CONTAIN:
            return make_unique<ContainGameStyleAgent>();
        case ePLAYING_CHARACTER::ePC_COUNTER:
            return make_unique<CounterGameStyleAgent>();
        case ePLAYING_CHARACTER::ePC_STANDARD:
            return make_unique<StandardGameStyleAgent>();
        case ePLAYING_CHARACTER::ePC_ATTACKING:
            return make_unique<AttackGameStyleAgent>();
        case ePLAYING_CHARACTER::ePC_OVERLOAD:
            return make_unique<OverloadGameStyleAgent>();
        default:
            return make_unique<StandardGameStyleAgent>();
    }
    
    
    
}
