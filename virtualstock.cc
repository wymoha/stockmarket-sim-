#include <iostream>
#include <string>
#include <string_view>
#include <time.h>
#include <unistd.h>
#include <iomanip>
using namespace std;


int main() {
string change_type;
string company_list[19]{"OMNI","HYDR","CHIP","NOVA","VOLT","AERO","CYBR","LUMN","VRTX","NEXA","ORBT","QUAD","SYNE","PRMX","EVRA","AXIS","KORP","FLUX","TRNX"};
float prices[19]{100,250,120,180,90,340,65,210,150,45,300,110,80,175,60,225,130,95,270};
srand(time(NULL));
while (1==1)
{
float random_change = static_cast <float> (rand()) / static_cast <float> (RAND_MAX) *10;
int random_company = rand() % 19;
int decline_increase = rand() % 2;



if (decline_increase == 1)
{
    change_type = "+";
    prices[random_company] *= (1 + random_change/100);
}else if (decline_increase == 0)
{
    change_type = "-";
    prices[random_company] *= (1 - random_change/100);
}

cout << "\033[H"; 


for (size_t i = 0; i < 19; i++)
{
    cout << company_list[i] << ": " << prices[i] << "\n";
}
cout << "\nlast change: ";
cout << fixed << showpoint;
cout << setprecision(2);
cout << company_list[random_company] << ": " << change_type << random_change;

sleep(1);
}




return 0;}