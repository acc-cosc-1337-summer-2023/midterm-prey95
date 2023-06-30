#include "question2.h"


int main()
{
    int sec, hours = 0, minutes = 0, seconds = 0;
    sec = convert_seconds(1570846218);
    hours = get_hours(sec);
    minutes = get_minutes(sec);
    seconds = get_seconds(sec);

    cout <<"The time is "<< hours << ":" << minutes <<":" << seconds << "\n";

    sec = convert_seconds(1570875018);
    hours = get_hours(sec);
    minutes = get_minutes(sec);
    seconds = get_seconds(sec);

    cout <<"The time is "<< hours << ":" << minutes <<":" << seconds;


    return 0;
}