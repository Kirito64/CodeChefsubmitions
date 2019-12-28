#include<bits/stdc++.h>
using namespace std;


int main()
{
        int m;
        string tran,s[m];

        cin>>m>>tran;
        for(int i = 0; i<m; i++)
            cin>>s[i];
        
        for(int i =0; i<m;i++)
        {
            int n = s[i].length();
            for(int j =0; j<n; j++)
            {
                int a = (int)s[i][j];

                if(a>=65 && a<=90)
                {
                    a = a - 65;
                    s[i][j] = tran[a] -32;
                }
                else if(a >= 97 && a<= 122)
                {
                    a = a - 97;
                    s[i][j] = tran[a];
                }
                else if(s[i][j] == '_')
                {
                    s[i][j] = ' ';
                }
                
            }
        }

        for(int i = 0; i<m; i++)
         cout<<s[i]<<"\n";

    
}
