#include<bits/stdc++.h>
using namespace std;
/*
When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
*/
/*
int main()
{
  for( int i =1 ; i<=10;i++)
  {
    cout<<"Topgun"<<endl;// scope of the i is limited to this for loop only
  }
  return 0;
}

*/
/*
----------------------------------------
The while loop loops through a block of code as long as a specified condition is true:

Syntax
while (condition) {
  // code block to be executed
}

----------------------------------------
int main()
{
    int i =1;
while(i<=10){

cout<< "Topgun "<< endl;

    i++;
}
}
------------------------------------------
/* The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

Syntax
do {
  // code block to be executed
}
while (condition);

-----------------------------------------
*/
/**
int main ()
{ int i =2;
    do {
        cout<< " Topgun" << i << endl;
        i++;
    }
    while(i<=1);
    cout<< "tpgun"<<endl;
    return 0;
}
--------------------------------------------
*/
/*
A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
*/
//void -- do not return anyyhing
//return 
//parametrized
//non parametrized
/*
void printName(string name){
     cout<< "hello "<< name<< endl;
}

int main()
{
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin>>name2;
    printName(name2);
    return 0;

}
*/
/*
int maxx(int num1, int num2) {
// 5 >= 6
if (num1 >= num2) {
return num1;
}
return num2;
// looking for a return line
}
int main() {
int num1, num2;
cin >> num1 >> num2;
int maximum = maxx (num1, num2);
cout <<maximum;
return 0;
};


// In the maxx function if the if condition is not satisfied and we didnt put the else return line it will return the garbage value;
-------------------------------------------------------------------
*/

//Pass by value and reference

// pass by value
void doSomething (int num) {
cout << num << endl;
num += 5;
cout << num << endl;
num += 5;
cout << num << endl;
}
int main() {
int num= 10;
doSomething (num);
cout << num << endl; // here the value will be print be 10 as it goes by value , a COPY used to go
return 0;
}

// pass by reference
void doSomething (int &num) {// original value will be passed
cout << num << endl;
num += 5;
cout << num << endl;
num += 5;
cout << num << endl;
}
int main() {
int num= 10;
doSomething (num);
cout << num << endl; 
return 0;


