#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n1;
    cout<<"Enter a number\n";
    cin>>n1;
    isPrime(n1)?cout<<"prime":cout<<"not prime";
    return 0;
}