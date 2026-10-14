
#include<iostream>
#include<vector>
using namespace std;


// elements 0 to n[1,n] ek missing hoga isme
// constraints 
// Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.

//index  0 1 2 3 4 5 6 7 8
//i/p   [1,2,3,4,5,6,8,9,10] size -> 9 
//o/p   7

int findMissingElementInASortedArray(vector<int> arr){

    int n = arr.size();
    int start = 0;
    int end = n-1; 
    int ans = 0;
    
    
    while(start<=end){
            int mid = start + (end-start)/2;
            //agar arr[mid]-mid==1 hai toh left mei koi missing nhi hai toh   //right mei jao
            if(arr[mid]-mid==1){
                //right mei jao
                start = mid+1;
            }
            else{
                //agar arr[mid]-mid!=1 toh left mei jaano hoga 

                //ans store kro bcoz ho skta hai answer may or may not be yahan mil jaaye 
                ans = arr[mid]-1;
                //left mei jao 
                end = mid -1;
            }
            
        
    }
    // corner case -> edge case 
    // when last element i.e n is missing
    //i/p   [1,2,3,4,5,6,7,8,9] size -> 9 
    //o/p   10
    if(ans==0){
        return n+1;
    }

return ans;

}

int main(){

    vector<int> arr={1,2,3,4,5,6,7,8,9};

    cout<<"Missing element: "<<findMissingElementInASortedArray(arr);
    return 0;
}
