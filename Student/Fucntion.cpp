#include "Header.h"
Student::Student()
{
    Name[0] = '\0', Surname[0] = '\0', Patronomyc[0] = '\0', Faculty[0] = '\0', Average = 0, memset(Data, 0, sizeof(Data));
}
void Student::Get()
{
    cout << "������� ��� �������� ==> " << "\n";
    cin >> Name;
    cout << "������� �������� �������� ==> " << "\n";
    cin >> Patronomyc;
    cout << "������� ������� ==> " << "\n";
    cin >> Surname;
    cout << "������� ��� �������� ==> " << "\n";
    cin >> Data[0];
    cout << "������� ����� �������� ==> " << "\n";
    cin >> Data[1];
    cout << "������� ���� �������� ==> " << "\n";
    cin >> Data[2];
    cout << "������� ���� �� ������� ������ ������� ==> " << "\n";
    cin >> Course;
    cin.sync();
    cout << "������� ��������� ==> " << "\n";
    cin.getline(Faculty, 50);
    cout << "������� ������� ��� ==> " << "\n";
    cin >> Average;
}

void Student::Set()
{
    cout << "��� �������� " << Name << " " << Surname << " " << Patronomyc << "\n";
    cout << "���� �������� " << Data[2] << "." << Data[1] << "." << Data[0] << "\n";
    cout << "��������� �� ���������� " << Faculty << " " << "���� ����� " << Course << "\n";
    cout << "������� ��� �������� " << Average << endl;
    cout << "��  ";
    switch (Average)
    {
    case (2):
    {
        cout << "�������� " << "\n";
        break;
    }
    case (3):
    {
        cout << "�������� " << "\n";
        break;
    }
    case (4):
    {
        cout << "�������� " << "\n";
        break;
    }
    case (5):
    {
        cout << "�������� " << "\n";
        break;
    }
    }
}