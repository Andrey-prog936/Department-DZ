#pragma once
#include <iostream>
using namespace std;
enum WorkerType
{
	NONE,
	DIRECTOR,
	ADMIN,
	PROGRAMMER,
	DESIGNER
};
class Worker
{
private:
	char name[50];
	int startYear;
	double salary;
	int experience;
	WorkerType type;
public:
	Worker();
	Worker(const char* name, int startYear, double salary,int experience, WorkerType type);
	// ~seters~
	void SetName(const char* name);
	void SetStartYear(int startYear);
	void SetSalary(double salary);
	void SetType(WorkerType type);
	// ~geters~
	const char* GetName()const;
	int GetStartYear()const;
	int GetExperience()const;
	double GetSalary()const;
	WorkerType GetType()const;
	// ~methods~
	void ShortPrint()const;
	void FullPrint()const;
};
