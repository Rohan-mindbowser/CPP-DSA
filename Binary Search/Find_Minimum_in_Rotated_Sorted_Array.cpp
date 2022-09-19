// Leetcode 153. Find Minimum in Rotated Sorted Array

#include <bits/stdc++.h>
using namespace std;
int findMinimum(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if(arr[e] < arr[mid]){
            s=mid+1;
        }
        else{
            mid=e;
        }
        mid = s + (e - s) / 2;
    }
    return arr[s];
}
int main()
{
    int arr[5] = {7,8,1,2,3};
    int size = sizeof(arr) / 4;
    cout<<endl;
    cout << "Value Present at :" << findMinimum(arr, size);
    cout<<endl;
}