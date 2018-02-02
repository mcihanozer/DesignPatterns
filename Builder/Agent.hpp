//
//  Agent.hpp
//
//  Created by Cihan Ozer on 16/08/2017.
//
//

#ifndef Agent_hpp
#define Agent_hpp

// OMITTED INCLUDES

// An abstract (omitted codes) Agent class
class Agent : public Observer
{
public:

    Agent();
    virtual ~Agent();

    // OMITTED CODES
    
    std::unique_ptr<AgentCharacter>& getCharacter()
    {
        return mCharacter;
    }
    
    // OMITTED CODES
    
protected:
    
    // OMITTED CODES

    // AgentCharacter class keeps and manages the characteristic
    // specifications of an agent.
    // Implementation of AgentCharacter is omitted.
    std::unique_ptr<AgentCharacter> mCharacter;
};

#endif /* Agent_hpp */
