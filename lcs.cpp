// Dynamic Program to calculate length of lowest common subsequence in two string.

_______________________________________________________________________________________________________________________________
#include <bits/stdc++.h>

using namespace std;
// lowest common subsequence

int lcs(char *x,char *y, int m, int n,int i,int j)
{

    if(i==m||j==n)
    {
        return 0;
    }
    if(x[i]==y[j])
    {
        return 1+lcs(x,y,m,n,i+1,j+1);
    }
    else
    {
        return max(lcs(x,y,m,n,i+1,j), lcs(x,y,m,n,i,j+1));
    }
}

int main()
{
    char x[]="hieroglyphology";
   char y[]= "michaelangelo";
    int m = strlen(x);
    int n= strlen(y);
    cout<<lcs(x,y,m,n,0,0);

}
