#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Ukr");
    cout << "����� � �����������!" << endl;
    int a, b, selection;
    cout << "������ ����� a:";
    cin >> a;
    cout << "������ ����� b:";
    cin >> b;
    cout << "������� ��" << endl <<
        "1:���������" << endl <<
        "2:³�������" << endl <<
        "3:��������" << endl <<
        "4:ĳ�����" << endl;
    cin >> selection;
    switch (selection)
    {
    case 1:
        cout << "���������" << " " << a + b << endl;
        break;
    case 2:
        cout << "³�������" << " " << a - b << endl;
        break;
    case 3:
        cout << "��������" << " " << a * b << endl;
        break;
    case 4:
        cout << "ĳ�����" << " " << (float)a / b << endl;
        break;
    default:
        cout << "�������! �� �� ������ ���� � ��";
        break;
    }
}