#include <iostream>
using namespace std;
int MaxPower(string s) 
{
    int mx = 0;
    int count = 0;
    char last = '\0';
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!=last)
        {
            mx = max(mx, count);
            count = 0;
            last = s[i];
        }
        count++;
    }
    return max(mx, count);
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string m;
	    cin>>m;
	    cout<<MaxPower(m)<<endl;
	}
	return 0;
}
