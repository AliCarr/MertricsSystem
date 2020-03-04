#include "Metrics.h"


Metrics::Metrics()
{
	if (!std::ifstream("MyFile.csv"))
		myFile = new std::ofstream("MyFile.csv");
}

Metrics::Metrics(std::string nameOfFile)
{
	if(!std::ifstream(nameOfFile))
		myFile = new std::ofstream(nameOfFile);
}

Metrics::~Metrics()
{

}
