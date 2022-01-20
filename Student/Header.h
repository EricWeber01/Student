#pragma once
#include <iostream> 
#include <Windows.h>
#include <string>
using namespace std;
class Student
{
private:
    char Name[20];
    char Surname[20];
    char Patronomyc[20];
    int Data[3];
    int Average;
    char Faculty[50];
    int Course;
public:
    Student();
    void Get();
    void Set();
};