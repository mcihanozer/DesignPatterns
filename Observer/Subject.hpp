//
//  Subject.hpp
//
//  Created by Cihan Ozer on 09/10/2017.
//

#ifndef Subject_hpp
#define Subject_hpp

#include "YourEventFile.hpp"
#include "Observer.hpp"

#include <vector>

// Base class for subjects
class Subject
{
public:
    Subject();
    ~Subject();
    
    void attach(Observer* pObserver);
    void detach(const int pObserverId);
    void notify(OHB_Event pEvent);
    
private:
    
    std::vector<Observer*> mObserverList;
    
    // Gives an unique id to each observer for detaching easier
    // TODO An ID manager could be add to manage it
    int mId;
};

#endif /* Subject_hpp */
