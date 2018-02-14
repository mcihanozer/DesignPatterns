//
//  Observer.hpp
//
//  Created by Cihan Ozer on 09/10/2017.
//

#ifndef Observer_hpp
#define Observer_hpp

#include "YourEventFile.hpp"

class Subject;

// Base class for Observers
class Observer
{
public:
    
    virtual ~Observer();
    
    virtual void init(Subject* pSubject, const int pId);
    virtual void handleNotification(OHB_Event pEvent) = 0;
    
    // Unique id for detaching from the subject
    int mId;
    
protected:
    
    Subject* mSubject;
};

#endif /* Observer_hpp */
