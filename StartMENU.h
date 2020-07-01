#pragma once
//本文件存储起始界面的函数
#include"Function.h"
#include"Print.h"
#include<iostream>
#include<graphics.h>
#include<easyx.h>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;
int StartMENU(users u[999], Passenger p[999]);
int CheckID(char* n, char* m, users u[999]);
int StartMENU_RegisterMENU(users u[999], Passenger p[999]);
int StartMenu_AdminRegisterMENU(users u[999], Passenger p[999]);