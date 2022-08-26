// Dynamic solution to calculate fibonaccci series.
________________________________________________________________________________

#include <bits/stdc++.h>

using namespace std;

int fibn[100]={};

int fib(int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }

    if (fibn[n]==0)
    {
        fibn[n]=fib(n-1)+fib(n-2);

    }
     return fibn[n];
}

int main()
{
    int x;
    cin>>x;


   int num= fib(x);
   cout<<num;
}
