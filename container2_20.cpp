#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <vector>
#include <deque>

using namespace std;
using namespace std::rel_ops;

//Stack 생성
// template<typename C=deque<T>> class Stack
// {
//   C st;
// public:
//   inline void push(const T& a) {st.push_back(a);}
//   inline void pop() {st.pop_back();}
//   inline T& top() {return st.back();}
//   inline bool empty() {return st.empty();}
// };


int main()
{
  stack<int> s2;
  stack<int, vector<int>> s1;
  stack<int, list<int>> s;
  s.push(10);
  s.push(20);

  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
}
