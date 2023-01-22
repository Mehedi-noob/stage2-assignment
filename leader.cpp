#include <iostream>
using namespace std;
void leaderPrint(int arr[], int size)
{
    int max_from_right = arr[size-1];
    cout << max_from_right << " "; //because the rightmost element is always leader.
    for (int i=size-2; i>=0; i--) // traversing from right
    {
        if(max_from_right < arr[i])
        {
            max_from_right = arr[i];
            cout << max_from_right << " ";
        }
    }
}

int main()
{
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    leaderPrint(arr, n);
    return 0;
}
