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

int foo(int a, int b) {return a+b;}

int main()
{
  list<int> s1={1,2,3,4,5};
  list<int> s2={1,2,3,4,5};
  list<int> s3={0,0,0,0,0};
  //transform(begin(s1), end(s1), begin(s2), foo);  //차례대로 받아서 처리

  //begin(s1), begin(s2)를 함께 foo의 인자로 전달후 s3로 저장
  //transform(begin(s1), end(s1), begin(s2), begin(s3), foo);
  //transform(begin(s1), end(s1), back_inserter(s2), foo);  //s2의 뒤에 추가
  //functional
  //transform(begin(s1), end(s1), begin(s2), begin(s3), multiplies<int>());
  //람다 표현식
  transform(begin(s1), end(s1), begin(s2), begin(s3), [](int a, int b){return a+b;});
  show(s3);

  return 0;

}
