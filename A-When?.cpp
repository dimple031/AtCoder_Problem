#include <iostream>
using namespace std;

int main()
{
    int K;
    cin >> K;

    int totalmm = 21 * 60 + K; // Convert 21:00 to minutes and add K minutes

    int newHr = (totalmm / 60) % 24; // Calculate new hour
    int newMin = totalmm % 60; // Calculate new minute

    // Print in HH:MM format with leading zeros
    cout << (newHr < 10 ? "0" : "") << newHr << ":" << (newMin < 10 ? "0" : "") << newMin << endl;

    return 0;
}
