#include<iostream>
#include<iterator>

using namespace std;

int main(){
  //ostream_iterator<int> p(cout,", ");
  ostreambuf_iterator<char> p(cout);

  *p=65;
  return 0;
}
