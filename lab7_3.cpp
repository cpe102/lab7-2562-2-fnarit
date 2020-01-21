//status = "ONE-NIGHT-STAND";
#include <iostream>
using namespace std;

int main(){
    int age,height,money;
    //string status;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 160){
            cout << "status = UNFRIEND";
        }else{
            if(height < 175){
            cout << "status = FRIEND";
            }else{
                cout << "Enter your money: ";
                cin >> money;
                if(money > 69000000){
                cout << "status = MARRIED";
                }else{
                    cout << "status = ONE-NIGHT-STAND";
                }
            }
        }

     }else{
        if(age < 30){
            cout << "Enter your money: ";
            cin >> money;
            if(money > 10000000){
            cout << "status = BEST FRIEND";
            }else{
                cout << "status = UNFRIEND";
            }
        }else{
             cout << "status = UNFRIEND";
        }
    }
}
