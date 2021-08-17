#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
#include <string>
#include "ecourse_stl.hpp"
#include <functional>

using namespace std;

int foo(int a) {return a+10;}

int main()
{
  list<int> s1={1,2,3,4,5};
  list<int> s2={0,0,0,0,0};
  //transform(begin(s1), end(s1), begin(s2), foo);  //차례대로 받아서 처리
  transform(begin(s1), end(s1), back_inserter(s2), foo);

  show(s2);

  return 0;

}
