/*Given an array of integers and a positive integer k, determine the number of (i, j) pairs where i<j and ar[i] + ar[j]  is divisible by k.

Example

ar = [1,2,3,4,5,6]
k = 5
Three pairs meet the criteria: [1,4], [2,3]and [4,6] .*/


#include <iostream>
using namespace std;
int main(){
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%k==0){
                temp+=1;
                
            }
         
        }
    }
    cout<<temp<<endl;
}
