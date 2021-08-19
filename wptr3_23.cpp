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


int main()
{
  weak_ptr<Car> wp;

  {
    shared_ptr<Car> sp(new Car);
    wp=sp;
  }
  if(wp.expired()) {}
}
