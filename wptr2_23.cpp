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
  //shared_ptr<Car> wp;
  //shared_ptr<Car> sp(new Car); use_count 증가
  weak_ptr<Car> wp; //use count 증가 안함

  shared_ptr<Car> sp(new Car);
  sp=sp;
  cout<<sp.use_count()<<endl;


  if(wp.expired())
    cout<<"destroy"<<endl;
  else
  {
    cout<<"alive"<<endl;
    // wp->Go(); wp로는 객체 접근 불가, shared_ptr로 다시 할당
    shared_ptr<Car> sp2=wp.lock();
    if(sp2)
      sp2->Go();

  }
}
