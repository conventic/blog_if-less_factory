
#include "CommandA.h"
#include "CommandRegistry.h"
#include <iostream>

using namespace std;

void CommandA::execute()
{
    cout << "command A" << endl;
}

REGISTER_COMMAND(CommandA);

