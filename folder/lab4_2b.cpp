#include <iostream>
using namespace std;
int main(){
    int score[] = {81, 73, 67, 50, 1};
    float time[] = {8.00, 12.00, 23.59, 24.01};
    for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++){
        cout << "loop " << i << " score = " << score[i] << endl;
        cout << "grade = ";
        cal_grade(score[i]);
        cout << endl;
    }
    for (int i = 0; i < sizeof(time) / sizeof(time[0]); i++){
        cout << "loop " << i << " time = " << time[i] << endl;
        cout << "grade = ";
        greeting_time(time[i]);
        cout << endl;
    }
    return(0);
}
void cal_grade(int mark){
    if (mark >= 80) cout << "A";
    else if (mark >= 70) cout << "B";
    else if (mark >= 60) cout << "C";
    else if (mark >= 50) cout << "D";
    else cout << "F";
}
void greeting_time(float time){
    if ((time >= 0.00) && (time < 24.00)) {
        if ((time >= 0.00) && (time < 12.00)) {
            cout << "Good Morning" << endl; }
        else if ((time >= 12.00) && (time < 18.00)) {
            cout << "Good Afternoon" << endl; }
        else if ((time >= 18.00) && (time < 24.00)) {
            cout << "Good Evening" << endl; }
    }
    else cout << "Time is out of range" << endl;
}