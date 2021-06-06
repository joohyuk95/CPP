#include <iostream>
#include "safeArray.h"
#include "invalidIndex.h"

int main()
{
	SafeArray arr1;
	SafeArray arr2(10);
	
	int nums[] = {1, 2, 3, 4, 5};
	SafeArray arr3(nums, 5);
	SafeArray arr4(arr3);
	
	arr1 = arr3;
	
	if (arr1 == arr3)
		std::cout << "arr1 and arr3 are equal" << std::endl;
	else
		std::cout << "arr1 and arr3 are not equal" << std::endl;
	
	try
	{
		Array arr5(nums, 5);
		for (int i = 0; i <= arr5.size(); ++i)
			std::cout << arr5[i] << std::endl;
		
		Array *pArr = new SafeArray(nums, 5);
	
		(*pArr)[5] = 5;
	
		delete pArr;		
		
	} catch (InvalidIndex e) {
		std::cerr << "we receive invalid index : " << e.invalid() << std::endl; 
		// err dont use buffer, just print at monitor / using buffer means collect all character for performance
		// this is not appropriate for error situation ( emergency )
		return e.invalid();
	}
	
	return 0;
}
