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

	Metrics* myMets;
	myMets = new Metrics(); 
	myMets->Clear();

	
	//myMets->Write(test);
}