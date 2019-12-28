#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c[26]= {0},vis[26] = {0};
        cin>>n;
        string s[n];
        for(int i = 0; i<n; i++)
        {
            cin>> s[i];
        }
        for(int i = 0; i<n; i++)
        {
            int m = s[i].length();
            for(int j = 0; j< m; j++)
            {
                int k = (int)s[i][j] - 97;
                if(vis[k]==0)
                {
                    c[k]++;
                    vis[k] = 1;
                }
            }
        }

        int sic = 0;
        for(int i = 0; i<26; i++)
        {
            if(c[i] == n)
            sic++;
        }
        
        cout<<sic<<"\n";
    }
    
}