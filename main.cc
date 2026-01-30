// main.cc

#include <iostream>

namespace {

const std::string msg = R"(
 ### Hello World! ###
)";

void hello() { std::cout << msg << std::endl; }

}

int main(int argc, char** argv, char** nvp) {
  hello();
  return EXIT_SUCCESS;
}

// EOF
