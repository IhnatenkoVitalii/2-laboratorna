#include <iostream>
using namespace std;


int main()
{

    int x, y, selection;
    cout << "Enter a number x:";
    cin >> x;
    cout << "Enter a number y:";
    cin >> y;
    cout << "Choose a math operation" << endl <<
        "1:+" << endl <<
        "2:-" << endl <<
        "3:*" << endl <<
        "4:/" << endl;
    cin >> selection;
    switch (selection)
    {
    case 1:
        cout << x + y << endl;
        break;
    case 2:
        cout << x - y << endl;
        break;
    case 3:
        cout << x * y << endl;
        break;
    case 4:
        cout << (float)x / y << endl;
        break;
    default:
        cout << "ERROR!!!";
        break;
    }
}