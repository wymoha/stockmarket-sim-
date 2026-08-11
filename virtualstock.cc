#include <iostream>
#include <string>
#include <string_view>
#include <time.h>
#include <unistd.h>
using namespace std;


int main() {
string change_type;
string company_list[4]{"OMNI","Z","HYDR","CHIP"};
float prices[4]{100,100,100,100};
while (1==1)
{
float random_change = static_cast <float> (rand()) / static_cast <float> (RAND_MAX) *10;
int random_company = rand() % 4;
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

cout << "\033[2J\033[H";
    cout << "Market\n\n";
    cout << "OMNI: " << prices[0] << "\n";
    cout << "Z:    " << prices[1] << "\n";
    cout << "HYDR: " << prices[2] << "\n";
    cout << "CHIP: " << prices[3] << "\n";

    cout << "last change: ";
    cout << company_list[random_company] <<": "<< change_type << random_change << "% "<< "\n";
    
    cout << flush;
    sleep(1);
}




return 0;}