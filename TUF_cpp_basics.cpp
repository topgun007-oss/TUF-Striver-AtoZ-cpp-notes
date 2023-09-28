//Skeleton of cpp
/*
#include<iostream> // header file contains the defination of cin, cout etc 
 int main(){
    std::cout<<"hey Topgun!"<<std::endl;
    return 0;
    }
    

    // usage of namespace

    #include<iostream>
    using namespace std;
    int main ()
    {
        cout<<"Hey Topgun"<< endl << "hey mayank"<< endl;
        return 0; // to provide output
    }
    

   #include<bits/stdc++.h> // contains all the libaraies4
    using namespace std;
    int main()
    {
        int x, y;
        cin >> x >> y ; // cin to take the input from the user
        cout <<"value of x: " << x << "and y: " <<y;
        return 0;
    }
    
   #include<bits/stdc++.h> // contains all the libaraies4
    using namespace std;
    int main()
    {
        string str;
        getline(cin,str); // getline is used to take input with spaces
        cout<< str;
        return 0;
    }
*/
/*
All data types
Primitive : int , char , bool, float , double float
derived  : array, pointers, strings
user defined : class , structure , union

Datatype Modifiers
As the name suggests, datatype modifiers are used with built-in data types to modify the length of data that a particular data type can hold. 

Modifiers in C++

Data type modifiers available in C++ are: 

Signed
Unsigned
Short
Long
The below table summarizes the modified size and range of built-in datatypes when combined with the type modifiers:

Data Type        Size (in bytes)        Range

short int             2               -32,768 to 32,767

unsigned short int    2           0 to 65,535

unsigned int          4            0 to 4,294,967,295

int                   4             -2,147,483,648 to 2,147,483,647

long int              4            -2,147,483,648 to 2,147,483,647

unsigned long int      4       0 to 4,294,967,295

long long int          8       -(2^63) to (2^63)-1

unsigned long long int   8     0 to 18,446,744,073,709,551,615

signed char             1           -128 to 127

unsigned char          1          0 to 255

float                  4        -3.4×10^38 to 3.4×10^38

double                8          -1.7×10^308 to1.7×10^308

long double          12        -1.1×10^4932 to1.1×10^4932

wchar_t             2 or 4         1 wide character





*/

/*
  // if else 

  #include<bits/stdc++.h>
  using namespace std;
  // program to classoify into adults or not
  int main(){
    int age;
    cin >> age;

    if(age>= 18)
{     
    cout << "Yes you are an adult";
}
   else {
    cout <<" Not adult";
   }
    return 0;

  }  

  */
/*
 #include<bits/stdc++.h>
 using namespace std;
 
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.

int main() {
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    
    }
    else if(marks >=25 && marks <45){
     cout << " E " ;
    }
     else if(marks >=45 && marks <50){
     cout << " D " ;
    }
     else if(marks >=50 && marks <60){
     cout << " C " ;
    }
     else if(marks >=60 && marks <80){
     cout << " B " ;
    }
     else if(marks >=80 && marks <100) {
     cout << " A " ;
    }

    return 0;

}
*/

//Note : in "if" condition all statements will run , but if "else if" is done , other line will not run , timme will saved



// SWITCH usage 
/*
#include<bits/stdc++.h>
using namespace std;


Take the day no and print the corresponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.

int main() {
int day;
cin >> day;
switch (day) {
case 1:
    cout << "Monday";
    break;

case 2:
    cout << "Tuesday";
     break; // break statement will discontinue excution once a case is statisfy
case 3:
    cout << "Wednesday";
    break;
case 4:
     cout << "Thursday";
     break;
case 5:
     cout << "Friday";
     break;
case 6:
     cout << "Saturday";
     break;
case 7:
      cout << "Sunday";
      break;
default:
    cout <<"Invalid" ;       
}
return 0;
}
*/
