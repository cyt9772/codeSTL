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

#include "car.h"
#include "MyAlloc2.h"

using namespace std;

int main()
{
  shared_ptr<Car> p1(new Car);
  p1->Go();
  //p1은 shared_ptr의 객체이므로 자체 멤버함수 접근 가능
  Car* p=p1.get();
  cout<<p<<endl;

  shared_ptr<Car> p2=p1;
  cout<<p1.use_count()<<endl;

  p1.reset(new Car); //자원 reset 후 새로운 자원 할당
  p1.reset();
  p1.swap(p2);




}
