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


int main()
{
  vector<int> v1={1,2,3,4,5,6,7,8,9,10};
  vector<int> v2={0,0,0,0,0,0,0,0,0,0};
  //3을 제거하고 싶다면
  //auto p=remove(begin(v), end(v), 3);

  //3의 배수를 제거하고 싶다면(remvoe_if)
  //remove_if(begin(v1), end(v1), [](int a){return a%3==0;});

  //remove copy version
  //p는 v2의 반복자
  //auto p = remove_copy(begin(v1), end(v1), begin(v2), 3);

  //remove copy if
  auto p = remove_copy_if(begin(v1), end(v1), begin(v2), [](int a){return a%3==0;});

  v2.erase(p, end(v2));
  
  show(v1);
  show(v2);
  return 0;

}
