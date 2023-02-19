#include<iostream>
using namespace std;
int main()
{   int temp = 0;
	int arr[9] = { 4,2,8,0,5,7,1,3,9};
	for (int j = 0; j <8; j++) 
    {
	for (int i = 0; i<9-j-1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			 int temp = arr[i+1];
			arr[i+1] = arr[i];
			arr[i] = temp;
		}
	}

	}
	for (int i=0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}
}