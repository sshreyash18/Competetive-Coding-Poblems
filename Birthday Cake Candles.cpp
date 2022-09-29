/* You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

Example

candles = [4,4,1,3]
The maximum height candles are  units high. There are  of them, so return 2.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   sort(arr, arr + n, greater<int>()); 
   
   
int key = arr[0];
   long int temp=0;
 
   for(long long  int i=0;i<n;i++){
      
       if(key == arr[i]){
           temp++;
           
       }
       else{
           break;
       }
   }
   cout<<temp;
}
