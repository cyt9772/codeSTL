#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <fstream> //file입출력
#include <sstream> //string 입출력
#include <string>
#include <list>
#include <unordered_set>
#include <memory>
#include <ratio>

#include "car.h"
#include "MyAlloc2.h"

using namespace std;

/*
template<intmax_t _Nx, intmax_t _Dx=1>
struct ratio
{
    static constexpr intmax_t num = _Nx;
    static constexpr intmax_t den = _Dx;

    typedef ratio<num, den> type;
};
*/
int main()
{
  ratio<2,4> r1;  // 2/4 => 1/2

  cout<<sizeof(r1)<<endl;
  cout<<r1.num<<endl;
  cout<<r1.den<<endl;

  cout<<ratio<2,4>::num<<endl;
  cout<<ratio<2,4>::den<<endl;


}
