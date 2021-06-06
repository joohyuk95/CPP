#include <iostream>
#include "safeArray.h"

int main()
{
	SafeArray arr1;	// SafeArray arr1(100);
	SafeArray arr2(10); // SafeArray arr2 = 10; XX
	
	int nums[] = {1, 2, 3, 4, 5};
	SafeArray arr3(nums, 5);
	SafeArray arr4(arr3);
	
	arr1 = arr3;
	
	if (arr1 == arr3)
		std::cout << "arr1 and arr3 are equal" << std::endl;
	else
		std::cout << "arr1 and arr3 are not equal" << std::endl;
	
	Array arr5(nums, 5);
	for (int i = 0; i <= arr5.size(); ++i) // at i==arr1.size() unknown value will be alloted
		std::cout << arr5[i] << std::endl;
		
	//for (int i = 0; i <= arr1.size(); ++i) // at i==arr1.size() fail by boudary check
	//	std::cout << arr1[i] << std::endl;
		
	Array *pArr = new SafeArray(nums, 5); // parent type pointer or reference can point offspring type object
	
	(*pArr)[5] = 5;		// (*pArr).operator[](5) or pArr->operator[](5)
	
	
	delete pArr;
	
	return 0;
}
