//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    double x,m;
    double i=0;
    while(getline(source,textline)){
        x=x+stod(textline);
        m=pow(stod(textline),2)+m;

        i++;


    }
  double mean,sd ;
  mean = (1/i)*x;
  sd = sqrt((1/i)*m-pow(mean,2)) ;


    cout << "Number of data = " << i <<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean <<"\n";
    cout << "Standard deviation = "<< sd ;

}