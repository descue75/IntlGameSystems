#include <iostream>
#include "config/ConfigLoader.h"
#include "config/ConfigValidator.h"

int main()
{
    MarketRules rules = ConfigLoader::Load();

    if (ConfigValidator::Validate(rules))
    {
        std::cout << "IntlGameSystems running\n";
    }
    else
    {
        std::cout << "Validation failed\n";
    }

    return 0;
}