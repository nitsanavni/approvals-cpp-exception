CPPUTEST_HOME = CppUTest

USER_DIR = .

CPPFLAGS += -I$(CPPUTEST_HOME)/include -Ilib

CFLAGS += -g -Wall -Wextra

LD_LIBRARIES = -L$(CPPUTEST_HOME)/lib -Llib -lCppUTest -lCppUTestExt

all : ExampleTestAndApprovalTest OnlyExampleTest

ExampleTestAndApprovalTest : $(USER_DIR)/ExampleTestAndApprovalTest.cc
	$(CXX) $(CPPFLAGS) $(CFLAGS) -o $@ $(USER_DIR)/ExampleTestAndApprovalTest.cc $(LD_LIBRARIES)

OnlyExampleTest : $(USER_DIR)/OnlyExampleTest.cc
	$(CXX) $(CPPFLAGS) $(CFLAGS) -o $@ $(USER_DIR)/OnlyExampleTest.cc $(LD_LIBRARIES)


clean :
	git clean -fx

test: ExampleTestAndApprovalTest
	./ExampleTestAndApprovalTest

exampleonly: OnlyExampleTest
	./OnlyExampleTest
