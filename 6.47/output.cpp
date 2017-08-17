#include <iostream>
#include <vector>
#include <iterator>
#include "output.h"

using namespace std;

void output(vector<int> &v1) //out of debug state
{
#define NDEBUG
	auto beg = v1.begin();
	vector<int> v0 = { 0 };
#ifndef NDEBUG
	cerr << __func__ << ": size is " << v1.size() << endl;
#endif 
	if (beg != v1.end())
	{
		cout << *beg << endl;
		beg = v1.erase(beg);
	    output(v1);
		
	}
	
}

void output_1(vector<int> &v1) //in debug state
{
	auto beg = v1.begin();
	vector<int> v0 = { 0 };
	cerr << __func__ << ": size is " << v1.size() << endl;
	if (beg != v1.end())
	{
		cout << *beg << endl;
		beg = v1.erase(beg);
		output_1(v1);
	}
	
}