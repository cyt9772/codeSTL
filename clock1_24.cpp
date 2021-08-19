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
#include <thread>

#include "car.h"
#include "MyAlloc2.h"

using namespace std;
using namespace chrono;

int main()
{
  system_clock::time_point tp=system_clock::now();
  //1970.1.1 0시 기준
  nanoseconds ns = tp.time_since_epoch();
  cout<<ns.count()<<endl;

  hours h = duration_cast<hours>(ns);
  cout<<h.count()<<endl;

  //time_point => string
  time_t t=system_clock::to_time_t(tp);
  string s = ctime(&t);
  cout<<s<<endl;
}
