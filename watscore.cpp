#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b[11] = {0};
        int a[2][n];
        for(int i = 0; i<n; i++)
            cin>>a[0][i]>>a[1][i];
        
        for(int i = 0; i<n; i++)
        {
            switch(a[0][i])
            {
                case 1:
                    if(b[a[0][i]-1] < a[1][i])
                    {
                        b[a[0][i]-1] = a[1][i];
                    }
                    break;
                case 2:
                    if(b[a[0][i]-1] < a[1][i])
                    {
                        b[a[0][i]-1] = a[1][i];
                    }
                    break;
                case 3:
                    if(b[a[0][i]-1] < a[1][i])
                    {
                        b[a[0][i]-1] = a[1][i];
                    }
                    break;
                    
                case 4:
                    if(b[a[0][i]-1] < a[1][i])
                    {
                        b[a[0][i]-1] = a[1][i];
                    }
                    break;
                case 5:
                    if(b[a[0][i]-1] < a[1][i])
                    {
                        b[a[0][i]-1] = a[1][i];
                    }
                    break;
                case 6:
                    if(b[a[0][i]-1] < a[1][i])
                    {
                        b[a[0][i]-1] = a[1][i];
                    }
                    break;
                case 7:
                    if(b[a[0][i]-1] < a[1][i])
                    {
                        b[a[0][i]-1] = a[1][i];
                    }
                    break;
                case 8:
                    if(b[a[0][i]-1] < a[1][i])
                    {
                        b[a[0][i]-1] = a[1][i];
                    }
                    break;
                
            }
        }
        int sum = 0;
        for(int i = 0; i<11;)
        {   
            sum = sum + b[i];
        }
        
        cout<<sum<<"\n";
    }
    
	return 0;
}
