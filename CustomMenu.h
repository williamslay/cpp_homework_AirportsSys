#pragma once
#include<iostream>
#include<string>
#include"Function.h"
#include"Struct.h"
#include"match.h"
#include"Print.h"
#include"MENUchoose.h"
using namespace std;
int HOMEpage(Passenger* P, The_users* users, int id, FlightID* ID, FlightTicket DATA[366][999], FlyhistoryAndOrder* FO);
int OrderMENU(FlightID* ID, FlightTicket DATA[366][999], int IDcount, Passenger* P, The_users* users, FlyhistoryAndOrder* FO, int id);
int BookingMENU(FlightID* ID, FlightTicket DATA[366][999], int IDcount, Passenger* P, The_users* users, bookiinginformation* custom, int id);
int Refunding_ChngeMENU(FlightID* ID, FlightTicket DATA[366][999], int IDcount, Passenger* P, The_users* users, FlyhistoryAndOrder* FO, int id, bookiinginformation* custom);
void SignOutMENU(FlightTicket DATA[366][999], int IDcount, Passenger* P, The_users* users);
void CustomMenu(FlightID* ID, FlightTicket DATA[366][999], int IDcount, Passenger* P, The_users* users, FlyhistoryAndOrder* FO, bookiinginformation* custom, int id);