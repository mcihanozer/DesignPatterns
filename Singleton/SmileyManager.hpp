//
//  SmileyManager.hpp
//
//  Created by Cihan Ozer on 08/01/2018.
//

// Singleton and C++ callbacks example.
// SmileyManager is a manager class managing smileys in a game.
// Also see: https://github.com/mcihanozer/Callbacks-and-Messaging-System

#ifndef SmileyManager_hpp
#define SmileyManager_hpp

// SOME INCLUDES

#include <vector>

class SmileyManager
{
public:
    
    // Singleton related
    static SmileyManager& getInstance();
    
    // Callback related
    void clear();
    
    // Callback related
    void callOnFrame(const float pDeltaTime);
    
    // Callback related
    void addSmileyEventCallback( SmileyLogic* const object, void(SmileyLogic::* const func)(SmileyEvent, int) );
    void addFrameCallback( SmileyLogic* const object, void(SmileyLogic::* const func)(const float) );
    
    // Callback related
    void handleSmileyRequest(const int pIndex);
    
    // Callback related
    void callForSmileyEvents(SmileyEvent pEvent, int pIndex = -1);
    
private:
    
    // Singleton related
    SmileyManager() {}
    ~SmileyManager();
    
    // Callback related
    std::vector<std::function<void(SmileyEvent, int)>> mSmileyCallbacks;
    std::vector<std::function<void(const float)>> mFrameCallbacks;
};

#endif /* SmileyManager_hpp */
