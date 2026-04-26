#include<iostream>
using namespace std;

char object[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};
bool gravity = false;

void displayworld() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << object[i][j] << " \t";
        }
        cout << endl;
    }
}

void setGravitystatus(bool status) {
    gravity = status;
}

void timetick(int ticks) {
    for (int t = 0; t < ticks; t++) {
        if (gravity) {
            for (int j = 0; j < 5; j++) {
                for (int i = 3; i >= 0; i--) {
                    if (object[i][j] == '#' && object[i + 1][j] == '-') {
                        swap(object[i][j], object[i + 1][j]);
                    }
                }   
            }
        }
        cout<<endl;
    }
}


int main() {
    displayworld();
    setGravitystatus(true);
    timetick(3);
    displayworld();
    return 0;
}