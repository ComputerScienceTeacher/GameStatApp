#include <iostream>

using namespace std;

int main (){
    string name;
    int score;
    double hoursPlayed;
    double scorePerHour;

    cout << "What is your name?: ";
    cin >> name;
    cout << "What score did you get?: ";
    cin >> score;
    cout << "How many hours did you play?: ";
    cin >> hoursPlayed;
    scorePerHour = score/hoursPlayed;

    cout << "Name: \t\t" << name << "\n" 
         << "Score: \t\t"  << score << "\n"
         << "Hours Played: \t" << hoursPlayed << "\n"
         << "Score per hour: " << scorePerHour << "\n";   


}