#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand((unsigned) time(NULL)); 

    int my = rand()%1724+13;

    cout<<"Guess the number"<<endl;
    int num=0;
    do
    {
        cin>>num;
        cout<<endl;
        if(num>my)
        {
            cout<<"The number is higher then the original number"<<endl;
        }
        else if(num<my){
            cout<<"The number is lower then the original number"<<endl;
        }
        else if(num==my)
        {
            cout<<"Congrats! You guessed the correct number"<<endl;
        }
    } while (num!=my);
    
    return 0;
}