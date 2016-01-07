//#4: Largest palindrome product

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int T;
   scanf("%d",&T);
   long N, n;
   long div;
   long ans;
   
   for(int i=0; i<T; i++){
       scanf("%ld", &N);
       for(n=N/1000; n>100; n--){
           ans=n*1000+99*(n%10)+n%100+(n%1000)/100;
           if(ans>=N){
               continue;
           }
           for(div=ans/1000+1; div*div<=ans ; div++){
               if(ans%div==0){
                   printf("%ld\n", ans);
                   //printf("%ld = %ld * %ld\n",ans,div,ans/div);
                   break;
               }
           }
           if(ans%div==0) break;
       }
   }
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   return 0;
}
