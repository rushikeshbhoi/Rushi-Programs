#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input a character :";
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"Hello"<<endl;
        break;
        case 'b':
        cout<<"Hola"<<endl;
        break;
        case 'c':
        cout<<"ciao"<<endl;
        break;

        default :
        cout<<"I'm still learning more "<<endl;
    }

    return 0;
}