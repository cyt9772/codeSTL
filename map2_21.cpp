#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>


using namespace std;

// template<typename T>
// class MyAlloc
// {
// public:
//
// };

int main()
{
  map<int, string> m; //pair를 저장하는 set
  m[1]="ONE";
  m[0]="ZERO";
  m[2]="TWO";

  auto p= begin(m);
  cout<<p->first<<endl;
  cout<<p->second<<endl;
  
}
