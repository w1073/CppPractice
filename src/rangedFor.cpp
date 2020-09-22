#include<vector>
#include<iostream>
int main()
{
	std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
	for (auto n :vec)
		std::cout << n;
 
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (auto n : arr)
		std::cout << n;	

	return 0;
}
