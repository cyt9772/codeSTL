#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>

using namespace std;


int main()
{
  list<int> s={1,2,3,4,5,6,7,8,9,10};

  auto p1=begin(s);
  auto p2=end(s);

  reverse_iterator<list<int>::iterator> r1(p2); //첫번째 방법
  auto r2=make_reverse_iterator(p2); //두번째 방법
  auto r3=s.rbegin();
  auto r4=rbegin(s);

  cout<<*r1<<endl;
  cout<<*r2<<endl;
  cout<<*r3<<endl;
  cout<<*r4<<endl;

  //auto ret=find(rbegin(s), rend(s),3) 가장 많이 사용하는 형태
}
