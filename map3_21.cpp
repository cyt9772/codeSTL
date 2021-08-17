#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <fstream> //file입출력
#include <sstream> //string 입출력
#include <string>
#include <list>

using namespace std;

// template<typename T>
// class MyAlloc
// {
// public:
//
// };

int main()
{
    map<string, list<int>> index;
    ifstream f("text.txt");

    int lineno=0;
    string s;
    while(getline(f,s))
    {
      lineno++;
      istringstream iss(s);
      string word;
      while(iss>>word)
      {
        index[word].push_back(lineno);
      }
    }

    auto p=begin(index);
    while(p !=end(index))
    {
      cout<<p->first<<" : ";
      for(auto n: p->second)
        cout<<n<<", ";

      cout<<endl;
      ++p;
    }
}
