//
//  AgentBuilder.cpp
//
//  Created by Cihan Ozer on 02/02/2018.
//

#include "AgentBuilder.hpp"

void AgentBuilder::startCreationProcess()
{
    setKickingAirChance();
    setBallControlChance();
    setBeatingChance();
}

void AgentBuilder::setKickingAirChance()
{
    mAgentSptr->getCharacter()->setKickingCoeff(mAgentInfo.kickingAirChance);
}

void AgentBuilder::setBallControlChance()
{
    mAgentSptr->getCharacter()->setBallControlCoeff(mAgentInfo.ballControlChance);
}

void AgentBuilder::setBeatingChance()
{
    mAgentSptr->getCharacter()->setBeatingPlayerCoeff(mAgentInfo.beatingChance);
}
