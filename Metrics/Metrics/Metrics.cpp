#include "Metrics.h"

struct information
{
	int i;
	int j;
};

Metrics::Metrics()
{
	if (!std::ifstream("MyFile.csv"))
		myFile = new std::ofstream("MyFile.csv");

	else
		myFile = new std::ofstream();

	fileName = "MyFile.csv";
}

Metrics::Metrics(std::string nameOfFile)
{
	if (!std::ifstream(nameOfFile))
		myFile = new std::ofstream(nameOfFile);

	else
	{
		myFile = new std::ofstream();
		//myFile->open(nameOfFile, std::ofstream::app);
	}

	fileName = nameOfFile;
}

Metrics::~Metrics()
{
	if (myFile)
	{
		delete myFile;
		myFile = 0;
	}
}

void Metrics::Clear()
{
	myFile->open(fileName, std::ofstream::out | std::ofstream::trunc);
	myFile->close();
}