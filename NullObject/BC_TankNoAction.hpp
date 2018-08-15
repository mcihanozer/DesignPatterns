#ifndef BC_TankNoAction_hpp
#define BC_TankNoAction_hpp

#include "DT_DecisionTree.hpp"
#include "TankAI.hpp"

class BC_TankNoAction : DT_Action<TankAI>
{
public:
    
    BC_TankNoAction() {}
    virtual ~BC_TankNoAction() {}
    
    // Null object pattern
    void performAction(TankAI* pAgent) override {}
    // Null object pattern
};

#endif
