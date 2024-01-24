#include <iostream>
#include "LogDuration.h"
#define UNIQ_ID_IMPL(lineno) _a_local_var_##lineno
#define UNIQ_ID(lineno) UNIQ_ID_IMPL(lineno)
#define LOG_DURATION(message) LogDuration UNIQ_ID(__LINE__) {message}
int main()
{
    LOG_DURATION("Fill vector");
    vector<int>* numbers = new vector<int>;
    for (int count = 0; count < 100000; count++)
    {
        numbers->push_back(rand());
    }
}
