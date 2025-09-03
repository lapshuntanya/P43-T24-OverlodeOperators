#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Date
{
	int year;
	int month;
	int day;

public:
	//--------- ������������ �� ����������� ---------
	Date(); // �� ������������� - ������� ����
	Date(int year, int month, int day); // � ����������� - ������ ����	

	bool isLeapYear()const; //�������� �� ���������� ��
	int monthDays()const; //ʳ������ ��� �� ������
	void nextDate(); // �������� ����
	void prevDate(); // ��������� ����

	//--------- �������� ---------
	void setYear(int year);
	int getYear()const;
	void setMonth(int month);
	int getMonth()const;
	void setDay(int day);
	int getDay()const;

	void showDate()const;
	bool valid()const; // �������� ���� �� ����������
};

