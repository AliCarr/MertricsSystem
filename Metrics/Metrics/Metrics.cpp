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
	{
		myFile = new std::ofstream();
		
	}

}

Metrics::Metrics(std::string nameOfFile)
{
	if (!std::ifstream(nameOfFile))
		myFile = new std::ofstream(nameOfFile);

	else
	{
		myFile = new std::ofstream();
		myFile->open(nameOfFile, std::ofstream::app);
	}
}

Metrics::~Metrics()
{
	if (myFile)
	{
		delete myFile;
		myFile = 0;
	}
}

//template<typename Data>
//void Metrics::Write(Data input)
//{
//	myFile->open("MyFile.csv", std::ofstream::out | std::ofstream::app);
//
//	*myFile << input << ",";
//
//	myFile->close();
//}
