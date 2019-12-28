#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s; 
	    int n = s.length();
	    int vis[n]={0};
	    int flag = 1;
	    int num =0;
	    for(int i = 0; i<n;i++)
	    {
	        if(s[i] != '.')
	        {
	            num++;
	        }
	    }
	    if(num >1)
	    {
	    for(int i = 0; i<n; i++)
	    {
	        if(s[i] != '.')
	        {
	         int x = int(s[i])-48;
	        cout << x;
	         for(int j = i;(j<i+x && j<n); j++)
	         {
	             if(vis[j] == 1)
	             {
	                 flag = 0;
	                 break;
	             }
	             vis[j] = 1;
	         }
             if(flag == 0)
                break;
	        
	         for(int j = i-1; (j>i-x && j>=0); j--)
	         {
	             if(vis[j] == 1)
	             {
	                 flag = 0;
	                 break;
	             }
	             vis[j] =1;
	         }
             if(flag == 0)
             break;
	        }
	     }
	    }
	    if(flag == 1)
	        cout<<"safe\n";
	    else
	        cout<<"unsafe\n";
	}
	return 0;
}
