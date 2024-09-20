#include <iostream>
using namespace std;

string weekday1(int n){
    switch (n) {
        case 0:
            return "Sunday";
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        default:
            return "Error";
    }
}

void problem13(){
    int today, future;
    cin >> today >> future;
    if(today<0 || today>6 || future<0) {cout << "Invalid Input" << endl;}
    int res = (today + future)%7;
    cout << "Today is "  << weekday1(today) << " and the future day is " << weekday1(res) << endl;
}

void problem14(){
    int n;
    cin >> n;
    char lettr;
    switch(n>=0 && n<=100){
        case 1:
            switch(n/10){
                case 10:
                case 9:
                    lettr = 'A';
                    break;
                case 8:
                    lettr = 'B';
                    break;
                case 7:
                    lettr = 'C';
                    break;
                case 6:
                    lettr = 'D';
                    break;
                case 5:
                case 4:
                case 3:
                case 2:
                case 1:
                case 0:
                    lettr = 'F';
                    break;
                default:
                    cout << "Error" << endl;
                    break;
            }
            cout << lettr << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }

}

void problem15(){
    int n;
    cin >> n;
    switch (n>=0) {
        case 1:
            switch (n) {
                case 0:
                    cout << "It is zero" << endl;
                    break;
                default:
                    cout << "Positive" << endl;
                    break;
            }
            break;
        default:
            cout << "Negative" << endl;
            break;
    }
}
int main() {
    //problem13();
    //problem14();
    //problem15();
    
    return 0;
}
// RANGE FOR A RANDOM NUMBERS
//
// if range is from A to B:
//    rand = (rand%(B-1)) + A
//
/*
switch(a){
    case 90 ... 100:
        cout << "Yea" << endl;
        break;
    default:
        cout << "NO" << endl;
        break;
}
*/
