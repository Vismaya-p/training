//pointer to class members

#include<iostream>
using namespace std;
class Data
{
public:
	int a;
	void print()
	{
		cout << "a is: " << a<<endl;
	}
};
int main()
{
	Data d, * dp;
	dp = &d;
	int Data::* ptr = &Data::a;//pointer to data member a
	d.*ptr = 10;
	d.print();

	dp->*ptr = 20;
	dp->print();
}