#include <iostream>

using namespace std;

int linear(int arr[], int n, int x, int result[])
{
    int a = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == x)
        {
            result[a] = i;
            a++;
        }
    }
    return a;
}

int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 10, 11, 12, 13, 5}; 
    const int arrsize = sizeof(arr) / sizeof(arr[0]); 
    int result[arrsize];
    for (int i = 0; i < arrsize; i++)
    {
        result[i] = 0;
    }
    cout << "Count: " << linear(arr, arrsize, 5, result) << endl << "id: "; 
    for (int i = 0; i < arrsize; i++)
    {
        cout << result[i]<< " ";
    }
}