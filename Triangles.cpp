```

#include <iostream>

using namespace std;

int main(){

char enter;
double A;
double b;
double h;
double s1;
double s2;

    top:
cout << "\n Enter 'A' to find the area \n Enter 'B' to find the base \n Enter 'H' to find the height \n Enter 'P' to find the perimeter \n Enter 'S' to stop "<<endl;
cin >> enter;
    switch (enter){
     
         case 'A':
    goto fa;
        
        case 'B':
    goto fb;
        
        case 'H':
    goto fh;
        
        case 'P':
        goto fp;
        
        case 'S':
    return 0;
    
        default:
  cout << "\v Not a valid response, Did you make sure\n the letter was capitalized? " << endl;       
        goto top;
}
    
    
    fa:
cout << " Enter base: ";
cin >> b;
cout << " Enter height: ";
cin >> h;
    double a;
a=b*h/2;

cout << " The area is: "<< a << endl;
goto top;
    
    fb:    
cout << " Enter area: ";
cin >> A;
cout << " Enter height: ";
cin >> h;
    
double B;
B=A/h*2;
    cout << " The base is: " << B << endl;
goto top;

    fh:
cout << " Enter area: ";
cin >> A;
cout << " Enter base: ";
cin >> b;
    
    double H;
H=A/b*2;
    cout << " The height is: " << H << endl;
    goto top;
    
    fp:
cout << " Enter side 1: ";
cin >> s1;
cout << " Enter base: ";
cin >> b;
cout << " Enter side 2: ";
cin >> s2;

    double P;
P= s1+b+s2;
cout << " The perimeter is: " << P << endl;
goto top;
    }
    
```
