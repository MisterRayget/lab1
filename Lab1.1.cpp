#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    double num;
    cout << "Введите число:";
    cin >> num;
    cout << num << "^2" << num * num << endl;
    cout << num << "^3" << num * num * num << endl;
    return 0;
}
