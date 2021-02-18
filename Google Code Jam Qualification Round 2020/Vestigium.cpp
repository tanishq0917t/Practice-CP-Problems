//Tanishq Rawat
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int ttt=1;
while(t--)
{
int counta=0,countb=0;
int n;
cin>>n;
int x[n][n];
for(int e=0;e<n;e++)
{
for(int j=0;j<n;j++) cin>>x[e][j];
}
int trace=0;
for(int e=0;e<n;e++)
{
trace+=x[e][e];
}
cout<<"Case #"<<ttt<<": "<<trace<<" ";
for(int e=0;e<n;e++)
{
set<int>s1;
for(int j=0;j<n;j++)
{
s1.insert(x[e][j]);
}
if(s1.size()!=n)counta++;
s1.clear();
}
cout<<counta<<" ";
for(int e=0;e<n;e++)
{
set<int>s2;
for(int j=0;j<n;j++)
{
s2.insert(x[j][e]);
}
if(s2.size()!=n)countb++;
s2.clear();
}
cout<<countb<<" ";
cout<<endl;
ttt++;
}//while
return 0;
}
