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

//error 발생
int main()
{
  modulus<int> m;

  int n=m(10,3);
  int x[5]={9,9,2,4,3};

  //3의 배수가 아닌 것을 찾고 싶을때
  find_if(x, x+5, m); //error 발생,  input 2개 넣어야 하는데 하나만 전달

  return 0;

}
