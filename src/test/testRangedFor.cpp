#include"doctest.h"
#include<vector>
#include<iostream>


TEST_CASE("test ranged for") {
		std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
	for (auto n :vec)
		std::cout << n ;
	std::cout << std::endl;
 
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (auto n : arr)
		std::cout << n ;
	std::cout << std::endl;
}
