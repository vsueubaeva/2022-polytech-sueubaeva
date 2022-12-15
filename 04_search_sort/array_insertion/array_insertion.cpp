#include <iostream>
#include <cassert>

using namespace std;
int* insert(int arr[], int x, int p, int n);

int main(){
    int arr1[14] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    int rez1[15] = { 0, 1, 2, 3, 4, 5, 999, 7, 8, 9, 10, 11, 12, 13 };

    auto r1 = insert(arr1, 999, 6, 14);
    for (auto i = 0; i < 15; ++i)
        assert(r1[i] == rez1[i]);
}

int* insert (int arr[], int x, int p, int n){
    for (auto i = n; i > p; i--)
    arr[i] = arr[i-1];
    arr[p] = x;
    return arr;
}


