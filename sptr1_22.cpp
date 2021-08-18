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

using namespace std;

class Car
{
  int color;
public:
  ~Car() { cout<<"~Car()"<<endl;}
  void Go(){cout<<"Car Go"<<endl;}
};

int main()
{
  //Car *p=new Car();
  shared_ptr<Car> p(new Car);

  p->Go();
  (*p).Go();

}
