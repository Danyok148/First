#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //  1
    int seconds;
    cout << "Enter time in seconds: ";
    cin >> seconds;
    int days = seconds / 86400;
    int hours = (seconds % 86400) / 3600;
    int minutes = (seconds % 3600) / 60;
    int secs = seconds % 60;
    cout << "Days: " << days << " Hours: " << hours << " Minutes: " << minutes << " Seconds: " << secs << endl;

    //  2
    cout << "Enter days, hours, minutes and seconds: ";
    cin >> days >> hours >> minutes >> secs;
    int totalSec = days * 86400 + hours * 3600 + minutes * 60 + secs;
    cout << "Total seconds: " << totalSec << endl;

    //  3
    double distance, time;
    cout << "Enter distance to airport and time (in hours): ";
    cin >> distance >> time;
    double speed = distance / time;
    cout << "Required speed: " << speed << " km/h" << endl;

    //  4
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter start time of call (hours minutes seconds): ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter end time of call (hours minutes seconds): ";
    cin >> h2 >> m2 >> s2;
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;
    int duration = t2 - t1;
    double price = (duration / 60.0) * 0.3;
    cout << "Call cost: " << price << " UAH" << endl;

    //  5
    double uah, usdRate, eurRate, rubRate;
    cout << "Enter amount in UAH and exchange rates (USD, EUR, RUB): ";
    cin >> uah >> usdRate >> eurRate >> rubRate;
    int usd = uah / usdRate;
    int eur = uah / eurRate;
    int rub = uah / rubRate;
    double change = uah - usd * usdRate;
    cout << "You can buy: " << usd << " USD, " << eur << " EUR, " << rub << " RUB, Change: " << change << " UAH" << endl;

    //  6
    cout << "Enter seconds since work day started: ";
    cin >> seconds;
    int workDay = 8 * 3600;
    int remain = workDay - seconds;
    int remainHours = remain / 3600;
    cout << "Hours left to work: " << remainHours << endl;

    //  7
    double laptopPrice;
    int count, discount;
    cout << "Enter laptop price, quantity and discount (%): ";
    cin >> laptopPrice >> count >> discount;
    double total = laptopPrice * count;
    double finalPrice = total - total * discount / 100.0;
    cout << "Total order price: " << finalPrice << " UAH" << endl;

    //  8
    double sales;
    cout << "Enter total sales of manager: ";
    cin >> sales;
    double salary = 100 + sales * 0.05;
    cout << "Manager salary: " << salary << " USD" << endl;

    //  9
    double fileSize, netSpeed;
    cout << "Enter file size in GB and internet speed in bits/sec: ";
    cin >> fileSize >> netSpeed;
    double bits = fileSize * 1024 * 1024 * 1024 * 8;
    int dlTime = bits / netSpeed;
    hours = dlTime / 3600;
    minutes = (dlTime % 3600) / 60;
    secs = dlTime % 60;
    cout << "Download time: " << hours << " h " << minutes << " m " << secs << " s" << endl;

    //  10
    int flashSize;
    cout << "Enter flash drive size in GB: ";
    cin >> flashSize;
    int flashMB = flashSize * 1024;
    int movieCount = flashMB / 760;
    cout << "Movies that fit: " << movieCount << endl;

    //  11
    double num;
    cout << "Enter a decimal number: ";
    cin >> num;
    num = round(num * 100) / 100;
    cout << "Rounded number: " << num << endl;

    //  12
    int passed, failed;
    cout << "Enter number of passed and failed students: ";
    cin >> passed >> failed;
    int totalStudents = passed + failed;
    double passedPercent = passed * 100.0 / totalStudents;
    double failedPercent = failed * 100.0 / totalStudents;
    cout << "Passed: " << passedPercent << "%, Failed: " << failedPercent << "%" << endl;

    //  13
    cout << "Enter seconds since start of the day: ";
    cin >> seconds;
    int left = 86400 - seconds;
    hours = left / 3600;
    minutes = (left % 3600) / 60;
    secs = left % 60;
    cout << "Time left until midnight: " << hours << " h " << minutes << " m " << secs << " s" << endl;

    //  14
    double movieSize;
    cout << "Enter movie size in GB: ";
    cin >> movieSize;
    int movieMB = movieSize * 1024;
    int diskCount = ceil(movieMB / 1.44);
    cout << "Diskettes needed: " << diskCount << endl;

    // 15
    double deposit, rate;
    int months;
    cout << "Enter deposit amount, term (months) and yearly rate (%): ";
    cin >> deposit >> months >> rate;
    double result = deposit + deposit * rate / 100 * months / 12.0;
    cout << "Final amount: " << result << " UAH" << endl;

    return 0;
}
