#include <iostream>

using namespace std;

int main()
{
    int *arr; // ��������� ��� ��������� ������ ��� ������
    int size; // ������ �������
    
    // ���� ���������� ��������� �������
    cout << "n = ";
    cin >> size;

    if (size <= 0) {
        // ������ ������ ������ ���� �������������
        cerr << "Invalid size" << endl;
        return 1;
    }

    arr = new int[size]; // ��������� ������ ��� ������

    // ���������� �������
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // ���������� ������������� ��������
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // ����� ���������� �� �����
    cout << "max = " << max << endl;

    delete [] arr; // ������������ ������
    
    return 0;
}
