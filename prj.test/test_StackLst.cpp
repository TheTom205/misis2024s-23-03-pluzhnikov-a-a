//
// Created by thetom205 on 2/18/24.
//
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <StackLst/StackLst.h>
#include <complex/complex.hpp>
//#include "iostream"
#include "doctest.h"
//int main() {
//    StackArr a;
//    for(int i=0;i<17;i++){
//        a.Push(i);
//    }
//
//
//
//   int b = a.Top();
//    std::cout << b;
//}
//
TEST_CASE("TEST") {
  StackLst a;
  Complex num(1, 6);
  a.Push(num);
  a.Pop();
  Complex num1(1, 8);
  a.Push(num1);
  std::cout<<a.IsEmpty();
}