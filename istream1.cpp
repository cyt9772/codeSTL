#include <iostream>
#include <iterator>
using namespace std;


int main()
{
  char a=0, b=0, c=0;
  //cin>>a;
  //cin>>b;
  //cin>>c;
  a=cin.rdbuf()->sgetc();
  b=cin.rdbuf()->snextc();
  c=cin.rdbuf()->snextc();

  cout<<a<<","<<b<<","<<c<<endl;
}
