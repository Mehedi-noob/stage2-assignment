#include<bits/stdc++.h>
using namespace std;

// Returns sum of XORs of all subsets
int xorSum(int arr[], int n)
{
	int bits = 0;

	// Finding bitwise OR of all elements
	for (int i=0; i < n; ++i)
		bits |= arr[i];

	int ans = bits * pow(2, n-1);

	return ans;
}

int main()
{
	int nums[] = {1, 3};
	int size = sizeof(nums) / sizeof(nums[0]);
	cout << xorSum(nums, size);
}
