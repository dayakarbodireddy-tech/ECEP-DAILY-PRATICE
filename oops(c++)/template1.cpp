//function templates
#include<iostream>
using namespace std;
template<typename A,typename B>
A maximum(A num1,B num2)
{
    cout <<"Maximum : " ;
    return num1 > num2 ? num1 : num2;
}
//  int main()
//  {
//     cout << maximum(10,20) << endl
//          << maximum(20.5,20.2) << endl
//          << maximum('A','B') << endl;
//  }
 int main()
 {
    cout << maximum(10,20.5) << endl
         << maximum(20.5,20) << endl
         << maximum('A',60) << endl;
 }