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

#include "car.h"
#include "MyAlloc2.h"

using namespace std;


int main()
{
  ratio_add<ratio<1,4>, ratio<2,4>> r2; //1/4, 2/4

  cout<<r2.num<<endl;
  cout<<r2.den<<endl;

  ratio<1,1000> r3; //milli
  ratio<1000,1> r4; //kilo

  milli m;
  kilo k;
  cout<<k.num<<endl;
  cout<<k.den<<endl;
  
}
