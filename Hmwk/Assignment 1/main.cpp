/*
 * File:   main.cpp
 * Author: Jason Emerson
 * Created on March 6, 2017, 8:32 PM
 * Purpose : Menu for assignments
 */

//System Libraries
#include <iostream> //Input/Output Objects
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Generator
#include <ctime>    //Time
#include <fstream>  //Read from files

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
short PERCENT=100;
short COLUMNS=30;
//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
short celcius(short);
void selectionSort(string[],int);
int binarySearch(string[],string);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    //Loop until users exits
    do{
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Gaddis_8thEd_Chap3_Prob12"<<endl;
        cout<<"2.  Type 2  for Gaddis_8thEd_Chap3_Prob13"<<endl;
        cout<<"3.  Type 3  for Gaddis_8thEd_Chap4_Prob1"<<endl;
        cout<<"4.  Type 4  for Gaddis_8thEd_Chap4_Prob7"<<endl;
        cout<<"5.  Type 5  for Gaddis_8thEd_Chap4_Prob10"<<endl;
        cout<<"6.  Type 6  for Gaddis_8thEd_Chap5_Prob11"<<endl;
        cout<<"7.  Type 7  for Gaddis_8thEd_Chap6_Prob7"<<endl;
        cout<<"8.  Type 8  for Gaddis_8thEd_Chap7_Prob6"<<endl;
        cout<<"9.  Type 9  for Gaddis_8thEd_Chap8_Prob7"<<endl;
        cout<<"10. Type 10 for Gaddis_8thEd_Chap8_Prob1"<<endl;
        cout<<"11. Type 11 to exit the program"<<endl;
        cin>>menuItm;
        //Go to the Problem
        switch(menuItm){
            case 1:
                problem1();
                break;
            case 2:
                problem2();
                break;
            case 3:
                problem3();
                break;
            case 4:
                problem4();
                break;
            case 5:
                problem5();
                break;
            case 6:
                problem6();
                break;
            case 7:
                problem7();
                break;
            case 8:
                problem8();
                break;
            case 9:
                problem9();
                break;
            case 10:
                problem10();
                break;
            default:
                break;
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop
    //Exit Program
    return 0;
}
void problem1(){
    //Declaration of Variables
    float celsius; //Celsius Input
    float fahrht; //Fahrenheit Output
    //Input Values
    cout<<"Please enter the degrees in Celsius."<<endl;
    cin>>celsius;
    //Process Values
    fahrht=(celsius*9.0)/5.0+32; //Conversion from Celsius to Fahrenheit
    //Display Outputs
    cout<<"The Celsius of "<<celsius<<" is "<<fahrht<<" degrees Fahrenheit"<<endl;
    //Exit Program
}
void problem2(){
    //Declaration of Variables
    float dollar;
    float yen=113.81;
    float euro=.9435;
    //Input Values
    cout<<"Please enter the dollar amount in US dollars."<<endl;
    cin>>dollar;
    //Process Values
    float euroConv=dollar*euro;
    float yenConv=dollar*yen;
    //Display Outputs
    cout<<"The Euro conversion is: "<<fixed<<setprecision(2)<<euroConv<<" Euro"<<endl;
    cout<<"The Yen conversion is: "<<fixed<<setprecision(2)<<yenConv<<" Yen"<<endl;
    //Exit Program
}

void problem3(){
    //Declaration of Variables
    short a,b,c,d;
    //Input Values
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<"Enter the third number"<<endl;
    cin>>c;
    cout<<"Enter the fourth number"<<endl;
    cin>>d;
    //Process Values
    cout<<"The first two numbers in order are ";
    if(a>b)
        cout<<a<<","<<b<<endl;
    else
        cout<<b<<","<<a<<endl;
    
    cout<<"The first three numbers in order are ";
    if((a>=b)&&(b>=c))
        cout<<a<<","<<b<<","<<c<<endl;
    else if((a>=c)&&(c>=b))
        cout<<a<<","<<c<<","<<b<<endl;
    else if((b>=a)&&(a>=c))
        cout<<b<<","<<a<<","<<c<<endl;
    else if((b>=c)&&(c>=a))
        cout<<b<<","<<c<<","<<a<<endl;
    else if((c>=b)&&(b>=a))
        cout<<c<<","<<b<<","<<a<<endl;
    else if((c>=a)&&(a>=b))
        cout<<c<<","<<a<<","<<b<<endl;

    cout<<"All numbers in order are ";
    if((a>=b)&&(b>=c)&&(c>=d))
        cout<<a<<","<<b<<","<<c<<","<<d<<endl;
    else if((a>=b)&&(b>=c)&&(d>=c))
        cout<<a<<","<<b<<","<<d<<","<<c<<endl;
    else if((a>=c)&&(c>=b)&&(b>=d))
        cout<<a<<","<<c<<","<<b<<","<<d<<endl;
    else if((a>=c)&&(c>=b)&&(b>=d))
        cout<<a<<","<<c<<","<<d<<","<<b<<endl;
    else if((a>=d)&&(d>=b)&&(b>=c))
        cout<<a<<","<<d<<","<<b<<","<<c<<endl;
    else if((a>=d)&&(d>=c)&&(c>=b))
        cout<<a<<","<<d<<","<<c<<","<<b<<endl;
    else if((b>=a)&&(a>=c)&&(c>=d))
        cout<<b<<","<<a<<","<<c<<","<<d<<endl;
    else if((b>=a)&&(a>=d)&&(d>=c))
        cout<<b<<","<<a<<","<<d<<","<<c<<endl;
    else if((b>=c)&&(c>=a)&&(a>=d))
        cout<<b<<","<<c<<","<<a<<","<<d<<endl;
    else if((b>=c)&&(c>=d)&&(d>=a))
        cout<<b<<","<<c<<","<<d<<","<<a<<endl;
    else if((b>=d)&&(d>=a)&&(a>=c))
        cout<<b<<","<<d<<","<<a<<","<<c<<endl;
    else if((b>=d)&&(d>=c)&&(c>=a))
        cout<<b<<","<<d<<","<<c<<","<<a<<endl;
    else if((c>=a)&&(a>=b)&&(b>=d))
        cout<<c<<","<<a<<","<<b<<","<<d<<endl;
    else if((c>=a)&&(a>=d)&&(d>=b))
        cout<<c<<","<<a<<","<<d<<","<<b<<endl;
    else if((c>=b)&&(b>=a)&&(a>=d))
        cout<<c<<","<<b<<","<<a<<","<<d<<endl;
    else if((c>=b)&&(b>=d)&&(d>=a))
        cout<<c<<","<<b<<","<<d<<","<<a<<endl;
    else if((c>=d)&&(d>=a)&&(a>=b))
        cout<<c<<","<<d<<","<<a<<","<<b<<endl;
    else if((c>=d)&&(d>=b)&&(b>=a))
        cout<<c<<","<<d<<","<<b<<","<<a<<endl;
    else if((d>=a)&&(a>=c)&&(c>=b))
        cout<<d<<","<<a<<","<<c<<","<<b<<endl;
    else if((d>=a)&&(a>=b)&&(b>=c))
        cout<<d<<","<<a<<","<<b<<","<<c<<endl;
    else if((d>=b)&&(b>=a)&&(a>=c))
        cout<<d<<","<<b<<","<<a<<","<<c<<endl;
    else if((d>=b)&&(b>=c)&&(c>=a))
        cout<<d<<","<<b<<","<<c<<","<<a<<endl;
    else if((d>=c)&&(c>=a)&&(a>=b))
        cout<<d<<","<<c<<","<<a<<","<<b<<endl;
    else if((d>=c)&&(c>=b)&&(b>=a))
        cout<<d<<","<<c<<","<<b<<","<<a<<endl;

    //Display Outputs

    //Exit Program
}

void problem4(){
    //Declaration of Variables
    float sec, mins, hours, days; //Precise amount of minutes, hours, and days
    //Input Values
    cout<<"How many seconds?"<<endl;
    cin>>sec;
    //Process Values
    mins=sec/60;
    hours=sec/3600;
    days=sec/86400;
    //Display Outputs
    if (sec>=86400)                                            //Displays in days
        cout<<sec<<" seconds equals "<<days<<" days"<<endl;
    else if (sec>=3600)                                        //Displays in hours
        cout<<sec<<" seconds equals "<<hours<<" hours"<<endl;
    else if (sec>=60)                                          //Displays in minutes
        cout<<sec<<" seconds equals "<<mins<<" minutes"<<endl;
    else if (sec>=0)                                           //Displays in seconds
        cout<<sec<<" seconds equals "<<sec<<" seconds"<<endl;
    //Exit Program
}

void problem5(){
    //Declaration of Variables
    int month, year; //Month and year declaration
    //Input Values
        //Input Month
    cout<<"Please enter a month number."<<endl;
    cin>>month;
        //Input year
    cout<<"Please enter a year."<<endl;
    cin>>year;
    //Display Outputs
    switch(month){
        case 1:
            cout<<"There are 31 days in January "<<year<<endl;
            break;
        case 2:
            if(year%400==0){
                cout<<"There are 29 days in February "<<year<<endl;
            }else if(year%100!=0&&year%4==0){
                cout<<"There are 29 days in February "<< year<<endl;
            }else{
                cout<<"There are 28 days in February "<< year<<endl;
            }
            break;
        case 3:
            cout<<"There are 31 days in March "<< year<<endl;
            break;
        case 4:
            cout<<"There are 30 days in April "<< year<<endl;
            break;
        case 5:
            cout<<"There are 31 days in May "<< year<<endl;
            break;
        case 6:
            cout<<"There are 30 days in June "<< year<<endl;
            break;
        case 7:
            cout<<"There are 31 days in July "<< year<<endl;
            break;
        case 8:
            cout<<"There are 31 days in August "<< year<<endl;
            break;
        case 9:
            cout<<"There are 30 days in September "<< year<<endl;
            break;
        case 10:
            cout<<"There are 31 days in October "<< year<<endl;
            break;
        case 11:
            cout<<"There are 30 days in November "<< year<<endl;
            break;
        case 12:
            cout<<"There are 31 days in December "<< year<<endl;
            break;
    }
    //Exit Program
}

void problem6(){
    //Declaration of Variables
    short intSize;  //Initial size of population
    short newPop;   //New organisms per day
    short numDays;  //Number of days organisms multiply
    float popInc;   //Amount population will increase
    //Input values
    cout<<"Calculate the increase in population of your organism."<<endl;
    do{
        cout<<"How many organisms to start?"<<endl;
        cin>>intSize;
        if(intSize<2)cout<<"Your organism cannot be dead or reproduce asexually."<<endl;
    }while(intSize<2); //end do-while loop
    do{
        cout<<"How much will your population increase per day? (percent)"<<endl;
        cin>>popInc;
        if(popInc<0)cout<<"Your organism's population must increase."<<endl;
    }while(popInc<0); //end do-while loop
    do{
        cout<<"How many days will your organism multiply?"<<endl;
        cin>>numDays;
        if(numDays<1)cout<<"Your organisms need at least 1 day to multiply."<<endl;
    }while(numDays<1); //end do-while loop
    //Process values and display outputs
    popInc=popInc/PERCENT; //Turn pop increase into percent value
    for(short days=0;days<=numDays;days++){
        cout<<"On day "<<days<<" there were "<<intSize<<" organisms."<<endl;
        newPop=intSize*popInc;
        intSize+=newPop;
    } //end for loop
    //Exit Program
    return;
}

void problem7(){
    //Declaration of Variables
    //Process Values
    cout<<"Table of Fahrenheit to Celcius"<<endl;
    for(short fah=0;fah<=20;fah++){
        cout<<fah<<"                 "<<celcius(fah)<<endl;
    }
    //Exit Program
}

short celcius(short fah){
    return (fah-32)*5/9;
}

void problem8(){
     //Declaration of Variables
    char weather;
    short months=3;
    short junRain=0,junCld=0,junSun=0,julRain=0,julCld=0,julSun=0,augRain=0,augCld=0,augSun=0;
    char wthr[months][COLUMNS]={};
    ifstream in;
    //Input values
    in.open("RainOrShine.dat");
    for(short i=0;i<months;i++){
        for(short j=0;j<COLUMNS;j++){
            in>>wthr[i][j];
        }
    }
    in.close();
    //Process values -> Map inputs to Outputs
    //Measure weather in June
    for(short i=0;i<COLUMNS;i++){
        weather=wthr[0][i];
        if(weather==82)junRain++;
        else if(weather==67)junCld++;
        else junSun++;
    }
    //Measure weather in July
    for(short i=0;i<COLUMNS;i++){
        weather=wthr[1][i];
        if(weather==82)julRain++;
        else if(weather==67)julCld++;
        else julSun++;
    }
    //Measure weather in August
    for(short i=0;i<COLUMNS;i++){
        weather=wthr[2][i];
        if(weather==82)augRain++;
        else if(weather==67)augCld++;
        else augSun++;
    }
    //Display Output
    cout<<"In June, there were "<<junRain<<" rainy days, "<<junCld<<" cloudy days, and "<<junSun<<" sunny days."<<endl;
    cout<<"In July, there were "<<julRain<<" rainy days, "<<julCld<<" cloudy days, and "<<julSun<<" sunny days."<<endl;
    cout<<"In August, there were "<<augRain<<" rainy days, "<<augCld<<" cloudy days, and "<<augSun<<" sunny days."<<endl;
    cout<<"For all 3 months there were "<<junRain+julRain+augRain<<" rainy days, "<<junCld+julCld+augCld<<" cloudy days, and "
            <<junSun+julSun+augSun<<" sunny days."<<endl;
    if(junRain>julRain&&junRain>augRain)cout<<"June had the most rainy days."<<endl;
    else if(julRain>junRain&&julRain>augRain)cout<<"July had the most rainy days."<<endl;
    else cout<<"August had the most rainy days."<<endl;
    //Exit Program
    return;
}

void problem9(){
    //Declaration of Variables
    const int SIZE=20; //Size of array (20 names))
    string names[SIZE]={"Collins,Bill","Smith,Bart","Allen,Jim",
                             "Griffin,Jim","Stamey,Marty","Rose,Geri",
                             "Taylor,Terri","Johnson,Jill",
                             "Allison,Jeff","Looney,Joe","Wolfe,Bill",
                             "James,Jean","Weaver,Jim","Pore,Bob",
                             "Rutherford,Greg","Javens,Renee",
                             "Harrison,Rose","Setzer,Cathy",
                             "Pike,Gordon","Holland,Beth"};
    string name;
    //Selection Sort
    selectionSort(names,SIZE);
    //Name to Search
    cout<<"What is the name you are attempting to search for?"<<endl;
    cout<<"Please enter in the format of Last,First"<<endl;
    cin>>name;
    //Search for name and Display if Found or Not
    int nameF=binarySearch(names,name);
    if(nameF==-1){
        cout<<"Sorry, we are unable to locate the name you listed in our list."<<endl;
    }
    else{
        cout<<"Name Found: "<<names[nameF]<<endl;
    }
    //Exit Program
}

void selectionSort(string names[],int j){
    //Declaration of Variables
    int minInd;
    string name;

    //Process Values
    for(int i=0;i<(j-1);i++){
        minInd=i; //Minimum
        name=names[i];
        for(int k=i+1;k<j;k++){
            if(names[k]<name){
                name=names[k];
                minInd=k;
            }
        }
        names[minInd]=names[i];
        names[i]=name;
    }

}

int binarySearch(string names[],string j){
    //Declaration of Variables
    short pos=-1; //Position
    int first=0; //First Element
    int last=21-1; //Last Element
    int middle; //Middle
    bool found=false; //Set to false while not found

    //Process Values
    do{
        middle=(first+last)/2; //Calculate the mid point
        if(names[middle]==j){
            //found=true;
            pos=middle;
            return pos;
        }
        else if(names[middle]>j)last=middle-1;
        else first=middle+1;
    }while(found==false&&first<=last);
    return -1;
}

void problem10(){
    //Declaration of Variables
    const int SIZE=18;
        //Account Numbers Below
    int accounts[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,8080152,
                     4562555,5552012,5050552,7825877,1250255,1005231,6545231,
                     3852085,7576651,7881200,4581002};
    int accNum; //Account Number Being Input
    bool found=false; //Exit Loop
    //Input Values
    cout<<"Please input the Account Number:"<<endl;
    cin>>accNum;
    //Simple Linear Search
    for(int i=1;i<18&&found==false;i++){
        if(accNum==accounts[i])found=true;
    }
    //Display Outputs
    if(found==true)cout<<"Number is valid"<<endl;
    else{
        cout<<"Number is invalid"<<endl;
    }
    //Exit Program
}
