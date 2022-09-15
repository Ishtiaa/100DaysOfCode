#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
    int mark ;
    cout<<"Enter Mark :" <<endl ;
    cin>> mark ;
    if(mark>100){
        cout <<"invalid mark"<<endl;
    }else if (mark<0){
        cout<<"invalid mark"<<endl;
    }else if (mark>=80){
    cout<<"A+"<<endl;
    cout<<"Excelent.Keep it up"<<endl;
    }else if (mark>=70){
        cout<<"A"<<endl;
        cout<<"Very good.Try more"<<endl;
    }else if (mark>=60){
        cout<<"A-"<<endl;
        cout<<"Good.Try to do better"<<endl;
    }else if (mark>=50){
        cout<<"B"<<endl;
        cout<<"Not bad but you have to be more concious and attentive"<<endl;
    }else if (mark>=40){
        cout<<"C"<<endl;
        cout<<"Passed But be more attentive"<<endl;
    }else if (mark>=33){
        cout<<"D"<<endl;
        cout<<"It's ok. Hope for better in future"<<endl;
    } else {
         cout<<"Fail" <<endl ;
         cout<<"Don't worry.Wish you will do better in future.Best of luck."<<endl;
    }

    getch();
}
