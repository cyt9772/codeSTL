#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
using namespace std;


int main()
{
  vector<int> v={1,2,3,4,5,6,7,8,9,10};
  auto p=find(begin(v), end(v), 3);

  return 0;

}
