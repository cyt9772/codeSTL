#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>

using namespace std;

template<typename ITER> class Reverse_iterator
{
  ITER iter;
public:
  Reverse_iterator(ITER i) {iter=i; --iter;}
  Reverse_iterator& operator++()
  {
    --iter;
    return *this;
  }
  typename ITER::value_type operator*()
  {
    return *iter;
  }
};
int main()
{
  list<int> s={1,2,3,4,5,6,7,3,9,10};

  auto p1=end(s);

  Reverse_iterator<list<int>::iterator> p2(p1);
  ++p2;
  ++p2;
  
  cout<<*p2<<endl;
}
