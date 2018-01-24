//
//  SmileyManager.cpp
//
//  Created by Cihan Ozer on 08/01/2018.
//

// Singleton and C++ callbacks example.
// SmileyManager is a manager class managing smileys in a game.

#include "SmileyManager.hpp"

// SOME INCLUDES

SmileyManager::~SmileyManager()
{
    clear();
}

// Singleton related
SmileyManager& SmileyManager::getInstance()
{
    static SmileyManager instance;
    return instance;
}

// Callback related
void SmileyManager::clear()
{
    mSmileyCallbacks.clear();
    mFrameCallbacks.clear();
}

// Callback related
void SmileyManager::callOnFrame(const float pDeltaTime)
{
    for(const auto& cb : mFrameCallbacks)
    {
        cb(pDeltaTime);
    }
}

// Callback related
void SmileyManager::addSmileyEventCallback(SmileyLogic *const object, void (SmileyLogic::*const func)(SmileyEvent, int))
{
    using namespace std::placeholders;
    mSmileyCallbacks.emplace_back( std::bind(func, object, _1, _2) );
}

// Callback related
void SmileyManager::addFrameCallback(SmileyLogic *const object, void (SmileyLogic::*const func)(const float))
{
    using namespace std::placeholders;
    mFrameCallbacks.emplace_back( std::bind(func, object, _1) );
}

// Callback related
void SmileyManager::handleSmileyRequest(const int pIndex)
{
    Game::current()->showSmiley(pIndex, false);
}

// Callback related
void SmileyManager::callForSmileyEvents(SmileyEvent pEvent, int pIndex)
{
    for(const auto& cb : mSmileyCallbacks)
    {
        cb(pEvent, pIndex);
    }
}
