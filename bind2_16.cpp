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
using namespace std::placeholders; //bind 함수 사용 시 필요


void foo(int a, int b, int c, int d)
{
  printf("%d %d %d %d\n", a,b,c,d);
}

int main()
{
  //foo(1,2,3,4); //4항 함수

  //4항 => 2항으로 변경
  bind(&foo, 10, _2, _1, 20)(1,2);

  //4항 => 3항으로 변경
  bind(&foo, _3, _2, _1, 100)(30,20,10);

  //4항을 무항으로
  bind(&foo, 1,2,3,4)();

  modulus<int> m;
  cout<<m(10,3)<<endl;

  bind(m,10,3)(); //10%3
  bind(m, _1, 3)(7); //7%3

  int x[3]={1,2,3};

  auto p=find_if(x, x+3, bind(m, _1,3));

  cout<<*p<<endl;
  return 0;

}
