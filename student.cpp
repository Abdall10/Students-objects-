#include <iostream>
using namespace std;

const int studentCount = 5; // Renamed from 'size' to 'studentCount'

class Students {
  private:
    int mark = 0;

  public:
    Students() {
        cout << "Enter your mark: ";
        cin >> mark;
    }

    friend void average(Students ob[studentCount]);
};

void average(Students ob[studentCount]) {
    int sum = 0;
    for (int i = 0; i < studentCount; i++) {
        sum += ob[i].mark;
    }
    cout << "The average of all students: " << sum / studentCount << endl; // Integer division
}

int main() {
    Students ob[studentCount]; // Create an array of Students objects
    average(ob); // Call the average function
    return 0;
}