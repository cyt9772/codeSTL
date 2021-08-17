#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <deque>

#include "ecourse_stl.hpp"

using namespace std;

int main()
{
  list<int> s;
  //deque<int> s;
  //vector<int> s;
  s.push_front(10);
  s.push_back(20);

  cout<<*s<<endl;
  show(s);
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
