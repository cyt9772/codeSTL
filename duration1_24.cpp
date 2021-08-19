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
#include <ratio>
#include <chrono>

#include "car.h"
#include "MyAlloc2.h"

using namespace std;
using namespace chrono;

int main()
{
  //double distance=3;  //km, m, cm 분별 불가
  duration <double, ratio<1,1>> d1(3);  //m
  //duration <double, ratio<1,1000>> d2(d1);  //mm
  duration <double, milli> d2(d1);
  cout<<d2.count()<<endl;

  //duration<double, ratio<1000,1>> d3(d1);
  duration<double, kilo> d3(d1);
  cout<<d3.count()<<endl;

  using MilliMeter = duration<double, milli>;
  using KiloMeter = duration<double, kilo>;
  using Meter = duration<double, ratio<1,1>>;

  Meter m(3);
  KiloMeter km(m);

  cout<<km.count()<<endl;

}
