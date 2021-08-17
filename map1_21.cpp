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
  map<string, string> m; //pair를 저장하는 set
  //1. pair 만들어서 insert
  pair<string, string> p1("월요일", "Mon");
  m.insert(p1);

  //make_pair 사용
  m.insert(make_pair("화요일","Tue"));

  //3. [] 연산
  m["수요일"]="Wed";

  cout<<m["월요일"]<<endl;
  //cout<<m["토요일"]<<endl; find를 사용해야 함
  auto ret=m.find("토요일");
  if(ret==m.end())
    cout<<"fail"<<endl;

}
