//
//  Observer.cpp
//
//  Created by Cihan Ozer on 09/10/2017.
//

#include "Observer.hpp"

Observer::~Observer()
{
    if(mSubject != NULL)
    {
        mSubject = NULL;
    }
    
    
}

void Observer::init(Subject *pSubject, const int pId)
{
    mSubject = pSubject;
    mId = pId;
}
