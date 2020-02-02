#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    float angle;
    int choice;
    cout << "Which operation do you want me to perform? \nsin = 0\ncos = 1\ntan = 2 \n";
    cin >> choice;
    cout << "Input angle: \n";
    cin >> angle;
    switch (choice)
    {
    case  0:
    cout << sin(angle) << "\n";
        break;
    
    case 1:
    
        cout << cos(angle) << "\n";
        
    case 2:
    cout << tan(angle) << "\n";
    break;

    default:
    cout << "That's not a valid input, buddy. Come back later\n";
        break;
    } 

return 0;
}