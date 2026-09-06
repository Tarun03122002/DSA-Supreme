// Rotate the array to the left (counter-clockwise direction) by N steps.
//  i/p  [1,2,3,5,4,6] N=2
//  o/p    3 5 4 6 1 2
#include <vector>
#include <iostream>

using namespace std;
//  2 1 3 5 4 6  reverse(0,k)
//  2 1 6 4 5 3  reverse(k,n)
//  3 5 4 6 1 2  reverse(0,n)

void reverseArray(vector<int> &arr, int i, int j)
{
    int left = i;
    int right = j;
    while (left < right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
void rotateLeftByNSteps(vector<int> &arr, int N)
{
    int size = arr.size(); 
    reverseArray(arr, 0, N - 1);  
    reverseArray(arr, N, size - 1);
    reverseArray(arr, 0, size - 1);
}
// Given an array prices[] of length N, representing the prices of the stocks on different days, the task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed.
// Input: prices[] = {7, 10, 1, 3, 6, 9, 2}
// Day 1 -> 7rs stock
// Ouptut : 8
//price[] = {5,3,2,4,2,6,2}

int maximumProfit(vector<int>prices){
    int N = prices.size();
    int minValue=prices[0];
    int minValueIndex=-1;
    for(int i=1;i<N;i++){
        // minValue=min(prices[i],minValue);
        if(prices[i]<minValue){
             minValue=prices[i];
             minValueIndex=i;
        }
    }
    // cout<<"Index"<<minValueIndex<<endl;
    // cout<<"Min Value"<<minValue<<endl;
    // i have index of 1 which is 2 (and 1 is also minimum)
    int maxValue=minValue;
    for(int j=minValueIndex+1;j<N;j++){
        maxValue = max(prices[j],maxValue);
    }
    // cout<<"Max Value"<<maxValue<<endl;
    int maximumProfitValue= maxValue - minValue;
    return maximumProfitValue;
}
int main(){
    vector<int> arr = {7, 10, 4, 3, 6, 5, 2};
    vector<int> arr1= {5,3,2,4,2,6,2};
    // rotateLeftByNSteps(arr,1);
   cout<<"Maximum Profit ="<< maximumProfit(arr);
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
}