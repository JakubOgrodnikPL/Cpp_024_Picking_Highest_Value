#include <iostream>

using namespace std;

int a,b,c,m;

int main()
{
    cout << "This program picks the highest value of given 3 numbers (integer):" << endl;
    cout << "Give three integer numbers (separated by space or enter): "<<endl;
    cin>>a>>b>>c;

    m=a;
    if(b>m) m=b;
    if(c>m) m=c;
    cout<<"Maximum value is: "<<m;
/*
    if ((a>=b)&&(a>=c))
        cout<<"Maximum value is: "<<a;

    else if ((b>=a)&&(b>=c))
        cout<<"Maximum value is: "<<b;

    else if ((c>=a)&&(c>=b))
        cout<<"Maximum value is: "<<c;
*/
    cout<<endl<<"Press any key to exit";
    getchar();
    getchar();

    return 0;
}
