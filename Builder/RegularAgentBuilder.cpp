//
//  RegularAgentBuilder.cpp
//
//  Created by Cihan Ozer on 01/02/2018.
//

#include "RegularAgentBuilder.hpp"

// SOME INCLUDES

RegularAgentBuilder::RegularAgentBuilder()
{
    mAgentInfo.kickingChance = 0.45f;
    mAgentInfo.ballControlChance = 0.2f;
    mAgentInfo.beatingChance = 0.01f;
}

void RegularAgentBuilder::createNewAgent(const float pMistakeFrequency)
{
    // TestAgent is a class inherited from the abstract Agent class.
    // Implementation of TestAgent is omitted
    mAgentSptr = make_unique<TestAgent>();
    startCreationProcess(pMistakeFrequency);
}
