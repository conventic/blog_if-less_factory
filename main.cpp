
#include "CommandFactory.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "IF-less factory" << endl;

    CommandFactory * factory = new CommandFactory();
    BaseCommand * cmdA = factory->createCommand("CommandA");
    BaseCommand * cmdB = factory->createCommand("CommandB");

    cmdA->execute();
    cmdB->execute();

    return 0;
}
