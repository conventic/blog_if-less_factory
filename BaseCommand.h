
#pragma once 

#include <map>
#include <string>

using namespace std;

class BaseCommand
{
public:
    virtual void execute()=0;
};

