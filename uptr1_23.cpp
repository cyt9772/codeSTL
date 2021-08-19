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
  shared_ptr<int> sp(new int);
  unique_ptr<int> up(new int);

  //shared_ptr<int> sp1=up;  //error
  shared_ptr<int> sp2=move(up); //ok

  //unique_ptr<int> up1=sp; //error
  unique_ptr<int> up2=move(sp); //error

}
