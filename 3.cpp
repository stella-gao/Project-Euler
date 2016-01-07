//#3: Largest prime factor

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long find_bigprime(long n)
{
    
    while(n%2==0) n/=2;
    long i;
	for(i = 3; i*i<=n; i += 2)
	{
		while (n % i == 0)
		{
            n/=i;
		}
	}
    if(n==1) return i-2;
    else return n;
    
}

int main() {
   
    long t;
    cin>>t;
    vector<long> v(t);
    for(long i=0; i<t; i++){
        cin>>v[i];
    }
    for(long i=0; i<t; i++){
        cout<<find_bigprime(v[i])<<endl;
    }
    return 0;
}
