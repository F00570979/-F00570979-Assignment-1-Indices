#include <iostream>

using namespace std;

int main()
{
	int size;
	int arrayvalue;
	int target;

	cout << "How many values do you want to enter: ";
	cin >> size;
	int nums[size];
	for (int k = 0; k < size; k++)
	{
		cout << "please enter the number: ";
		cin >> arrayvalue;
		nums[k] = arrayvalue;
	} 

	cout << "please enter the target: ";
	cin >> target;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			int sum = nums[i] + nums[j];
			if (sum == target)
			{
				cout << "Output of Indexes of an Array: [" << i << "," << j << "]" << endl;
			}
		}
	}
}
