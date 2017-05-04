#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int main ()
{
       double param, result, enter;
    while (enter!=0){
     cout << " \v\t Enter 0 to stop \n Enter Value: ";
    cin >> enter;
    if (enter==0){
   break;
}
    param = enter; 
    result = sqrt (param); 
    printf (" The square root of %f is: \n %f\n",param, result );
        }
        return 0;
  
}
