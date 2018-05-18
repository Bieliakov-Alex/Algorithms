#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
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
	//vector<int> v({ 1,2,3,4,5,6,7,8 });
	//vector<int> v({ 2,4,6,8,10 });
	list<int> v({ 2,4,6,8,10 });
	//all-of
	cout << (all_of(v.begin(), v.end(), OddElements()) ? "All elements are odd": "Not all elements are odd") << endl;
	

	_getch();
	return 0;
}