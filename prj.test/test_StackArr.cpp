//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <sstream>
//#include "doctest.h"
#include <StackArr/StackArr.h>
#include <complex/complex.hpp>

int main() {
    StackArr a;
    for(int i=0;i<17;i++){
        a.Push(i);
    }



   int b = a.Top();
    std::cout << b;
}



//TEST_CASE("TEST") {
//    StackArr a;
//    a.Push(4);
//    CHECK_EQ(a.IsEmpty(),1);
//}

//        CHECK(a.Size() == 5);
//        for (int i = 0; i < 5; ++i)
//            CHECK(a[i] == 0);
//
//        DynArr b(500);
//        CHECK(b.Size() == 500);
//        for (int i = 0; i < 500; ++i)
//            CHECK(b[i] == 0);
//    }
//    SUBCASE("copy") {
//        DynArr a(500);
//        for (int i = 0; i < 500; ++i)
//            a[i] = i;
//
//        DynArr b(a);
//        CHECK(b.Size() == 500);
//        for (int i = 0; i < 500; ++i)
//            CHECK(b[i] == i);
//
//        b[0] = 6;
//        CHECK(b[0] == 6);
//        CHECK(a[0] == 0);
//    }
//    SUBCASE("check error")
//    {
//        CHECK_THROWS(DynArr(-1));
//        CHECK_THROWS(DynArr(0));
//    }
//}
//
//TEST_CASE("appr") {
//    SUBCASE("appr with empty") {
//        DynArr a;
//        DynArr b(5);
//        for (int i = 0; i < 5; ++i)
//            b[i] = i;
//        a = b;
//        CHECK(a.Size() == 5);
//        for (int i = 0; i < 5; ++i)
//            CHECK(a[i] == i);
//    }
//    SUBCASE("appr with full") {
//        DynArr a(5);
//        DynArr b(5);
//        for (int i = 0; i < 5; ++i)
//            b[i] = i;
//        a = b;
//        CHECK(a.Size() == 5);
//        for (int i = 0; i < 5; ++i)
//            CHECK(a[i] == i);
//    }
//}
//
////TEST_CASE("resize") {
////    SUBCASE("resize empty")
////    {
////        DynArr a;
////        a.Resize(10);
////        CHECK(a.Size() == 10);
////        for (int i = 0; i < 10; ++i)
////            CHECK(a[i] == 0);
////    }
////    SUBCASE("resize full >") {
////        DynArr a(5);
////        CHECK(a.Size() == 5);
////        for (int i = 0; i < 5; ++i)
////            CHECK(a[i] == 0);
////        a.Resize(10);
////        CHECK(a.Size() == 10);
////        for (int i = 0; i < 10; ++i)
////            CHECK(a[i] == 0);
////    }
////    SUBCASE("resize full <") {
////        DynArr a(5);
////        CHECK(a.Size() == 5);
////        for (int i = 0; i < 5; ++i)
////            CHECK(a[i] == 0);
////        a.Resize(3);
////        CHECK(a.Size() == 3);
////        for (int i = 0; i < 3; ++i)
////            CHECK(a[i] == 0);
////    }
////    SUBCASE("check error") {
////        DynArr a;
////        CHECK_THROWS(a.Resize(-1));
////        DynArr b(5);
////        CHECK_THROWS(b.Resize(0));
////    }
////}