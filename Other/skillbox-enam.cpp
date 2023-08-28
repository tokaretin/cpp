#include <iostream>

enum class ProgrammerState {code, sleep, eat};

ProgrammerState getState(ProgrammerState current)
{
    if (current == ProgrammerState::code) 
        return ProgrammerState::sleep;
    else if (current == ProgrammerState::sleep)
        return ProgrammerState::eat;
    return ProgrammerState::code;
}


void PrintState (ProgrammerState state)
{
    if (state == ProgrammerState::code)
        std::cout << "Programmer code 💾" << std::endl;
        else if (state == ProgrammerState::sleep)
        std::cout << "Programmer sleep 😴" << std::endl;
        else if (state == ProgrammerState::eat)
        std::cout << "Programmer eat 🍴" << std::endl;
        else
        std::cerr << "Wrong state" << std::endl; 
}

main() 
{
    ProgrammerState currentState = ProgrammerState::code;

    for (int i = 0; i < 9; i++)
    {
        PrintState(currentState);
        currentState = getState(currentState);
    }

    return 0;
    
}




