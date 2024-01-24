#pragma once
#include <chrono>
using namespace std::chrono;
using namespace std;
class LogDuration
{
public:

	explicit LogDuration(const string& msg = "")
	{
		start = steady_clock::now();
		auto message = msg + ": ";
	}
	~LogDuration()
	{
		auto finish = steady_clock::now();
		auto dur = finish - start;
		cerr << duration_cast<milliseconds>(dur).count() << " ms" << endl;
	}
private:
	steady_clock::time_point start;
};

