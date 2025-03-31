#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*program shows days till subscriprion expires
This also includes importing new functions from the library(s)*/
int main(){
    //we seed the random number
    srand(static_cast<unsigned int>(time(0)));
    //we now declare var for random number
    int daysUntilExpiration = (rand() % 11) + 1;

            //using if-else if statements
            if(daysUntilExpiration == 10){
                cout << "Your subscription will expire soon. Renew Now!!" << endl;
            }else if(daysUntilExpiration <= 5){
                cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!!" << endl;
            }else if(daysUntilExpiration == 1){
                cout << "Your subscritpion expires in 1 day. Renew now and save 20%" << endl;
            }else if(daysUntilExpiration == 0){
                cout << "Your subscription has expired" << endl;
            }else{
                cout << "You have an active subscription" << endl;
            }
    return 0;
}