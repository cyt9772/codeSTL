#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <vector>
#include <deque>
#include <functional>
#include <string>
#include <unordered_set>

using namespace std;
using namespace std::rel_ops;

struct Point
{
    int x,y;
    Point (int a=0, int b=0) : x(a), y(b) {}
};

int main()
{
  //set<Point> s;
  unordered_set<Point> s;

  s.insert(Point(1,1));  //해쉬함수에 전달
  s.insert(Point(2,2)); //==도 필요
  s.insert(Point(3,4));

  s.find(Pont(1,1));
}
