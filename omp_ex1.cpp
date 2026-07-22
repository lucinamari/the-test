#include <iostream>
#include <omp.h>
#include <cmath>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
int main(){
    #pragma omp parallel
    {
        cout << "Hello people.\t";
    }
    cout << endl << "====================" << endl;
    cout << endl;
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        #pragma omp critical
        {
            cout << "Hello thread " << id << ". \t";
        }
    }
    return(0);
}