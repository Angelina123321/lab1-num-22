#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP (1251);
    SetConsoleOutputCP (1251);
    int n; // число, на яке ми будемо ділити
    cout << "Введіть число, на яке потрібно поділити: ";
    cin >> n;

    cout << "Числа, які без залишку діляться на " << n << " від 1 до 1000:" << endl;

    int count = 0; // лічильник чисел, які виведено в поточному рядку

    for (int i = 1; i <= 1000; i++) {
        if (i % n == 0) {
            cout << i << " ";
            count++;

            // Виводимо по три числа в одному рядку
            if (count == 3) {
                cout << endl;
                count = 0;
            }
        }
    }

    return 0;
}
