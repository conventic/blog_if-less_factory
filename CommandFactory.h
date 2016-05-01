
#include "BaseFactory.h"

class CommandFactory : public BaseFactory
{
public:
    virtual BaseCommand * createCommand( string cmdType );
};
