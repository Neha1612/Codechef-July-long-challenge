#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int chef=0;
	    int morty=0;
	    while(n-->0)
	    {
	        int a;
	        int b;
	        
	        int sum=0,sum1=0;
	        cin>>a;
	        cin>>b;
	        int p,q;
	        if(a>9)
	        {
	      while(a>0)
	        {
	            p=a%10;
	            sum=sum+p;
	            a=a/10;
	        }
	        a=sum;
	        sum=0;
	        p=0;
	        }
	        if(b>9)
	        {
	            while(b>0){
	            q=b%10;
	            sum1=sum1+q;
	            b=b/10;}
	            b=sum1;
	            sum1=0;
	            q=0;
	        }
	        if(a>b)
	        {
	            chef++;
	        }
	        if (b>a)
	        {
	            morty++;
	        }
	        if(a==b)
	        {
	            morty++;
	            chef++;
	            
	        }
	    }
	    if(chef>morty)
	    {
	        cout<<0<<" ";
	        cout<<chef<<endl;
	    }
	    else if(chef<morty)
	    {
	        cout<<1<<" ";
	        cout<<morty<<endl;
	    }
	    else
	    {
	        cout<<2<<" ";
	        cout<<chef<<endl;
	       
	    }
	        
	    }
	
	return 0;
}
