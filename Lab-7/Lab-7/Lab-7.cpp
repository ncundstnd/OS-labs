﻿#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	time_t now = time(0);
	tm ltm;
	localtime_s(&ltm, &now);
	printf("Текущая локальная дата и время: %02d.%02d.%d %02d:%02d:%02d\n",
		ltm.tm_mday, ltm.tm_mon + 1, ltm.tm_year + 1900,
		ltm.tm_hour, ltm.tm_min, ltm.tm_sec);
}