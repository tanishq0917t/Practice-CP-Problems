#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		char ch;
	    string s1,s2;
	    cin>>ch>>s1>>s2;
	    if(ch=='A')
	    {
	  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
      transform(s2.begin(),s2.end(),s2.begin(),::tolower);
      transform(s2.begin(),s2.begin()+1,s2.begin(),::toupper);
      cout<<s1<<s2<<endl;
	    }else if(ch=='B')
	    {
	       transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
           transform(s2.begin(),s2.end(),s2.begin(),::tolower); 
           cout<<s1<<"_"<<s2<<endl;
	    }else if(ch=='C')
	    {
          transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
           transform(s2.begin(),s2.end(),s2.begin(),::toupper); 
             cout<<s1<<"_"<<s2<<endl;
	    }else if(ch=='D')
	    {
	  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
      transform(s2.begin(),s2.end(),s2.begin(),::tolower);
      transform(s1.begin(),s1.begin()+1,s1.begin(),::toupper); 
      transform(s2.begin(),s2.begin()+1,s2.begin(),::toupper); 
      cout<<s1<<"-"<<s2<<endl;
	    }else{
	            for(int i=0;i<s1.length();i++)
    {
        if(i%2==0)
        s1[i]=tolower(s1[i]);
        else
        {
            s1[i]=toupper(s1[i]);
        }
        
    }
    for(int i=0;i<s2.length();i++){
         if(i%2==0)
        s2[i]=tolower(s2[i]);
        else
        {
            s2[i]=toupper(s2[i]);
        }
    }
    cout<<s1<<"|"<<s2<<endl;
	    }
	}
	return 0;
}

































/*
Logic to find frequency count of character array of a string
int x[26]={0},y[26]={0};
for(int i=0;i<a.length()-1;i++) x[a[i]-'a']++; 
for(int i=0;i<b.length()-1;i++) y[b[i]-'a']++;
*/
//******************************************************************************************************
void findMostFrequentAndFrequency(int arr[], int n,int *a,int *b) 
{ 
    sort(arr, arr + n); 
    int max_count = 1, res = arr[0], curr_count = 1; 
    for (int i = 1; i < n; i++) 
    { 
        if (arr[i] == arr[i - 1])  curr_count++; 
        else 
        { 
            if (curr_count > max_count) 
            {
                max_count = curr_count; 
                res = arr[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arr[n - 1]; 
    } 
  *a=res;
  *b=max_count;
}
int decToBin(int N) { 
    ull B_Number = 0; 
    int cnt = 0; 
    while (N != 0) {
        int rem = N % 2; 
        ull c = pow(10, cnt); 
        B_Number += rem * c; 
        N /= 2; 
        cnt++; 
    } 
    return B_Number; 
}
ll gcd(ll a, ll b)
{
    return (b?gcd(b,a%b):a);
}
bool isPrime(ll n)
{
    if(n<=1LL) return false; 
    if(n<=3LL) return true; 
    if(n%2==0LL || n%3==0LL) return false; 
    for(ll i=5LL; (i*i)<=n; i+=6LL) if(n%i==0LL || n%(i+2LL)==0LL) return false; 
    return true;
}
ll P(ll B, ll power, ll modulo)
{
    ll ans=1LL;
    while(power>0LL)
    {
        if(power%2LL==1LL) ans=(ans*B)%modulo; 
        B=(B*B)%modulo;
        power/=2LL;
    }
    return ans;
}
