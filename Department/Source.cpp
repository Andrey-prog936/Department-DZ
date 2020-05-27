#include <iostream>
#include "Department.h"

int main()
{
	Worker r1("Andrey", 2019, 9696, 100, PROGRAMMER);
	r1.FullPrint();
	r1.ShortPrint();


	system("pause");
	return 0;
}