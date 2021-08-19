#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <fstream> //file입출력
#include <sstream> //string 입출력
#include <string>
#include <list>
#include <unordered_set>
#include <memory>
#include <thread>

#include "car.h"
#include "MyAlloc2.h"

using namespace std;

struct People
{
  People(string s) : name(s) {}
  ~People(){cout<<"~People: "<<name<<endl;}

  string name;
  weak_ptr<People> bf; //best friend
};

int main()
{
  shared_ptr<People> p1(new People("KIM"));
  {
    shared_ptr<People> p2(new People("LEE"));

    p1->bf=p2;
    p2->bf=p1;  //상호참조일 경우 메모리 해제 안됨
  }
  // if(p1->bf.expired())
  //   cout<<p1->bf->name<<endl;
  shared_ptr<People> sp2 = p1->bf.lock();
  if(sp2)
    cout<<sp2->name<<endl;
  else
    cout<<"destroy bf"<<endl;
}
