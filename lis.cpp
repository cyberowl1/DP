  Dynamic Programming solution to calculate length of longest increasing subsquence.
  
 _________________________________________________________________________________________________
#include <bits/stdc++.h>

using namespace std;

int lis(char * x)
{
  int len=strlen(x);
  int arr[len];
  std::fill(arr, arr +len, 1);
  for(int i=len-1;i>=0;i--)
  {
      for(int j=i;j<len;j++)
      {
          if (x[j] > x[i])
          {
            arr[i] = max(arr[i], arr[j] + 1);

          }


      }
      // cout<<arr[i]<<"  ";
  }
  return *max_element(arr, arr+len);

}

int main()
{
    char x[]="carbohydrate";
    // cout<<strlen(x);

    int num=lis(x);
    cout<<num;
}
