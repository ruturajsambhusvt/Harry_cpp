// vector::begin/end
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);
  
//   std::vector<double> vel{1.1,2.3,4.3,1.3,4.3,3.3,1.4};
  std::vector<double> vel{0.2, 1.4, 3.4, 0.4, 3.4, 2.4, 0.5};
  std::vector<double> lim{1,1,1,1,1,1,1};
  double limit = 1;
  

  std::cout << "myvector contains:";
//   for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
//     std::cout << ' ' << *it;
//     std::cout << '\n';

  
  for(std::vector<double>::iterator it = vel.begin();it!=vel.end();++it){
      if(*it>=limit){
          *it-=0.9;
          };
      
      }
      
  for(std::vector<double>::iterator it = vel.begin();it!=vel.end();++it)
  std::cout << ' ' << *it;
    


  return 0;
}