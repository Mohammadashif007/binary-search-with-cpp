#include <iostream>
using namespace std;

int searchKey(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
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
    }
    return -1;
}

// void print()

int main()
{
    int arr[5] = {3, 4, 6, 7, 12};
    int index = searchKey(arr, 5, 12);
    cout << "index of key is : " << index << endl;
}
