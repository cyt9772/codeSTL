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

using namespace std;


int main()
{
  int a=0;
  int a1(0);

  //shared_ptr<Car> p = new Car;  Error!!!
  shared_ptr<Car> p1(new Car);

}
