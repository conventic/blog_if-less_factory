
#pragma once

#include "BaseCommand.h"
#include <string>

using namespace std;

class BaseFactory
{
public:
    virtual BaseCommand * createCommand( string cmdType )=0;
};
