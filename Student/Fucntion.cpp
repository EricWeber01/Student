#include "Header.h"
Student::Student()
{
    Name[0] = '\0', Surname[0] = '\0', Patronomyc[0] = '\0', Faculty[0] = '\0', Average = 0, memset(Data, 0, sizeof(Data));
}
void Student::Get()
{
    cout << "Введите имя студента ==> " << "\n";
    cin >> Name;
    cout << "Введите отчества студента ==> " << "\n";
    cin >> Patronomyc;
    cout << "Введите фамилию ==> " << "\n";
    cin >> Surname;
    cout << "Введите год рождения ==> " << "\n";
    cin >> Data[0];
    cout << "Введите месяц рождения ==> " << "\n";
    cin >> Data[1];
    cout << "Введите день рождения ==> " << "\n";
    cin >> Data[2];
    cout << "Введите курс на котором учится студент ==> " << "\n";
    cin >> Course;
    cin.sync();
    cout << "Введите факультет ==> " << "\n";
    cin.getline(Faculty, 50);
    cout << "Введите средний бал ==> " << "\n";
    cin >> Average;
}

void Student::Set()
{
    cout << "ФИО студента " << Name << " " << Surname << " " << Patronomyc << "\n";
    cout << "Дата рождения " << Data[2] << "." << Data[1] << "." << Data[0] << "\n";
    cout << "Обучается на факультете " << Faculty << " " << "курс номер " << Course << "\n";
    cout << "Средний бал студента " << Average << endl;
    cout << "Он  ";
    switch (Average)
    {
    case (2):
    {
        cout << "Двоечник " << "\n";
        break;
    }
    case (3):
    {
        cout << "Троешник " << "\n";
        break;
    }
    case (4):
    {
        cout << "Хорошист " << "\n";
        break;
    }
    case (5):
    {
        cout << "Отличник " << "\n";
        break;
    }
    }
}