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
void foo(seconds s) {}

int main()
{
  seconds s1(3); //ok, explicit 생성자는 이 type만 지원
  //seconds s2=3; //error!!
  seconds s2=3s; //3초
  seconds s3=3min;

  cout<<s3.count()<<endl;

  //foo(3) //error
  foo(3s); //ok


  this_thread::sleep_for(3ms);

  seconds s5=3min+40s;
  cout<<s5.count()<<endl;
}
