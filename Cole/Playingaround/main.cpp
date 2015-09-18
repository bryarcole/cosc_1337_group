
//MessingAround to show style, let me know your thoughts. 

#include <iostream>

using namespace std;

void proportional();
int num2min();
void smile();
int addSomething();
int findArea();
int candyCalculation(int bars, float price);
int factorfinder(int x);
int main() {

     cout << factorfinder(3);



    return 0;
}


int num2min(){

    //Convert seconds to Hours, Mins; Practice
    int seconds,
        min,
        hours,
        hoursremain;
    cout << "input how many seconds you want to convert ";
    cin >> seconds;


    hours = seconds / 3600;
    hoursremain = seconds % 3600;
    min = hoursremain / 60;

    cout << "The alotted time you entered is " << hours << " hours, and " << min << " minutes " << endl;
}
void proportional(){

    int firstnum,
            secondnum;


    cout << "Input two numbers to see if they are proporitnal!" << endl;
    cin >> firstnum >> ".n/" >> secondnum;
    double dividenum;
    dividenum = secondnum / firstnum;
    if(secondnum % firstnum == 0) {
        cout << "Congrats these numbers are divisible and proportional!!" << endl;

        cout << "These numbers have a ration of " << dividenum << " to one" << endl;

    }else{
        cout << "Numbers not divisible" << endl;

    }cout << dividenum;
}
void smile(){

    cout <<"  ^       ^\n";
    cout <<"      *     \n";
    cout <<" --       --\n";
    cout <<"   (_____) \n";
}
int addSomething() {
    int sum;
// Find result of adding numbers to variables; Practice
    sum = 10;
    sum = 15 + sum;
    sum = 20 + sum;

    cout << sum << endl;
    return 0;

}
int findArea(){

    int len,
    wid,
    area;
    //Finding area; practice
    cout << "In put the length ";
    cin >> len;
    cout << "In put the width ";
    cin >> wid;

    area = len * wid;

    cout << "The are of the room is " << area << endl;





}
int candyCalculation(int bars, float price){

    float total;

    total = bars * price;

    cout << "You made a total of $" << total << ". Congrats boss!";
    return 0;

}


int factorfinder(int x){
    if (x==1) {
        return 1;
    }else {
        return x*factorfinder(x-1);
    }
}
