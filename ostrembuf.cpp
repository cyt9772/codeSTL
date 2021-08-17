#include<iostream>
#include<iterator>

using namespace std;

int main(){
  cout<<65;

  streambuf* buf = cout.rdbuf();

  buf->sputc(65);

  return 0;
}
