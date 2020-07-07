#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    char m[8][8];
	    
	    for(int i=0;i<8;i++)
	      {
	          for(int j=0;j<8;j++)
	          {
	              if(n>0){
	                  m[i][j]='.';
	                  n--;
	                  
	              }
	              else
	              {
	                  m[i][j]='X';
	              }
	          }
	      }
	   m[0][0]='O';
	          
	          for(int i=0;i<8;i++)
	        {
	          for(int j=0;j<8;j++)
	          {
	              cout<<m[i][j];
	          }
	          cout<<endl;
	        }
	        cout<<endl;
	}
	return 0;
}
