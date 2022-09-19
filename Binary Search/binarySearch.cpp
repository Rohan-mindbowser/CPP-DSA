#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int key, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 89, 90, 99, 101};
    int size = sizeof(arr) / 4;
    cout<<endl;
    cout << "Value Present at :" << binarySearch(arr, 99, size);
    cout<<endl;
}