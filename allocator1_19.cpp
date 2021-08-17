#include <iostream>
#include <algorithm>

#include "Point.h"

using namespace std;
template<typename T>
class MyAlloc
{
public:

}

int main()
{
    allocator<Point> a;
    Point* p=a.allocate(1);  //메모리할당;
    a.construct(p, 1,2);

    a.destroy(p);
    a.deallocate(p,1);  //1개를 해제
    //--------------------------------------------

}
