#include "Timer.h"


Timer::Timer() 
{
}

void Timer::Start()
{
	timeAtStart = timer.now();
}

float Timer::Finish()
{
	float returnTime = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - timeAtStart).count();
	return returnTime;
}