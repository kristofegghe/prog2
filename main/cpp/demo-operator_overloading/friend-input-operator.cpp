#include <iostream>

using namespace std;

class Integer
{
public:
	Integer(int i) : m_value(i) {}
	int getValue() const { return m_value; };

private:
	friend ostream& operator<<(ostream& os, const Integer& integer);

private:
	int m_value;
};

ostream& operator<<(ostream& os, const Integer& integer)
{
	os << integer.m_value;
	return os;
}

int main()
{
	const Integer i{5};
	cout << "Integer is: " << i << endl;
}