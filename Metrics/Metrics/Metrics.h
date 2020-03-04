#pragma once
#include <iostream>
#include <fstream>

class Metrics
{
public:
	Metrics();
	Metrics(std::string nameOfFile);
	~Metrics();

	//template<typename Data>
	//void Write(Data);

	template<typename Data>
	void Write(Data input)
	{
		myFile->open("MyFile.csv", std::ofstream::out | std::ofstream::app);

		*myFile << input << ",";

		myFile->close();
	}
private:
	std::ofstream *myFile;
	std::string fileName;

};


/*
	funcionality
	- Create metrics handle
	- generate the CSV file (as long as there isn't one already there) 
	- Set the data type that will be placed in it 
	- A timer function
	- 
*/