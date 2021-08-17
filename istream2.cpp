#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;


int main()
{
  ifstream f("istream2.cpp");
  istream_iterator<char> p1(f);
  ostream_iterator<char> p3(cout);

  *p3=*p1;
}
