//even or odd without using % function

#include <iostream>
using namespace std;
 

bool isEven(int n)
{
    return ((n / 2) * 2 == n);
}
 

int main()
{
    int n;
    cout <<"enter the no. to be checked : ";
    cin  >>n; 
    isEven(n) ? cout << "Even" : cout << "Odd";
    return 0;
}