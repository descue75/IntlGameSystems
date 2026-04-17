#pragma once

#include "config/MarketRules.h"

class ConfigValidator {
public:
  static bool Validate(const MarketRules &rules);
};