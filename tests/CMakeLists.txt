add_executable(IntlGameSystemsTests
  ConfigValidatorTests.cpp
)

target_link_libraries(IntlGameSystemsTests
  PRIVATE intl_core GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(IntlGameSystemsTests)