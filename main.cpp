#include <iostream>
#include "assignment5.h"

using namespace std;

int main()
{
    int choice=0;
    int loop=0;

    do
    {
        cout<<"Welcome to Zoo information management System. Press any button to continue\n";
        cin>>choice;

        task();

        cout<<"Do you want to run the program again? If not enter -1\n";
        cin>>loop;
    }
    while(loop!=-1);
}
