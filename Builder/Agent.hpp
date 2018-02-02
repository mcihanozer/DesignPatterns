//
//  Agent.hpp
//
//  Created by Cihan Ozer on 16/08/2017.
//
//

#ifndef Agent_hpp
#define Agent_hpp

// OMITTED INCLUDES

class Agent : public Observer
{
public:
    
    
    Agent();
    virtual ~Agent();

    // OMITTED CODE
    
    std::unique_ptr<AgentCharacter>& getCharacter()
    {
        return mCharacter;
    }
    
    // OMITTED CODE
    
protected:
    
    // OMITTED CODE

    // AgentCharacter class keeps and manages the characteristic
    // specifications of an agent.
    // Implementation of AgentCharacter is omitted.
    std::unique_ptr<AgentCharacter> mCharacter;
};

#endif /* Agent_hpp */
