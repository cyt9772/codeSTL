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
  using MilliMeter = duration<int, milli>;
  using KiloMeter = duration<int, kilo>;
  using Meter = duration<int, ratio<1,1>>;

  Meter m(600);
  MilliMeter mm(m);
  //KiloMeter km(m);  //error, data loss happened
  //KiloMeter km=duration_cast<KiloMeter>(m);
  KiloMeter km=round<KiloMeter>(m);

  cout<<mm.count()<<endl;
  cout<<km.count()<<endl;


}
