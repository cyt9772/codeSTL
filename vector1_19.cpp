#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <deque>

#include "ecourse_stl.hpp"

using namespace std;

int main()
{
    vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10,3);
    std::vector<int> v4(v3);

    std::vector<int> v5={1,2,3,4};
    std::vector<int> v6{1,2,3,4};
    std::vector<int> v7(10,0);
    std::vector<int> v8{10,0};

    cout<<"-----------------------------"<<endl;

    //v1.push_front(10);
    v1.push_back(10);
    v1.insert(begin(v1)+1, 3); //2번째 위치에 3 삽입

    int n=v1.front();
    int n1=v1[0];

    int x[5]={1,2,3,4,5};
    v1.assign(x, x+5);

    v1[0]=10; //예외없이 runtime error
    //v1.at(100)=10; //예외발생

    show(v1);


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
