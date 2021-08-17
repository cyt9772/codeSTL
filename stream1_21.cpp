#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <fstream> //file입출력
#include <sstream> //string 입출력
#include <string>

using namespace std;

// template<typename T>
// class MyAlloc
// {
// public:
//
// };

int main()
{
  string s;
  cin>>s;
  cout<<s<<endl;

  ifstream fin("stream1_21.cpp");
  fin>>s;
  cout<<s<<endl;

  istringstream iss("I am a boy");
  while(iss>>s)
    cout<<s<<endl;
}
