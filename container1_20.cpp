#include <iostream>
#include <algorithm>
#include <list>

using namespace std;
using namespace std::rel_ops;

//Stack 생성
template<typename T> class Stack
{
  list<T> st;
public:
  inline void push(const T& a) {st.push_back(a);}
  inline void pop() {st.pop_back();}
  inline T& top() {return st.back();}
  inline bool empty() {return st.empty();}
};


int main()
{
  Stack<int> s;
  s.push(10);
  s.push(20);

  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
}
