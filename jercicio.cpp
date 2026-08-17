#include <iostream>
using namespace std;

int main()
{ 
    int x,y,z;
    cout << "Ingrese un numero";
    cin >> x, y,z;
    
    if (x<y , x<z)
    {
        cout<<x<<"es menor";
    }
    else if(y<x , y<z)
    {
        cout<<y<<"es menor";
    }
    else if(z<x , z<x)
    {
        cout<<z<<"es menor ";
    }
        

}
