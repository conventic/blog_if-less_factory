
#include "CommandB.h"
#include "CommandRegistry.h"
#include <iostream>

using namespace std;

void CommandB::execute()
{
    cout << "command B" << endl;
}

REGISTER_COMMAND(CommandB)
