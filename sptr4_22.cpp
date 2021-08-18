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
  //shared_ptr<Car> p1(new Car[10], [](Car *p) {delete[] p;});
  //p1[0].Go(); //error, shared_ptr은 배열 미고려

  //shared_ptr<Car> p1(new Car[10]); //bug -delete[], [] 연산자 없음
  shared_ptr<Car[]> p1(new Car[10]);

  p1[0].Go();

}
