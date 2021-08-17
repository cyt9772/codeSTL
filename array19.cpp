#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <deque>
#include <fstream>
#include <algorithm>

#include "ecourse_stl.hpp"

using namespace std;

struct FindChar
{
  string data;
  FindChar(string s): data(s) {}
  bool operator()(char c) const
  {
    auto p=find(begin(data), end(data), c);
    return p !=end(data);
  }
};


int main()
{
  vector<string> v;

  ifstream f("vector4_19.cpp");
  string s;
  //f>>s; //한 단어 입력
  while(getline(f,s))
    v.push_back(s);

  //reverse(begin(v), end(v));  //reverse
  for(int i=0; i<v.size();i++){
    //reverse(begin(v[i]), end(v[i]));
    //replace(begin(v[i]), end(v[i]), 'i', ' ');
    //모든 모음을 공백으로 치환
    //replace_if(begin(v[i]), end(v[i]), [](char c){return c=='a';}, ' ');
    FindChar fc("aieouAIEOU");
    replace_if(begin(v[i]), end(v[i]), fc, ' ');
  }

  for(auto str: v)
    cout<<str<<endl;

}
