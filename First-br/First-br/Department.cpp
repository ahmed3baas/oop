#include "Department.h"

void Department::setName(string n)
{
	name = n;
}

void Department::setDepartmentId(int id)
{
	departmentId = id;
}

void Department::setManagerName(string mn)
{
	mangerName = mn;
}

string Department::getName()
{
	return name;
}

int Department::getDepartmentId()
{
	return departmentId;
}

string Department::getMangerName()
{
	return mangerName;
}


