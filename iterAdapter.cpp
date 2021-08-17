#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>

using namespace std;


int main()
{
  list<int> s={1,2,3,4,5,6,7,3,9,10};

  auto p1=begin(s);
  auto p2=end(s);

  reverse_iterator<list<int>::iterator> p3(p2);
  reverse_iterator<list<int>::iterator> p4(p1);
  ++p3;
  cout<< *p3<<endl;
  ++p3;
  cout<< *p3<<endl;

  --p2;
  cout<<*p2<<endl;

  auto ret1=find(p1, p2, 3);
  auto ret2=find(p3, p4, 3);
  // cout<< ret << endl;

}
