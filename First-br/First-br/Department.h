#include <string>
using namespace std;
#pragma once
class Department
{
private:
	string name, mangerName;
	int departmentId;

public:
	void setName(string n);
	void setDepartmentId(int id);
	void setManagerName(string mn);

	string getName();
	int getDepartmentId();
	string getMangerName();

	
};

