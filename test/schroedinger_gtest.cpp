#include <iostream>
#include "gtest/gtest.h"
#include "hungarian_gtest.h"
using namespace std;

int main(int argc, char **argv)
{
    std::cout << "Running main() from " __FILE__ "\n";
    testing::InitGoogleTest(&argc, argv);
    int res = RUN_ALL_TESTS();
    return res;
}