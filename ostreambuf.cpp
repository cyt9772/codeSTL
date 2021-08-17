#include<iostream>
#include<iterator>

using namespace std;

int main(){
  ostream_iterator<int> p1(cout, ", ");
  *p1=10;
  //ostreambuf_iterator<char> p2(cout);
  ostreambuf_iterator<char> p2(cout.rdbuf());
  *p2='A';
  //unicode
  ostreambuf_iterator<wchar_t> p3(wcout.rdbuf());
  *p3=L'B';

  cout<<endl;
  return 0;
}
