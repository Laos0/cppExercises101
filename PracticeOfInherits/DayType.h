#ifndef DAYTYPE_H

#endif // !DAYTYPE_H
#include <string>
using namespace std;

class DayType {
public:
	string day;

	DayType(string day) {

		this->day = day;
	}
	~DayType() {

	}

	void printDays() {

		cout << day << endl;
	}

};
