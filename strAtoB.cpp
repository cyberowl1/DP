Dynamic programm solution to calculate operation performed to change string A("abc") to B("def").
  _________________________________________________________________________________________________

#include<bits/stdc++.h>

using namespace std;

int smallest(int x, int y, int z){
  return x < y ? (x < z ? x : z) : (y < z ? y : z);
}
int cost(string str1,string str2,int a,int b)
{
    if(str1[a]==str2[b])return 0;
    return 1;
}
int distance(string str1,string str2,int a,int b)
{
    if(a<0||b<0)return 0;
    return smallest(distance(str1,str2,a-1,b)+1,distance(str1,str2,a,b-1)+1,
    distance(str1,str2,a-1,b-1)+cost(str1,str2,a,b));
}
int  main(){
    string str1,str2;
    cin>>str1>>str2;
    int a=str1.length();
    int b=str2.length();
    cout<<a<<" "<<b<<endl;
    int dist=distance(str1,str2,a-1,b-1);
    cout<<dist<<endl;
}
