#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num = 0;
    int start;
    int end;
    cout << "Введите начало диапозона:";
    cin >> start;
    cout << "Введите конец диапозона:";
    cin >> end;
    for (start; start <= end; start++) {
        if (start % 2 == 0) {
            num += start;
        }
    }
    cout << "Ответ:" << num;
    return 0;
}