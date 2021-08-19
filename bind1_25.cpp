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
#include <functional>

#include "car.h"
#include "MyAlloc2.h"

using namespace std;
using namespace chrono;
using namespace std::placeholders;

void f1(int a, int b, int c) {printf("f1 :  %d, %d, %d\n", a,b,c);}
void f2(int& a){a=20;}

int main()
{
    bind(&f1, 1,2,3)();
    bind(&f1, 1,2,_1)(10);
    bind(&f1, 1,_2,_1)(10,20);

    int n=0;
    bind(&f2, n)();

    cout<<n<<endl;   //0

    reference_wrapper<int> r(n);
    bind(&f2, r)();
    cout<<n<<endl;   //20

    bind(&f2, ref(n))();

}
