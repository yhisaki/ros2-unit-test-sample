#include "package3/package3.hpp"

int dangerous_function() {
  double x = 1.0;
  x = x++ + ++x; // Undefined behavior
  return x;
}