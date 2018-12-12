#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "Enter: ";
    cin >> input;
    while(!cin){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Wrong input type! Must be of type int." << endl;
        cout << "Enter: ";
        cin >> input;
    }
    exit(0);
}
