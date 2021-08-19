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
void* operator new(size_t sz)
{
  cout<<"new sz"<<sz<<endl;
  return malloc(sz);
}

int main()
{
  //shared_ptr<Car> p1(new Car);
  //shared_ptr<Car> p1=make_shared<Car>();  //객체와 제어블럭을 동시에 생성

  //f(shared_ptr<Car>(new Car), foo());//car 할당, shared_ptr 생성, foo에서 return값 받아오고, f에 할당
  //f(make_shared<Car>(), foo()) //효율적


  //삭제자 변경하고 싶을때는
  shared_ptr<Car> p1 = allocate_shared<Car>(MyAlloc<Car>());
}
