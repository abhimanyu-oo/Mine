# include <iostream>
# include <cmath>
using namespace std;
void cal() {
    int year, month, day;
    cout << "Please enter the day : ";
    cin >> day;
    cout << "Please enter the month : ";
    cin >> month;
    cout << "Please enter the year : ";
    cin >> year;

    int leapyear = floor(year/4);
    int nonLeap_LeapYear = floor(year/100);
    int year_leap=floor(year/400);
    int days_year = year*365+leapyear-nonLeap_LeapYear+year_leap-1;

    int days_month;
    switch (month) {
        case 1:
            days_month = 0;
            break;
        case 2:
            days_month = 31;
            break;
        case 3:
            days_month = 59;
            break;
        case 4:
            days_month = 90;
            break;
        case 5:
            days_month = 120;
            break;
        case 6:
            days_month = 151;
            break;
        case 7:
            days_month = 181;
            break;
        case 8:
            days_month = 212;
            break;
        case 9:
            days_month = 243;
            break;
        case 10:
            days_month = 273;
            break;
        case 11:
            days_month = 304;
            break;
        case 12:
            days_month = 334;
            break;
        default:
            cout << "Invalid month!" << endl;
    }
        int Totdays = days_month+days_year+day;
    int day_weeks = Totdays%7;

    int _leapyear = (year%4);
    int _nonLeap_LeapYear = (year%100);
    int _year_leap=(year%400);

    if (day>31 && (month==1||month==3||month==5||month==7||month==8||month==10||month==12)) {
        cout << "Invalid Date!" << endl;
    } else if (day>30 && (month==4||month==6||month==9||month==11)) {
        cout << "Invalid Date!" << endl;
    } else if (day>28 && month==2 && _leapyear!=0) {
        cout << "Invalid Date!" << endl;
    } else if (day>28 && month==2 && _year_leap!=0 && _nonLeap_LeapYear==0) {
        cout << "Invalid Date!" << endl;
    } else if (day>29 && month==2 && _leapyear==0 && _nonLeap_LeapYear!=0) {
        cout << "Invalid Date!" << endl;
    } else if (day>29 && month==2 && _leapyear==0 && _nonLeap_LeapYear==0 && _year_leap==0) {
        cout << "Invalid Date!" << endl;
    } else {
        switch (day_weeks) {
            case 0:
                cout << "Sunday" << endl;
                break;
            case 1:
                cout << "Monday" << endl;
                break;
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            case 4:
                cout << "Thursday" << endl;
                break;
            case 5:
                cout << "Friday" << endl;
                break;
            case 6:
                cout << "Saturday" << endl;
                break;
        }
    }
}