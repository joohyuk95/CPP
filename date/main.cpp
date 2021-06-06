#include "date.h"

int main()
{
	Date today;
	today.year = 2021;
	today.month = 1;
	today.day = 13;
	
	Date birthday = {1995, 3, 6};
	printDate(today);
	
	return 0;
}
