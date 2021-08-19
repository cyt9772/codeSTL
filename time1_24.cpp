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
  using seconds = duration<int>; //default ratio<1,1>
  using minutes = duration<int, ratio<60>>;
  using hours = duration<int, ratio<3600>>;
  using milliseconds = duration<int, milli>;

  hours h(1);
  minutes m(h);
  seconds s(h);

  cout<<m.count()<<endl;
  cout<<s.count()<<endl;


  //hours h2(s);  //error, data loss
  hours h2=duration_cast<hours>(s);
  cout<<h2.count()<<endl;

  using days = duration<int, ratio<3600*24,1>>;
  days d(1);
  minutes m2(d);
  cout<<m2.count()<<endl;

}
