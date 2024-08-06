#include "package1/package1.hpp"

int func(bool condition_a, bool condition_b, bool condition_c) {
  int count = 0;
  if (condition_a) {
    count++;
  } else {
    count--;
  }
  if (condition_b) {
    count++;
  } else {
    count--;
  }
  if (condition_c) {
    count++;
  } else {
    count--;
  }
  return count;
}

std::string add_world(std::string input) {
  if (input == "hello") {
    return input + " world!";
  } else {
    input += "!";
  }
  return input;
}