#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
#include "ecourse_stl.hpp"
#include <functional>

using namespace std;

void foo(int& a)
{
  a=a*2;
}

int main()
{
  vector<int> v={1,2,3,4,5,6,7,8,9,10};

  for_each(begin(v), end(v), foo);  //start부터 end까지를 foo로 전달
  show(v);

  return 0;

}
