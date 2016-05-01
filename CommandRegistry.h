
#include "BaseCommand.h"
#include <map>
#include <string>
#include <iostream>

typedef map<string,BaseCommand*> map_type;

class CommandRegistry
{
public:
    static CommandRegistry& getInstance()
    {
        static CommandRegistry instance;
        return instance;
    }

    map_type * getMap()
    {
        return commandMap;
    };

    template<typename T> int addType(string typeName)
    {
        cout << "adding type " << typeName << endl;
        this->commandMap->insert( pair<string,BaseCommand*>(typeName, new T));
        return 0;
    };

private:
    CommandRegistry() {
        cout << "instantiated new CommandRegistry" << endl;
        commandMap = new map_type();
    }
    CommandRegistry(CommandRegistry const&);
    void operator=(CommandRegistry const&);

private:
    map_type * commandMap;
    static CommandRegistry * mInstance;
};
