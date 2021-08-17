#include <iostream>
#include <algorithm>

#include "Point.h"
#include "MyAlloc.h"

using namespace std;

// template<typename T>
// class MyAlloc
// {
// public:
//
// };

int main()
{
    vector<Point, MyAlloc<Point>> v;
    v.emplace_back(0,0);
    
    MyAlloc<Point> a;
    Point* p=a.allocate(1);  //메모리할당;
    //a.construct(p, 1,2); //MyAlloc에는 construct/destroy가 미정의
    //a.destroy(p);
    allocator_traits<decltype(a)>::construct(a,p,1,2);
    //construct가 있으면 그대로 사용하고, 없다면 p의 위치에 생성
    allocator_traits<decltype(a)>::destroy(a,p);//destroy

    a.deallocate(p,1);  //1개를 해제
    //--------------------------------------------

}
