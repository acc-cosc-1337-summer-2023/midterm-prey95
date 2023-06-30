#include "question2.h"

int convert_seconds(int seconds_since){
    int seconds;

    seconds = seconds_since % (24 * 3600);

    return seconds;
}

int get_hours(int seconds_since){
    int hour;

    hour = seconds_since / 3600;

    return hour;
}

int get_minutes(int seconds_since){
    int min;

    min = seconds_since % 3600;
    min = min / 60;

    return min;
}

int get_seconds(int seconds_since){
    int seconds;

    seconds = seconds_since % 60;

    return seconds;
}