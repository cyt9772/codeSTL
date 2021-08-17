#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <deque>
#include <fstream>
#include <algorithm>

#include "ecourse_stl.hpp"

using namespace std;
void print(int* arr, int sz)
{
  for(int i=0;i<sz;i++)
    cout<<arr[i]<<endl;
}

int main()
{
  // int array[10]={1,2,3,4,5,6,7,8,9,10};
  vector<int> v={1,2,3,4,5,6,7,8,9,10};
  print(v.data(), v.size());

}




/*


template<typename T,
         typename Traits = std::char_traits<T>,   // 비교 정책 클래스
         typename Allocator = std::allocator<T>>
class basic_string
{
    T* buff;

    bool operator==(const basic_string& s)
    {
        //strcmp(buff, s.buff);

        Traits::compare( buff, s.buff, sizeof(buff));
    }
};

using string = basic_string<char>;
//using wstring = basic_string<wchar_t>;



int main()
{
    string s1 = "abcd";
    string s2 = "ABCD";

    if ( s1 == s2 )
        cout << "same" << endl;
    else
        cout << "not same" << endl;
}










/*
template<typename T,
         typename Traits = std::char_traits<T>,
         typename Allocator = std::allocator<T>>
class basic_string
{
    T* buff;

    bool operator==(const basic_string& s)
    {
    }
};

using string = basic_string<char>;
*/
