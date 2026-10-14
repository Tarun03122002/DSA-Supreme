// https://leetcode.com/problems/sqrtx/

// class Solution {
// public:
//     int mySqrt(int x) {
        
//         //find search space
//         int s=0 ,e=x;
//         int ans = 0;
//         while(s<=e){
//             long long  mid = s + (e-s)/2;
//             long long square = mid * mid; // integer overflow ho skta hai use long long
//             //predicate function //true or false
//             if(square==x){
//                 return mid;
//             }else if(square > x){
//                 //left mei jao
//                 e = mid-1;
//             }else{
//                 //right mei jao but pehle ans store kro less hai x hai se toh answer ho skta hai
//                 ans = mid;
//                 s = mid+1;
//             }
//         }
        
//         return ans;
//         //TC ->O(logn)
//         //SC ->O(1)
//     }
// };

#include<iostream>
#include<iomanip>
using namespace std;

int mySqrt(int x){

    int s=0,e=x; 
    int ans = 0;
    while(s<=e){
        long long int mid = s + (e-s)/2; 
        long long int square = mid * mid;

        if(square == x){
            // cout<<"aa\n";
            return mid;
        }else if(square > x){
            //left
            e= mid - 1;
        }else{
            //square<x

            //ans store
            ans = mid;
            //right
            s = mid + 1;
        }
       
    }

    return ans;
}

double precisionSqrt(int n){
    double sqrt = mySqrt(n);

    double step=0.1;
    int precision=3;

    for(int i=0;i<precision;i++){
         //sqrt with precision 1
        {
            double j = sqrt;
            while(j*j <=n){
                sqrt=j; 
                j+=step;
            }
        }
        step/=10;
    }
    return sqrt;
}
int main(){

    int num = 5;
    cout<<"Square root of "<<num<<" is "<<precisionSqrt(num)<<endl;

    return 0;
}