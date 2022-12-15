#include <iostream>
#include <cassert>

using namespace std;

int* insert(int arr[], int x, int p, int n);
int search_position (int arr[], int x, int n);
int* insert_sorted (int arr[], int x, int n);

int main(){
    int arr1[14] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    int rez1[15] = { 0, 1, 2, 3, 4, 5, 999, 6, 7, 8, 9, 10, 11, 12, 13};

    auto r1 = insert(arr1, 999, 6, 14);
    for (auto i = 0; i < 15; ++i)
    assert(r1[i] == rez1[i]);

    int arr2[5] = {0, 1, 2, 3, 4};
    assert(search_position(arr2, 2, 5) == 3);
    assert(search_position(arr2, 7, 5) == 5);

    int arr3[14] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int rez3[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 10, 11, 12, 13};

    auto r3 = insert_sorted(arr3, 8, 14);
    for (auto i = 0; i < 15; i++)
    assert(r3[i] == rez3[i]);

    return 0;

}

int* insert (int arr[], int x, int p, int n){
    for (auto i = n; i > p; i--)
    arr[i] = arr[i-1];
    arr[p] = x;
    return arr;
}

int search_position (int arr[], int x, int n){
    for (auto i = 0; i < n-1; ++i){
        if (arr[i] >= x)
        return i;
    }
    return n;
}

int* insert_sorted (int arr[], int x, int n){
    int p = search_position(arr, x, n);
    return insert(arr, x, p, n);
}

