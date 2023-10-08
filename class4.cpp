//Write the program using class which will display the given Date,Month,Year*/
#include<iostream>
using namespace std;

class Date
{
    private :
    const char* mon_name[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    public :
    int date;
    int month;
    int year;

    input(int d,int m,int y)
    {
        date = d;
        month = m;
        year = y;
    }

    display()
    {
        cout<< "The date is :" << date << "th " << mon_name[month-1] << " 20" << year;
    }

    bool isleap()
    {

    }

};

int main()
{
    Date d1;
    int d,m,y;
    cout << "Enter the date :";
    cin >> d;
    cout << "Enter the month :";
    cin >> m;
    cout << "Enter the year :";
    cin >> y;
    d1.input(d,m,y);
    d1.display();

    return 0;
}
/*Output
Enter the date :2
Enter the month :8
Enter the year :23
The date is :2th August 2023
*/