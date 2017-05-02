```

#include <iostream>

using namespace std;

int main(){
    
char enter;
double r;
double pi;
    pi=3.141592653;

Top:
    
    cout << "\n Choose 'C' for circumference \n Choose 'A' for area \n Choose 'S' to stop " << endl;
    cin >> enter;
switch (enter){

    case 'C':
     cout << "\v\t Circumference: "<<endl; goto C;
    
    case 'A':
    cout << "\v\t Area: "<<endl; goto A;
    
    case 'S':
    return 0;
    
    default:
    cout << "\v Not a valid response, Did you make sure\n the letter was capitalized? "<<endl; goto Top;
    }
        
      C:
cout << " Enter Radius: ";
      cin >>  r;
    double c;
    c=pi*r*2;
    
    cout << " The circumference is: " << c << endl;
    goto Top;
    
      A:
cout << " Enter Radius: ";
    cin >> r;
double area;
    area=pi*r*r;

cout << " The area is: " << area << endl;
goto Top;

}

```
