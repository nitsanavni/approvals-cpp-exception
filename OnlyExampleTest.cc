#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>


TEST_GROUP(TestGroup)
{
  void setup() {
  }
  void teardown() {
  }
};

TEST(TestGroup, ExampleBasedTest)
{
    STRCMP_EQUAL("a", "b");
}

TEST(TestGroup, ExampleBasedTest2)
{
    STRCMP_EQUAL("c", "d");
}

int
main(int ac, char** av)
{
  return CommandLineTestRunner::RunAllTests(ac, av);
}
