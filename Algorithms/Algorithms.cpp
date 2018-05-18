#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <conio.h>
#include <random>

using namespace std;

struct OddElements
{
	bool operator()(const int& element)const
	{
		return element % 2 == 0;
	}
};
struct ShowElement
{
	void operator()(const int& element)const
	{
		cout << element << " ";
	}
};

int main()
{
	vector<int> v({ 1,2,3,4,5,6,7,8 });
	//vector<int> v({ 2,4,6,8,10 });
	//list<int> v({ 2,4,6,8,10 });
	//all-of
	cout << (all_of(v.begin(), v.end(), OddElements()) ? "All elements are odd": "Not all elements are odd") << endl;

	//any-of
	cout << (any_of(v.begin(), v.end(), OddElements()) ? "1" : "2") << endl;

	//rotate
	for_each(v.begin(), v.end(), ShowElement());
	cout << endl;
	rotate(v.begin(), v.begin() + 2, v.end());
	for_each(v.begin(), v.end(), ShowElement());
	cout << endl;


	//random_shuffle
	for_each(v.begin(), v.end(), ShowElement());
	cout << endl;
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), ShowElement());
	cout << endl;
	cout << endl;

	
	//shuffle
	for_each(v.begin(), v.end(), ShowElement());
	cout << endl;
	random_device rd;
	mt19937 g(rd());
	shuffle(v.begin(), v.end(), g);
	for_each(v.begin(), v.end(), ShowElement());
	cout << endl;
	nth_element(v.begin(), v.begin() + 4, v.end());
	for_each(v.begin(), v.end(), ShowElement());
	cout << endl;

	_getch();
	return 0;
}