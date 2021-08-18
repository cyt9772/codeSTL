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

using namespace std;

struct Point
{
  int x,y;
  Point(int a=0, int b=0) : x(a), y(b) {}
};

struct PointHash
{
    int operator()(const Point& p) const
    {
        hash<int> hi;
        return hi(p.x)+hi(p.y);
    }
};

struct PointEqual
{
    bool operator()(const Point& p1, const Point& p2) const
    {
        return p1.x==p2.x && p1.y==p2.y;
    }
};

int main()
{
    unordered_set<Point, PointHash,PointEqual> s;
    s.insert(Point(1,1));
    s.insert(Point(2,2));
    s.insert(Point(3,4));

    s.find(Point(1,1));
}
