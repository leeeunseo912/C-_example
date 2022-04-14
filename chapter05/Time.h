#pragma once
#include <iostream>
#include <string>
using namespace std;

int hour = 14;

void print(){
    cout << "global hour : " << hour << endl;
}

class Time {
protected:
    int hour;
    int minute;

public:
    Time(int hour = 0, int minute = 0) : hour(hour), minute(minute) {
        print();
        ::print();
    }
    ~Time() //소멸자, 인스턴스가 사라질 때 자동으로 호출
    void print() {
        cout << hour << ":" << minute << endl;
    }
};