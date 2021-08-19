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


int main()
{
  unordered_set<int> s;

  s.insert(30);
  s.insert(40);
  s.insert(20);
  s.insert(10);
  s.insert(45);
  s.insert(25);

  for(auto n:s)
    cout<<n<<endl;
}
