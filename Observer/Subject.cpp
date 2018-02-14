//
//  Subject.cpp
//
//  Created by Cihan Ozer on 09/10/2017.
//

#include "Subject.hpp"

Subject::Subject()
{
    mId = 0;
}

Subject:: ~Subject()
{
    for(int oi = 0; oi < mObserverList.size(); oi++)
    {
        mObserverList.erase( mObserverList.begin() + oi );
    }
    
    mObserverList.clear();
}

void Subject::attach(Observer *pObserver)
{
    mObserverList.push_back(pObserver);
    pObserver->init(this, mId++);
}

void Subject::detach(const int pObserverId)
{
    for(auto it = mObserverList.begin(); it != mObserverList.end(); it++)
    {
        if(pObserverId == (*it)->mId)
        {
            mObserverList.erase(it);
            break;
        }
    }
}

void Subject::notify(OHB_Event pEvent)
{
    for( const auto& elem : mObserverList)
    {
        elem->handleNotification(pEvent);
    }
}
