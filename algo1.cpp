#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
#include "ecourse_stl.hpp"
using namespace std;


int main()
{
  vector<int> v={1,2,3,1,2,3,1,2,3,1};
  auto p=remove(begin(v), end(v), 3);
  show(v);
  v.erase(p, end(v));

  show(v);
  return 0;

}
