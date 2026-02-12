#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "First change to be commited!" << endl;
    cout << 67;
    cout << "\n3 + 3 = " << 3 + 3 << endl;
    cout << "\n3 x 3 = " << 3 * 3 << endl;
    cout << "\n3 / 3 = " << 3/3 << endl;
    //First comment!

    /* First
    multi
    line
    comment */

    //first time messing with variables
    int firstNum = 15;
    int secondNum = 3;
    int sum = firstNum + secondNum;
    cout << "First Num = " << firstNum << endl;
    cout << "Second Num = " << secondNum << endl;
    cout << "Sum = " << sum << endl;

    string s1 = "My dog likes peanut butter";
    char c1 = 'a';

    cout << "String - "<< s1 << endl;
    cout << "Char - " <<c1 << endl;

    //multiple variables
    int x = 5, y = 6, z = 50;
    cout << "Multiple variable " << x+y+z << endl;

    int x1,y1,z1;
    x1=y1=z1=50;
    cout << "Multiple variables to one value " << x1+y1+z1 << endl;

    //Constants
    const int myNum = 15;
    int num1 = 5;
    cout << "Constants "<<myNum+num1<< endl;


    return 0;
}
