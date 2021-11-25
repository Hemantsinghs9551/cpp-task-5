#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
private:
    int seconds;
    int hh, mm, ss;

public:
    void getTime(void);
    void convertIntoSeconds(void);
    void displayTime(void);
};

void Time ::getTime(void)
{
    cout << "Enter Time:\n";
    cout << "hours: \n";
    cin >> hh;
    cout << "minutes: \n";
    cin >> mm;
    cout << "seconds: \n";
    cin >> ss;
}

void Time ::convertIntoSeconds(void)
{
    seconds = hh * 3600 + mm * 60 + ss;
}
void Time ::displayTime(void)
{
    cout << "The time is :" << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << ":" << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
}

int main()
{
    Time T;
    T.getTime();
    T.convertIntoSeconds();
    T.displayTime();
    return 0;
}