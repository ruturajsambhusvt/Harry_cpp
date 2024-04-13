#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
#include <vector>

int main () {


  std::vector<char> buffer = {'s','1','.','2','3','4','5','6','7','s','8','9',};
  
  std::stringstream ss(buffer.data());

//   ss << 100 << ' ' << 200;

//   int foo,bar;
//   ss >> foo >> bar;

//   std::cout << "foo: " << foo << '\n';
//   std::cout << "bar: " << bar << '\n';
//   std::cout << "ss: " << ss << '\n';
  std::string s = ss.str();
  std::cout << s << '\n';
//   std::string substr;
//   getline(ss,substr,',');
//   double term = std::stod(substr);
  

  return 0;
}