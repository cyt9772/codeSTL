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

bool foo(int a){return a%3==0;}
int main()
{
  vector<int> v={6,9,3,1,2};
  //3의 배수를 찾고 싶다.(find_if)
  //auto p=find(begin(v), end(v), 3);
  auto p1=find_if(begin(v), end(v), foo);
  cout<<*p1<<endl;

  //람다 표현으로 처리
  auto p2=find_if(begin(v), end(v), [](int a) {return a%3==0;});
  cout<<*p2<<endl;


  return 0;

}
