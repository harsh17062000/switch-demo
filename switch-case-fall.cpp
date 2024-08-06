#include <iostream>
using namespace std;
int main(){
    cout << "enter the month " << "\n";
    cout << " press 1 for jan , 2 for feb ..... 12 for dec" << "\n";
    int month=0;
    cin >> month;
    
    switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    cout << " 31 days " << "/n ";
    break;
    case 2:
    cout << "28 or 29 days";
    break;

    case 4:
    case 6:
    case 9:
    case 11:
    cout << "30 days" << "\n ";
    break;
    default:
    cout << " invalid number " ;

}
}