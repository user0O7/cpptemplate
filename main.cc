// main.cc

#include <iostream>

namespace {

void hello() { std::cout << "Hello Wrld!" << std::endl; }

}

int main(int argc, char** argv, char** nvp) {
  hello();
  return EXIT_SUCCESS;
}

// EOF
