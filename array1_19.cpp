#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <deque>
#include <fstream>
#include <algorithm>
#include <array>

#include "ecourse_stl.hpp"

using namespace std;

// template<typename T, int N> struct array
// {
//     T buf[N];
//     typedef  T* iterator;
//     iterator begin() {return buf;}
//     iterator end() {return buf +N; }
//
//     int size() const { return N;}
// };

int main()
{
  // int x[5];
  // vector<int> v(5);
  array<int, 5> arr={1,2,3,4,5};

  cout<<arr.size()<<endl;

}
