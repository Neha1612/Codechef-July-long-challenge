#include <iostream>
# include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	    long long int n;
	    cin>>n;
	    long long int s[n],sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	        
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        sum=sum+(abs(s[i]-s[i+1])-1);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
