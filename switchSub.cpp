#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//subscription program with switches instead of switch statements
int main(){
    //seeding random number generator
    srand(static_cast<unsigned int>(time(0)));
    //random generator
    int daysUntilExpiration = (rand() % 11) + 1;

    //using switches
    switch(daysUntilExpiration){
        case 10:
            cout << "Your subscription will expire soon. Renew now!!" << endl;
            break;
        case 2: case 3: case 4: case 5:
            cout << "Your subscription will expire in " << daysUntilExpiration <<
            ".Renew now and save 10%!!" << endl;
            break;
        case 1:
        cout << "Your subscription expires within a day.\n Renew now and and save 20%" << endl;
        break;
        case 0:
        cout << "Your subscription has expired!!" << endl;
        break;
        default:
        cout << "You have an active subscription" << endl;
        break;
    }
    return 0;
}