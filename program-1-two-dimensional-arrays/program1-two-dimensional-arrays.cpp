
/* Neccessary libraries for assignment */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <Header.h>

using namespace std;

const int students = 15;
const int scores = 5;

void get_lt(int scores_lt[][scores]);
void calc_lt(int scores_lt[][scores], int averages_lt[]);
void prt_lt(string student_lt[], int scores_lt[][scores], int averages_lt[]);

int main()
{
    head();

    string student_lt[students] = {
    "LaTadrian","Bryce","Turner","Joseph",
    "Malihki","Candace","Percy","Jones","Tatum","Jack", "Wiltz","Adam",
    "Jeff","Jackson", "Johnson"
    };

    int scores_lt[students][scores];
    int averages_lt[students];

    get_lt(scores_lt);
    calc_lt(scores_lt, averages_lt);
    prt_lt(student_lt, scores_lt, averages_lt);

    return 0;
}

void get_lt(int scores_lt[][scores]){
    ifstream inputFile;
    inputFile.open("data_lt.txt");

    for(int i = 0; i < students; i++){
        for(int j = 0; j < scores; j++){
            inputFile >> scores_lt[i][j];
        }
    }
    inputFile.close();
}

void calc_lt(int scores_lt[][scores], int averages_lt[]){
    for (int i = 0; i < students; i++){
        int total = 0;
        for (int j = 0; j < scores; j++){
           total += scores_lt[i][j];
        }
        averages_lt[i] = total/scores;
    }
}

void prt_lt(string student_lt[], int scores_lt[][scores], int averages_lt[]){
    cout << left << setw(12) << "Name";
    for (int j = 0; j < scores; j++){
        cout << setw(10) << "Score " + to_string(j + 1);
    }
    cout << setw(10) << "Average" << endl;

    for (int i = 0; i < students; i++){
        cout << left << setw(12) << student_lt[i];
        for (int j = 0; j < scores; j++){
            cout << setw(10) << scores_lt[i][j];
        }
        cout << setw(10) << averages_lt[i] << endl;
    }
}
