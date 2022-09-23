/*Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.

Lily decides to share a contiguous segment of the bar selected such that:

The length of the segment matches Ron's birth month, and,
The sum of the integers on the squares is equal to his birth day.
Determine how many ways she can divide the chocolate.

Example

s = [2,2,1,3,2]
d = 4
m= 2

Lily wants to find segments summing to Ron's birth day, d = 4 with a length equalling his birth month, m = 2 . In this case, there are two segments meeting her criteria: [2,2] and [1,3] .*/


#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d,m;
    cin>>d>>m;
    int sum,count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<i+m;j++){
            sum +=arr[j];
           // cout<<sum<<" ";
        }
        if(sum ==d){
            count++;
        }
        sum=0;
    }
    cout<<count;
    
}