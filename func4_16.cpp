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

void foo(int& a)
{
  a=a*2;
}

struct Show
{
  string sep;
  ostream& os;
  Show(ostream& o=cout, string s="\n"): os(o), sep(s) {}

  void operator()(int a) const
  {
    os<< a <<sep;
  }
};

int main()
{
  vector<int> v={1,2,3,4,5,6,7,8,9,10};
  //1.일반 함수 전달
  for_each(begin(v), end(v), foo);
  //2.함수 객체를 전달.
  Show s(cout, "\t");
  for_each(begin(v), end(v), s);

  //람다표현식
  for_each(begin(v),end(v), [](int a){cout << a << endl;});
  show(v);

  return 0;

}
