#include <iostream>
#include <unistd.h> // for sleep() on Unix/Mac

using namespace std;

int main() {
    int seconds;

    cout << "Enter countdown time in seconds: ";
    cin >> seconds;

    if (seconds <= 0) {
        cout << "Time must be more than 0.\n";
        return 1;
    }

   cout << "Starting countdown..." << endl;

    while (seconds > 0) {
     cout << seconds << " seconds remaining" << endl;
        sleep(1); // wait for 1 second
        seconds = seconds -1;
    }

 cout << "Time's up!" << endl;

    return 0;
}
