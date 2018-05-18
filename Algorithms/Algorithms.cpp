#include <iostream>
#include <algorithm>
#include <conio.h>

using namespace std;

struct OddElements
{
	bool operator()(const int& element)const
	{
		return element % 2 == 0;
	}
};

int main()
{
	//all-of
	_getch();
	return 0;
}