#ifndef Period_h
#include <bits/stdc++.h>
#include "Teacher.h"
#include "Time.h"

using namespace std;

class Period{
    private:
    string subject;
    string Class;
    Teacher teacher;
    Time startTime;
    Time endTime;

    public:
    Period(string sub, string sec_name, string teacher_name, Time startTime, Time endTime);
    ~Period();
};



#endif
