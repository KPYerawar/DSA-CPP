#include <iostream>
using namespace std;
#include<string>

struct student {
string name ;
int rollno;
float cgpa;
};

int main (){
student s[2] ;
s[0].name = "krushna";
s[0].rollno = 70100;
s[0].cgpa = 8.54;

 s[1] = {"rohit " , 70900 , 9.1};
for (int i = 0 ; i <2 ; i++ ){
cout << " name = " << s[i].name  <<endl;
cout << " rollno = " << s[i].rollno  <<endl;
cout << " cgpa = " << s[i].cgpa  <<endl;
}
return 0 ; 
}

