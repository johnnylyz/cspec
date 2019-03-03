#include "geometry/rectangle.h"
#include <iostream>

int main(int argc, char** argv) {
  Rectangle rect;
  rect.width = 2;
  rect.height = 3;

  std::cout << rectangle_area(&rect) << std::endl;
}
