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
class Shape {};
class Rect : public Shape {};
class Circle : public Shape {};

unique_ptr<Shape> CreateShape(int type)  //main에서 사용시 unique_ptr, shared_ptr 둘 다 사용 가능
{
  unique_ptr<Shape> p(nullptr);
  switch(type)
  {
    case 1: p.reset(new Rect); break;
    case 2: p.reset(new Circle); break;
  }
  return p;
}

int main()
{
  shared_ptr<Shape> p =CreateShape(1);
}
