#include <iostream>

using namespace std;

// dutch national flag problem

// sort 0s and 1s
//  i/p  1 1 0 1 1 1 0 0 1 0
//  o/p  0 0 0 0 1 1 1 1 1 1

// approach 1 using counting
// approach 2 using two pointer
// approach 3 using sort method(not studied yet)

// approach 1 using counting
void sortZeroesAndOnes(int arr[], int size)
{
    int countZeroes = 0;
    int countOnes = 0;

    // count zeroes and ones
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZeroes++;
        }
        else
        {
            countOnes++;
        }
    }

    // place zeroes in array
    int index = 0;
    while (countZeroes--)
    { // run till countZeroes times
        arr[index] = 0;
        index++;
    }

    // place ones in array

    while (countOnes--)
    {
        arr[index] = 1;
        index++;
    }
}

// approach 2 using two pointer

void sortZeroesAndOnesUsingTwoPointer(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    // //jb tk left<=right tb tk chlao
    // while(left<=right)
    // {
    //     //increement krte rho jb tk 0 milta rhe
    //     while(arr[left]==0){
    //         left++;
    //     }

    //     //decreement krte rho jb tk 1 milta rhe
    //     while(arr[right]==1){
    //         right--;
    //     }

    //     //then swap
    //     // check before  ki left aage toh nhi nikla right se agar aisa hua toh no swap
    //     if(left<=right){
    //         swap(arr[left],arr[right]);

    //         // swap using bitwise xor
    //         // arr[left] = arr[left] ^ arr[right];
    //         // arr[right]= arr[left] ^ arr[right];
    //         // arr[left] = arr[left] ^ arr[right];
    //     }else{
    //         break;
    //     }

    // }

    while (left < right)
    {
        if (arr[left] == 0)
        {
            left++;
        }
        else if (arr[right] == 1)
        {
            right--;
        }
        else
        {
            swap(arr[left], arr[right]);
        }
    }
}

void printArray(int arr[], int size)
{
    cout << "Printing array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1};
    int size = 10;
    cout << "Before sorting\n";
    printArray(arr, size);

    sortZeroesAndOnesUsingTwoPointer(arr, size);

    cout << "After sorting\n";
    printArray(arr, size);

    return 0;
}