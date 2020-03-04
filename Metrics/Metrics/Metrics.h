#pragma once
#include <iostream>
#include <fstream>

class Metrics
{
public:
	Metrics();
	Metrics(std::string nameOfFile);
	~Metrics();

	void Clear();
	template<typename Data>
	void Write(Data input)
	{
		myFile->open("MyFile.csv", std::ofstream::out | std::ofstream::app);
		*myFile << input << std::endl;
		myFile->close();
	}

private:
	std::ofstream *myFile;
	std::string fileName;

};


/*
	funcionality
	- Set the data type that will be placed in it 
	- A timer function
	- 
*/