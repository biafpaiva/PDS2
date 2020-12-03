#include <sstream>
#include <regex>

#include "NumberDecorator.hpp"

std::string NumberDecorator::toString() {
  int i = 0; 
  std::stringstream ss(StreamDecorator::toString());
  std::regex _int ("[[:digit:]]+");
  if (std::regex_match (StreamDecorator::toString(), _int))
    std::regex_replace (StreamDecorator::toString(), _int, "+$&");
    
    return StreamDecorator::toString();
}