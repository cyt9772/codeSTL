#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
using namespace std;


int main()
{
  int x[10]={1,2,3,4,5,6,7,8,9,10};
  forward_list<int> s={1,2,3,4,5,6,7,8,9,10};
  auto p1=next(begin(s));
  cout<<*p1<<endl;

}
