#include <iostream>

using namespace std;

void add(int a,int b)
{
 cout << a+b;
}
void substract (int a ,int b )
{
cout << a-b;
}
void multiply (int a , int b)
{
cout << a*b;
}
void devide(int a ,int b)
{
    cout << a/b;
}
void mod(int a,int b)
{
    cout << a%b;
}
int main()
{
int input1;
string operation;
int input2;
cout << "Enter your number 1 :";
cin >> input1;
cout << "Enter your number 2 :";
cin >> input2;
cout << "Enter your operation :";
cin >> operation;
if (operation == "+"){
    add(input1,input2);
}else if (operation == "*") {
    multiply(input1,input2);
} else if (operation == "/") {
    devide(input1,input2);
} else if(operation == "-") {
        substract(input1,input2);
} else if (operation == "%"){
    mod(input1,input2);
} else {
        cout << "----------------------------------------------\n";
        cout << "|                                             |\n";
        cout << "|       Enter your operation correctly        |\n";
        cout << "|                                             |\n";
        cout << "----------------------------------------------|\n";

}