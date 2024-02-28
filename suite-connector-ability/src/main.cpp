#include "suite-connector.h"

int main() 
{
    GoString configFile = {"/etc/suite-connector/config.json", 32};
    StartSuiteConnector(configFile);
}