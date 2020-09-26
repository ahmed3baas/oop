#include <iostream>
#include "Employee.h"
using namespace std;
int main()
{
	Employee exm = Employee("ahmed", 2500, 33, 54);
	cout << exm.getName() <<endl;
	exm.setName("moaz");
	cout << exm.getName();
	return 0;
}
