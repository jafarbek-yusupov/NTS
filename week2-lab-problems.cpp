#include <iostream>
using namespace std;

void problem1() {
    int intNumber = 21;
    float floatNumber = 3.14;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';

    cout << "Value of intNumber: " << intNumber << " Size: "<< sizeof(intNumber) << endl;
    cout << "Value of floatNumber: " << floatNumber << " Size: "<< sizeof(floatNumber) << endl;
    cout << "Value of doubleNumber: " << doubleNumber << " Size: "<< sizeof(doubleNumber) << endl;
    cout << "Value of boolean: " << boolean << " Size: "<< sizeof(boolean) << endl;
    cout << "Value of charName: " << charName << " Size: " << sizeof(charName) << endl;
}

void problem2() {
    cout << "Name: Ja'farbek Yusupov \nID: 240057 \nFavorite Song: Childish Gambino - Me and Your Mama \nFavorite Movie: Whiplash" << endl;
}

void problem3() {
    cout << "\”I’m standing\” on the edge of some crazy cliff.\n"
            "What I have to do, I have to catch everybody\\ \n"
            "  if they start to go over the cliff—I mean\\ \n"
            "   where they’re going I have to come out \n"
            "   from somewhere and\t catch them."<< endl;
}

void problem4() {
    int a = 189;
    char b = 'B';
    int decimalValueOfB = b;
    cout << a / 4.0 << endl;
    cout << (int)b << endl;
    cout << (a + b) / 5.0 << endl;
    cout << (char)(b + a/3 - 7) << endl;
}

void problem5() {
    cout << "Sum=" << 12+38 << endl;
    cout << "Product=" << 12*38 << endl;
}

void problem6() {
    int v1, v2;
    cin >> v1 >> v2;
    cout << "Sum: " << v1 << " + " << v2 << " = " << v1 + v2 << endl;
}

void problem7() {
    int x, y;
    cin >> x >> y;
    cout << "Sum: " << v1 << " + " << v2 << " = " << v1 + v2 << endl;
}
int main() {
    //problem1()
    //problem2()
    //problem3();
    //problem4();
    problem5();
    problem6();
    problem7();
    // problem8();
    // problem9();
    // problem10();
    // problem11();
    // problem12();
    // problem13();
    // problem14();
    // problem15();
}

