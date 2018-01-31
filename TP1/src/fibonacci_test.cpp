#include "fibonacci.hpp"

#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(FibonacciTest) { };

TEST(FibonacciTest, test_fibo_recursif) {
  CHECK_EQUAL(fibonacciRecursif(0), 0);
  CHECK_EQUAL(fibonacciRecursif(1), 1);
  CHECK_EQUAL(fibonacciRecursif(2), 1);
  CHECK_EQUAL(fibonacciRecursif(3), 2);
  CHECK_EQUAL(fibonacciRecursif(4), 3);
}

TEST(FibonacciTest, test_fibo_iteratif) {
  CHECK_EQUAL(fibonacciIteratif(0), 0);
  CHECK_EQUAL(fibonacciIteratif(1), 1);
  CHECK_EQUAL(fibonacciIteratif(2), 1);
  CHECK_EQUAL(fibonacciIteratif(3), 2);
  CHECK_EQUAL(fibonacciIteratif(4), 3);
}
