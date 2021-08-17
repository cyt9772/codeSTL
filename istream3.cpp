#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;


int main()
{
  ifstream f("istream2.cpp");
  //istream_iterator<char> p1(f), p2;
  istreambuf_iterator<char> p1(f), p2;
  ostream_iterator<char> p3(cout);

  copy(p1,p2, p3);
}
