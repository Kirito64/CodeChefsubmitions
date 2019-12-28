// C++ program to answer queries 
// of nCr in O(1) time. 
#include <bits/stdc++.h> 
#define ll long long 
const int N = 1000001; 
using namespace std; 

// array to store inverse of 1 to N 
ll factorialNumInverse[N + 1]; 

// array to precompute inverse of 1! to N! 
ll naturalNumInverse[N + 1]; 

// array to store factorial of first N numbers 
ll fact[N + 1]; 

// Function to precompute inverse of numbers 
void InverseofNumber(ll p) 
{ 
	naturalNumInverse[0] = naturalNumInverse[1] = 1; 
	for (int i = 2; i <= N; i++) 
		naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p; 
} 
// Function to precompute inverse of factorials 
void InverseofFactorial(ll p) 
{ 
	factorialNumInverse[0] = factorialNumInverse[1] = 1; 

	// precompute inverse of natural numbers 
	for (int i = 2; i <= N; i++) 
		factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p; 
} 

// Function to calculate factorial of 1 to N 
void factorial(ll p) 
{ 
	fact[0] = 1; 

	// precompute factorials 
	for (int i = 1; i <= N; i++) { 
		fact[i] = (fact[i - 1] * i) % p; 
	} 
} 

// Function to return nCr % p in O(1) time 
ll Binomial(ll N, ll R, ll p) 
{ 
	// n C r = n!*inverse(r!)*inverse((n-r)!) 
	ll ans = ((fact[N] * factorialNumInverse[R]) % p * factorialNumInverse[N - R]) % p; 
	return ans; 
} 

// Driver Code 
int main() 
{ 
	ll p = 1000000007; 
	InverseofNumber(p); 
	InverseofFactorial(p); 
	factorial(p); 
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        string a,b;
        cin>>a>>b;
        ll count1 = 0;
        ll count2 = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(a[i] == '1')
                count1++;
            if(b[i] == '1')
                count2++;
        }
        
        ll min1 = abs(count1-count2);
        ll max = min(count1, n-count1) + min(count2, n-count2);
        ll count = 0;
        for(ll i =min1; i<=max; i++)
            count = count + Binomial(n, i, p);
            
        cout<<count<<"\n";
        
    }

	return 0; 
} 
