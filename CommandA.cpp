
#include "CommandA.h"
#include "CommandRegistry.h"
#include <iostream>

using namespace std;

void CommandA::execute()
{
    cout << "command A" << endl;
}

namespace CommandAstatis__run 
{
    int i = CommandRegistry::getInstance().addType<CommandA>("CommandA");
};
