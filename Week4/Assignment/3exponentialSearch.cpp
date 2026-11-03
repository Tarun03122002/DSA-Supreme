// exponential search/doubling search/galloping search/struzik search
#include<iostream>
using namespace std;

int bruteForce(int arr[],int target){
    int i=0;
    while(arr[i]<=target){
        if(arr[i] == target){
            return i;
        }
        i++; 
    }
    // if arr[i]>target then target not exists in sorted array
    return -1;
}
int bs(int arr[],int s,int e,int target){
    while(s<=e){
        int m = s+(e-s)/2;
        if(arr[m] == target){
            return m;
        }else if(target > arr[m]){
            s=m+1;
        }else{
            e=m-1;
        }
    }
    return -1;
}
int exponentialSearch(int arr[],int target,int size){
    int i=0,j=1;
    if(arr[i] == target) return 0;
    while(j<size && arr[j]<=target){//we can ignore j<size if  if array size is infinite in question that question is already handling this case with some method we will arr[j] like that instead method will check
        i=j;
        j=j<<1;// j=j*2
    }
    int s=i;
    // end=min(j,size-1) if large size array is there and we know size use min() function
    // if infinite size array ,we do not know size,then end = j
    int end =j;
    if(end > size){ // we can ignore if array size is infinite
        end = size-1;
    }
    return bs(arr,s,end,target);
}
// Tc -> O(log(2^k-1))
// k no of steps
int main(){
    // Applications -> 1) big size array/infinite size array (sorted array)-> searching 
    // Also called as Unbounded Binary Search
    // 2) Fast search compared to binary search if(target is closed to beginning )

    // Brute Force -> if we don't know size of array/Unbounded array/Infinite size array

    int arr[] = {5,8,10,12,13,15,19,20,25,29,30,35};
    int target = 315;
    // int ans = bruteForce(arr,target);
    int size = sizeof(arr)/sizeof(int);
    int ans = exponentialSearch(arr,target,size);
    cout<<ans;

    return 0;
}