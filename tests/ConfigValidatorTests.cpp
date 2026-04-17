#include <gtest/gtest.h>
#include "config/ConfigValidator.h"

TEST(ConfigValidatorTests, BasicValidation)
{
    MarketRules rules{100};
    EXPECT_TRUE(ConfigValidator::Validate(rules));
}