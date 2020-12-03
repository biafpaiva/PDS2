#include <sstream>
#include <string.h>

#include "CommaDecorator.hpp"

std::string CommaDecorator::toString() {
  int i = 0;
  std::string aux = " , ";
  for (i = 0; i < StreamDecorator::toString().size(); i++) {
    if (StreamDecorator::toString()[i] == ' ') 
      StreamDecorator::toString().insert(i,aux);
  }
  return StreamDecorator::toString();
}
