#include <cstring>
#define APPROVALS_CPPUTEST_EXISTING_MAIN
// must come before the CppUTest #includes to avoid some build errors
#include "ApprovalTests.hpp"

using namespace ApprovalTests;

#include <memory>


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

TEST(TestGroup, ApprovalTestsTest)
{
    Approvals::verify("a");
}

int
main(int ac, char** av)
{
  ApprovalTests::initializeApprovalTestsForCppUTest();
  auto disposer = Approvals::useAsDefaultReporter(CustomReporter::create("code", "-d {Received} {Approved}"));

  auto result = CommandLineTestRunner::RunAllTests(ac, av);
  
  TestRegistry::getCurrentRegistry()->resetPlugins();
  
  return result;
}
