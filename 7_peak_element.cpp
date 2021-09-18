#include <iostream>
using namespace std;



int getPeak(int arr[], int n)
{
	int low = 0, high = n - 1;

		while(low <= high)
		{
			int mid = (low + high) / 2;

			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return arr[mid];
			if(mid > 0 && arr[mid - 1] >= arr[mid])
				high = mid -1;
			else
				low = mid + 1;
		}
	return -1;
}

int main()
{
  int n;
  cout<<"Enter the number of array elements: ";
  cin>>n;
  int arr[n];  
  cout<<"Enter the array elements: ";
  for(int i=0; i<n; i++)
  cin>>arr[i];
  cout<<"The peak element is: "<<getPeak(arr, n);
  return 0;
}