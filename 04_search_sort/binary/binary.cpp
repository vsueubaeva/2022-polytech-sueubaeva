#include <iostream>

using namespace std;

int binary(int arr[], int l, int r, int x){
    if (r >= 1)
	{
		while (l <= r)
		{
			int m = (l + r) / 2;
			if (arr[m] == x)
				return m;
			if (arr[m] < x)
			{
				l = m + 1;
			}
			if (arr[m] > x)
			{
				r = m - 1;
			}
		}
	}
	return -1;
}

int main(){
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
    const int arrsize = sizeof(arr) / sizeof(arr[0]); 
    cout << "id: " << binary(arr, 0, arrsize, 11) << endl; 
}