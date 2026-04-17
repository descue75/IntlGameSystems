#include "config/ConfigValidator.h"

bool ConfigValidator::Validate(const MarketRules &rules) {
  return rules.maxBet > 0;
}