//
// Created by Firdavs Narzullayev
// Date: 20.03.2024
#include<cmath>
#include <iostream>
using namespace std;


int main() {
    cout << "PROBLEM 1\n";
int num1, num2;
cout<< "Enter two numbers: ";
cin>> num1>> num2;
int result1=(num1+num2)/2;
int result2=(num1 * num2);
cout<<"The result of average is equal to: "<< result1<<endl;
cout<<"The result of product is equal to: "<< result2<<endl;


    cout << "PROBLEM 2\n";
    int base, height;
    cout<< "The base of the triangle: \n";
    cout<<"The height of the triangle: ";
    cin>>base>>height;
    int Area=(base*height)/2;
    cout<< "The area of triangle is: "<< Area<<endl;


    cout << "PROBLEM 3\n";
int celcius ;
cin>>celcius;
int Fahrenheit= (celcius - 32)*5/9;
cout<<"The temperature in Farenheit is equal to "<< Fahrenheit << endl;




    cout << "PROBLEM 4\n";
double a, b, c;
cin>> a>> b>>c;
double  output= pow(a,b);
double output1=pow(output, c);
cout<< "Output: "<< output1<<endl;

    cout << "PROBLEM 5\n";
    cout<<"Enter a number: ";
    double m;
    cin>>m;
    double resultq= pow(m, 1);
    double resultw= pow(m,2);
    double result3= pow(m,2);
    double result4= pow(m,3);
    double result5= pow(m,4);
    double result6= pow(m,5);
    double result7= pow(m,6);
    double result8= pow(m,7);
    double result9= pow(m,8);
    double result10= pow(m,9);
    double result11= pow(m,10);
    cout<<"Output: \n"<<endl;
    cout<<resultq<<endl;
    cout<<resultw<<endl;
    cout<<result3<<endl;
    cout<<result4<<endl;
    cout<<result5<<endl;
    cout<<result6<<endl;
    cout<<result7<<endl;
    cout<<result8<<endl;
    cout<<result9<<endl;
    cout<<result10<<endl;
    cout<<result11<<endl;
    return 0;
}