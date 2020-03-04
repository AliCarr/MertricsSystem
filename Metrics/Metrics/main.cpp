#include <iostream>
#include "Metrics.h"
using namespace std;

struct information
{
	int i;
	int j;

	friend ofstream& operator<<(ofstream& out, const information& myinfo)
	{
		out << myinfo.i << "," << myinfo.j   << ", ";
		return out;
	}
};

int main()
{
	information test;
	test.i = 8;
	test.j = 9;
	Metrics* myMets;
	myMets = new Metrics(); 

	myMets->Write(test);
}