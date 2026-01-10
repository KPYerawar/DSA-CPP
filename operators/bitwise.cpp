#include <iostream>
#include <bitset>
using namespace std ;
int main (){
int a = 0b10101;
int b = 0b100110;
cout << " or = " <<  showbase << oct << (a | b)  << endl;
cout << "and = " << (a & b) << "xor = " << (a ^ b) << endl << "not a  = " << (~a) << endl ;
cout << " right shift   a" << a << " is " << (a >> 1 ) << endl ;
cout << " left shift b" << b << " is " << ( b << 1 ) << endl;
return 0 ;
}  
