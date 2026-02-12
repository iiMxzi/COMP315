#include <iostream>

namespace userInOut {
    int x;
}

namespace simpCalc {
    int x, y;
}

namespace stringConcat{
    std::string firstName = "";
    std::string lastName = "";
}
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
////////////////////////////////////////////////////////////////////////////////////////////////////
    //first time messing with variables

    int firstNum = 15;
    int secondNum = 3;
    int sum = firstNum + secondNum;
    cout << "First Num = " << firstNum << endl;
    cout << "Second Num = " << secondNum << endl;
    cout << "Sum = " << sum << endl;

////////////////////////////////////////////////////////////////////////////////////////////////////
    string s1 = "My dog likes peanut butter";
    char c1 = 'a';

    cout << "String - "<< s1 << endl;
    cout << "Char - " <<c1 << endl;

////////////////////////////////////////////////////////////////////////////////////////////////////

    //multiple variables
    int x = 5, y = 6, z = 50;
    cout << "Multiple variable " << x+y+z << endl;

////////////////////////////////////////////////////////////////////////////////////////////////////

    int x1,y1,z1;
    x1=y1=z1=50;
    cout << "Multiple variables to one value " << x1+y1+z1 << endl;

    //Constants
    const int myNum = 15;
    int num1 = 5;
    cout << "Constants "<<myNum+num1<< endl;

////////////////////////////////////////////////////////////////////////////////////////////////////

    // INPUT AND OUTPUT
    /*
    cout << "Type out a number" << endl;
    cin >> userInOut::x;
    cout << "You entered: " << userInOut::x << endl;
    */
////////////////////////////////////////////////////////////////////////////////////////////////////

    // Creating a simple calculator
    /*
    cout << "Enter your first number: " << endl;
    cin >> simpCalc::x;
    cout << "Enter your second  number: " << endl;
    cin >> simpCalc::y;
    cout << "Results:" << endl
        << "Addition: "<<simpCalc::x + simpCalc::y<< endl
        << "Subtraction: "<<simpCalc::x - simpCalc::y<< endl
        << "Division: "<<simpCalc::y / simpCalc::x<< endl
        << "Multiplication: "<<simpCalc::x * simpCalc::y<< endl;
    */
////////////////////////////////////////////////////////////////////////////////////////////////////

    // String Concatenation & Other Shyt
    /*
    cout << "Enter your first name: ";
    cin >> stringConcat::firstName;
    cout << "Enter your last name: ";
    cin >> stringConcat::lastName;

    cout << "Full Name using '+': "<<stringConcat::firstName+stringConcat::lastName<< endl;
    cout << "Full Name using "": "<<stringConcat::firstName+" "+stringConcat::lastName<< endl;
    cout << "Full Name using .append(): "<<stringConcat::firstName.append(stringConcat::lastName)<< endl;

    //String lengths
    string text = "Ayabonga Mazibuko";
    cout << "The length of the string is: " <<text.length()<< endl;

    //String concatenation
    string newString = "Hello";
    cout << newString[newString.length()-1]
         << newString[newString.length()-2]
         << newString[newString.length()-3]
         << newString[newString.length()-4]
         << newString[newString.length()-5] << endl;
    */
////////////////////////////////////////////////////////////////////////////////////////////////////
    // IF ELSE
    int numberOfApples = 20;
    int numberOfPears = 40;
    if (numberOfApples > numberOfPears) {
        cout << "There are more apples than pears" << endl;
    } else if (numberOfApples < numberOfPears) {
    cout << "There are more pears than apples" << endl;
    } else {
    cout << "There are the same number of apples and pears" << endl;
    }
    return 0;
}
