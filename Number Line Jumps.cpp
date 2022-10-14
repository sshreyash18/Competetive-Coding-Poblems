


You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
The second kangaroo starts at location x2 and moves at a rate of  v2 meters per jump.

You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

Example

x1 = 2
v1 = 1
x2 = 1
v2 = 2
After one jump, they are both at  x = 3, (x1+v1 = 2 +1, x2 + v2 = 1+2 ), so the answer is YES.


#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    int n = pow(10,6);
    int flag =0;
    while(n--){
        x1= x1+v1;
        x2= x2+v2;
        
        if(x1==x2){
            flag =1;
        }
    
    }
    if(flag ==1){
            cout<<"YES";
            
        }
        else{
            cout<<"NO";
            
        }
}
