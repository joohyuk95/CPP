#ifndef DATE_H
#define DATE_H

class Date {
public:
	int year;
	int month;
	int day;
};
//void printDate(const Date *pd);
void printDate(const Date &rd);

#endif
