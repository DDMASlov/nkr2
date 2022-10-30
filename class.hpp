#include "fl.hpp"
class CHislo
{
private:
	int* el;
	size_t size;
public:
	CHislo();
	CHislo(const int* a,size_t b);
	CHislo(const CHislo& obj);
	~CHislo();
	CHislo operator+(const CHislo& other);
	CHislo operator-(const CHislo& other);
	CHislo& operator=(const CHislo& other);
	friend ostream& operator<<(ostream& cout, CHislo& other);
	int Compare(const int* a,const int razm);
};

