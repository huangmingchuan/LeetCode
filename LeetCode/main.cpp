#define CATCH_CONFIG_MAIN
#include "catch.hpp"
// main 函数文件里只放这两行，这样 catch.hpp 就只需编译一次, testcase.cpp 文件中的代码任意改动不会影响 catch.hpp
// 反之, 如果 catch.hpp 和 测试代码在同一个文件中, 则每次改动测试代码都会编译 catch.hpp
// 于是这样可以加快编译速度(每次编译catch.hpp需要2s)