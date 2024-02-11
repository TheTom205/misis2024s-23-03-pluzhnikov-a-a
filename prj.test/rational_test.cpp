#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
//#include "../prj_lab/rational/rational.hpp"
#include <rational/rational.hpp>

TEST_CASE("rational"){
Rational r_def;
CHECK(0 == r_def.num());
CHECK(1 == r_def.den());

Rational r_int(3);
CHECK(3 == r_int.num());
CHECK(1 == r_int.den());

CHECK_THROWS(Rational(1, 0));

Rational r1, r2;
r1 = Rational(2), r2 = Rational(2);
CHECK(r1 == r2);

r1 = Rational(1, 10), r2 = Rational(1, 2);
CHECK(r1 + r2 == Rational(3, 5));
r1 += r2;
CHECK(r1 == Rational(3, 5));

r1 = Rational(1, 2), r2 = Rational(1, 2);
CHECK(r1 - r2 == Rational());
r1 -= r2;
CHECK(r1 == Rational());

r1 = Rational(4, 5), r2 = Rational(1, 2);
CHECK(r1 * r2 == Rational(2, 5));
r1 *= r2;
CHECK(r1 == Rational(2, 5));

r1 = Rational(1, 6), r2 = Rational(1, 2);
CHECK(r1 / r2 == Rational(1, 3));
r1 /= r2;
CHECK(r1 == Rational(1, 3));

//r1 = {1, 10}, r2 = 0;
//CHECK_THROWS(r1 / r2);

//r1 /= r2;
//CHECK(r1 == Rational(3, 5));
}

/*int main(){
  Rational r1 = Rational();
  std::cout << r1 << "\n";
  Rational r2 = Rational(1, 2);
  std::cout << (r1 == r2) << "\n";
  std::cout << (r1 != r2) << "\n";
  r1 *= r2;
  std::cout << r1 << ' ' << r2 << "\n";
  r1 += r2;
  std::cout << r1 << ' ' << r2 << "\n";
  r1 -= r2;
  std::cout << r1 << ' ' << r2 << "\n";
  r1 = Rational(2, 5);
  r2 = Rational(1, 2);
  r1 /= r2;
  std::cout << r1 << ' ' << r2 << "\n";
  r1 = Rational(2, 5);
  r2 = Rational(3, 7);
  std::cout << r1 + r2 << "\n";
  std::cout << r1 - r2 << "\n";
  std::cout << r1 * r2 << "\n";
  std::cout << r1 / r2 << "\n";
}*/