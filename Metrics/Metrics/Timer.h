#pragma once
#include <iostream>
#include <chrono>

class Timer
{
public:
	Timer();
	void Start();
	float Finish();

private:
	std::chrono::steady_clock::time_point currentTime;
	std::chrono::steady_clock::time_point timeAtStart;
	std::chrono::high_resolution_clock timer;
};
