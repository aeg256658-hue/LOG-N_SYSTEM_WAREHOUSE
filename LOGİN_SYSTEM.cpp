#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
using namespace std;
int main () {

    if(2>1) {

string Using_Name;
int Born_Year;
int Born_Month;
int Born_Day;

cout<<"Welcome to our game. "<<endl;


cout<<"What your using name? : "<<endl;
cin>>Using_Name;
cout<<"Your using name is : "<<Using_Name<<endl;

cout<<"What year were you born? : "<<endl;
cin>>Born_Year;
cout<<"Your born year is : "<<Born_Year<<endl;

cout<<"What month were you born? : "<<endl;
cin>>Born_Month;
cout<<" Your born month is : "<<Born_Month<<endl;

cout<<"What day of the month were you born on? : "<<endl;
cin>>Born_Day;
cout<<"You born : "<<Born_Day<<" of month"<<endl<<endl;

ofstream file("LOGİN_SYSTEM.txt", ios::app);

if (file.is_open()) {

file<<"New Player "<<"Join The System"<<endl;

file<<"("<<"PLAYER USİNG NAME İS : "<<Using_Name<<endl<<"PLAYER BORN YEAR İS : "<<Born_Year<<endl<<"PLAYER BORN MONTH İS : "<<Born_Month<<endl<<"PLAYER BORN DAY İS : "<<Born_Day<<endl<<")"<<endl;

file.close();
}
else {
    cout<<"!!!FILE COULD NOT BE OPENED, THERE IS A TECHNICAL PROBLEM!!!"<<endl;
}
    }

}

