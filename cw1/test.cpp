#include "acutest.h"
#include "gs.cpp"

// Example test case
void type_check() {
    init(); // Make sure to initialize before testing
    TEST_CHECK((std::is_same<decltype(u)::value_type::value_type, double>::value));
    TEST_CHECK((std::is_same<decltype(v)::value_type::value_type, double>::value));

}

void size_check()
{
    init();
    TEST_CHECK(u.size() == v.size());
    TEST_CHECK(u[0].size() == v[0].size());
}

void mathAnswerCheck()
{
    init();
    for (int iteration = 0; iteration < numIterations; ++iteration) {
        simulateStep();
    }
    double n = countElementsAboveThreshold(threshold);
    TEST_CHECK(n >= 0.0 && n <= 1.0);
}

// Main function to run all test cases
TEST_LIST = {
    { "Type_check", type_check },
    { "Size_check", size_check },
    { "Answer_check", mathAnswerCheck },
    { NULL, NULL }
};
