
#include "CommandB.h"
#include "CommandRegistry.h"
#include <iostream>

using namespace std;

void CommandB::execute()
{
    cout << "command B" << endl;
}

namespace CommandiBAstatis__run 
{
    int i = CommandRegistry::getInstance().addType<CommandB>("CommandB");
};
