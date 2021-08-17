#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <deque>

#include "ecourse_stl.hpp"

using namespace std;

int main()
{
    vector<int> v(10,0);
    v.resize(7);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(0);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.shrink_to_fit();  //사용하지 않는 메모리 정리
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(0);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

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
