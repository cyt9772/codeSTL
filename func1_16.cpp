#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
#include "ecourse_stl.hpp"
#include <functional>

using namespace std;

int main()
{
  plus<int> p;
  cout<< p(1,2)<<endl;

  multiplies<int>m;
  cout<<m(3,4)<<endl;

  return 0;

}
