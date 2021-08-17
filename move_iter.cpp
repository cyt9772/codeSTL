#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
using namespace std;

class People
{
  std::string name;
public:
  People(std::string s) : name(s){}
  People(const People& p): name(p.name)
  {
    std::cout<<"copy"<<std::endl;
  }
  People(People&& p) noexcept: name(std::move(p.name)){
    std::cout<<"move"<<std::endl;
  }
  People& operator=(const People& p)
  {
    name = p.name;
    std::cout<<"copy="<<std::endl;
    return *this;
  }
  People& operator=(People&& p) noexcept
  {
    name = std::move(p.name);
    std::cout<<"move="<<std::endl;
    return *this;
  }
};

int main()
{
  vector<People> v;
  v.push_back(People("A"));
  v.push_back(People("B"));
  v.push_back(People("C"));
  v.push_back(People("D"));

  cout<<"---------------------------------"<<endl;

  //vector 복사
  //vector<People> v2(begin(v), end(v));
  //vector 이동(=move)
  vector<People> v2(make_move_iterator(begin(v)), make_move_iterator(end(v)));
/*
  auto p1=begin(v);

  People peo1= *p1; //복사 생성자

  //방법 1.
  move_iterator<vector<People>::iterator> p2(p1);
  People peo2 = *p2; //move 생성자
  People peo3 = move(*p1);

  //방법 2.
  auto p3=make_move_iterator(begin(v));
*/
}
