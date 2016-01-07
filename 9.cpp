//#9: Special Pythagorean triplet

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long SPT(long n){
    long ans=0,max=0;
    for(long a=1; a<=n/3; a++){
        long rem=n-a;
        if ((a*a)% rem == 0 && (rem-(a*a)/rem)%2==0) 
            ans=a*(rem*rem-a*a*a*a/(rem*rem))/4; 
        if (max<ans) max=ans;
    }
    return max!=0?max:-1;
}

int main() {
   
    long t;
    cin>>t;
    vector<long> v(t);
    for(long i=0; i<t; i++){
        cin>>v[i];
    }
    for(long i=0; i<t; i++){
        cout<<SPT(v[i])<<endl;
    }
    return 0;
}
