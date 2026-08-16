#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    int start_km, end_km, hours, minutes, seconds;
    cout << "Data inputs are integer!." << endl;
    cout << "========================================================================" << endl;
    cout << "Enter start kilometer : ";
    cin >> start_km;
    cout << "Enter end kilometer : ";
    cin >> end_km;
    cout << "Enter time used (hour minute second) : ";
    cin >> hours >> minutes >> seconds;
    cout << "========================================================================" << endl;
    int distance = end_km - start_km;
    double total_hours = hours + (minutes / 60.0) + (seconds / 3600.0);
    double average_velocity = distance / total_hours;
    cout << "Car traveled " << distance << " kilometers in " << hours << " hrs " << minutes << " min " << seconds << " sec." << endl;
    cout << fixed << setprecision(4);
    cout << "Average velocity was " << average_velocity << " kph." << endl;
    return 0;
}