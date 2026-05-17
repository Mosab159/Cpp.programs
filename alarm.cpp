#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>
#include <unistd.h>
using namespace std;
using namespace std::chrono;

long userseconds, currentseconds;
int h, m, s;
void calc();

int main()
{
    cout << "*****alarm programm******\n\n"
         << endl;

    cout << "Enter the alarm time in 24 format (hh:mm:ss): ";
    cin >> h >> m >> s;
    calc();

    return 0;
}

void calc()
{
    userseconds = h * 3600 + m * 60 + s;

    auto now = system_clock::now();
    time_t cuurent_time = system_clock::to_time_t(now);
    tm *time_now = localtime(&cuurent_time);

    currentseconds =
        (time_now->tm_hour * 3600) + (time_now->tm_min * 60) + time_now->tm_sec;

    long diff = userseconds - currentseconds;

    if (diff < 0)
        cout << "the time you've entred has already passed!";

    else

    {
        cout << "Alarm will ring in " << diff << " seconds." << endl;
        sleep(diff);
        system("mpv /usr/share/sounds/freedesktop/stereo/alarm-clock-elapsed.oga");
    }
}