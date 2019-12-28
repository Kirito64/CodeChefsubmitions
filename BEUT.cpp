#include <bits/stdc++.h>
using namespace std;
long sqsum(long a)
{
    long c = 0;
    int b;
    for(;a !=0;)
    {
        b = a/10;
        c = c + b*b;
        a = a/10;
    }
    return c;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long count;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long b = n-1;
        int a = 0;
        while(b >=0)
        {
            a = a + pow(10,b);
            b--;
        }
        for(long i = a+1; i < pow(10,n); i++)
        {
            if(i%10 != 0)
            {
                long c;
                double s;
                long q;
                c = sqsum(i);
                s = sqrt(c);
                q = s;
                if(s == (double)q)
                {
                    count = i;
                    break;
                }
            }
        }
        cout<<count<<"\n";
        
    }
	return 0;
}
