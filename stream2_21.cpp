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
  cout<<"hello"; //화면 출력
  ofstream f("a.txt");
  f << "hello"; //파일 출력

  ostringstream oss;
  //oss<<"hello"; //oss의 버퍼에 출력

  // string s = oss.str();
  // cout<<s<<endl;
  oss<<"n= "<< 10;
  string s3=oss.str();
  cout<<s3<<endl;

}
