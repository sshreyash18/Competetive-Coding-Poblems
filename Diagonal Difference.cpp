/*Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix arr is shown below:

1 2 3
4 5 6
9 8 9

The left-to-right diagonal = 1+5+9 = 15. The right to left diagonal = 3+5+9 = 17 . Their absolute difference is |15 - 17| = 2.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    
    int n,sum1=0,sum2=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j){
                sum1+=arr[i][j];
            }
            if(i+j == n-1){
                sum2 += arr[i][j];
            }
        }
    }
    int diff = abs(sum1 - sum2);
    cout<<diff;
} 