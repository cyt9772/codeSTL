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

class Worker :public enable_shared_from_this<Worker> //CRTP
{
  Car c;
  shared_ptr<Worker> holdMe;
public:
  void Run()
  {
    //holdMe=this;
    holdMe=shared_from_this();

    thread t(&Worker::Main, this);
    t.detach();
  }
  void Main()
  {
    c.Go();
    cout<<"finish thread"<<endl;
    holdMe.reset();
  }
};

int main()
{
  {
    shared_ptr<Worker> sp=make_shared<Worker>();
    sp->Run();
  }
  getchar();

}
