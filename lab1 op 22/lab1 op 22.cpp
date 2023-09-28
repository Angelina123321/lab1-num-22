#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP (1251);
    SetConsoleOutputCP (1251);
    int n; // �����, �� ��� �� ������ �����
    cout << "������ �����, �� ��� ������� �������: ";
    cin >> n;

    cout << "�����, �� ��� ������� ������� �� " << n << " �� 1 �� 1000:" << endl;

    int count = 0; // �������� �����, �� �������� � ��������� �����

    for (int i = 1; i <= 1000; i++) {
        if (i % n == 0) {
            cout << i << " ";
            count++;

            // �������� �� ��� ����� � ������ �����
            if (count == 3) {
                cout << endl;
                count = 0;
            }
        }
    }

    return 0;
}
