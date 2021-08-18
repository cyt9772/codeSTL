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

void foo(Car *p)
{
  cout<<"Delete Car"<<endl;
  delete p;
}

int main()
{
  //shared_ptr<Car> p(new Car, foo); //delete, foo는 삭제자
  //shared_ptr<Car> p(new Car, [](Car *p) {delete p;});
  shared_ptr<Car> p(new Car, [](Car *p) {delete p;}, MyAlloc<Car>());

}
