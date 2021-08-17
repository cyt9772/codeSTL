#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
#include "ecourse_stl.hpp"
using namespace std;

struct Plus
{
  int operator()(int a, int b) const
  {
      return a+b;
  }
};

int main()
{
  Plus p;
  int n=p(1,2);
  cout<<n<<endl;
  return 0;

}
