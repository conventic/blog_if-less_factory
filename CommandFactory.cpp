
#include <iostream>
#include "BaseCommand.h"
#include "CommandFactory.h"
#include "CommandRegistry.h"

BaseCommand * CommandFactory::createCommand( string cmdType )
{
    cout << "createCommand " << cmdType << endl;

    map_type * map = CommandRegistry::getInstance().getMap();
    map_type::iterator it = map->find(cmdType);

    return it->second;
}
