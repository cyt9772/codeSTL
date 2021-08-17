#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
#include <string>
#include "ecourse_stl.hpp"
#include <functional>

using namespace std;


int main()
{
  vector<int> v1={1,2,3};

  find(begin(v1), end(v1), 3);
  find_if(begin(v1), end(v1), foo);

  sort(begin(v1), end(v1)); // <로 비교(내림차순으로 정렬)
  sort(begin(v1), end(v1), goo); //비교할때 goo, 함수가 붙음에도 sort_if라고 사용 안함.

  vector<int> v2={0,0,0};
  //3을 제거 후 v2에 저장, sort_copy는 없음 주의(성능향상이 크지 않음)
  remove_copy(begin(v1), end(v1), begin(v2), 3);


  return 0;

}
