#include<bits/stdc++.h>
using namespace std;

// global variable baar baar declare nahi krte gadha

char arr[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkWin()
{
  if(arr[1]==arr[2] && arr[2]==arr[3]){
    return 1;
  }

  else if(arr[4]==arr[5] && arr[5]==arr[6]){
    return 1;
  }

  else if(arr[7]==arr[8] && arr[8]==arr[9]){
    return 1;
  }

  else if(arr[1]==arr[4] && arr[4]==arr[7]){
    return 1;
  }

  else if(arr[2]==arr[5] && arr[5]==arr[8]){
    return 1;
  }

  else if(arr[3]==arr[6] && arr[6]==arr[9]){
    return 1;
  }

  else if(arr[1]==arr[5] && arr[5]==arr[9]){
    return 1;
  }

  else if(arr[3]==arr[5] && arr[5]==arr[7]){
    return 1;
  }

  else if(arr[1]!='1' && arr[2]!='2' && arr[3]!='3' && arr[4]!='4' && arr[5]!='5' && arr[6]!='6' && arr[7]!='7' && arr[8]!='8' && arr[9]!='9')
  {
    return 0;
  }

  else 
  {
    return -1;
  }

};

void resertboard()
{
    arr[0] = 'o';
    for(int i=1;i<10;i++)
    arr[i]=48+i;
};

void board()
{ 
   system("CLS");

  cout<<endl<<endl<<"  TIC TAC TOE  "<<endl<<endl;
  cout<<"      |      |      "<<endl;
  cout<<"  "<<arr[1]<<"   |  "<<arr[2]<<"   |  "<<arr[3]<<"  "<<endl;
  cout<<"______|______|______"<<endl;
  cout<<"      |      |      "<<endl;
  cout<<"  "<<arr[4]<<"   |  "<<arr[5]<<"   |  "<<arr[6]<<"  "<<endl;
  cout<<"______|______|______"<<endl;
  cout<<"      |      |      "<<endl;
  cout<<"  "<<arr[7]<<"   |  "<<arr[8]<<"   |  "<<arr[9]<<"  "<<endl;
  cout<<"      |      |      "<<endl<<endl;

};

int main()
{
    bool play= true;
    while(play==true){

        int str;

  string a,b;
  int player=1,i,choice;
  char mark;

  cout<<endl<<"enter the name of player 1"<<endl;
  getline(cin,a);
  cout<<endl<<"enter the name of player 2"<<endl;
  getline(cin,b);
    resertboard();
  do 
  {
    board();

    if(player%2==1){
      cout<<a<<"'s turn  ";
    } else if(player%2==0) 
    {
      cout<<b<<"'s turn  ";
    }

    cin>>choice;

    if(player%2 == 1)
    {
      mark='X';
    } else if (player%2 ==0) 
    {
      mark ='O';
    }

    if(choice == 1 && arr[1]=='1')
    {
      arr[1]=mark;
    }
    else if(choice == 2 && arr[2]=='2')
    {
      arr[2]=mark;
    }
    else if(choice == 3 && arr[3]=='3')
    {
      arr[3]=mark;
    }
    else if(choice == 4 && arr[4]=='4')
    {
      arr[4]=mark;
    }
    else if(choice == 5 && arr[5]=='5')
    {
      arr[5]=mark;
    }
    else if(choice == 6 && arr[6]=='6')
    {
      arr[6]=mark;
    }
    else if(choice == 7 && arr[7]=='7')
    {
      arr[7]=mark;
    }
    else if(choice == 8 && arr[8]=='8')
    {
      arr[8]=mark;
    }
    else if(choice == 9 && arr[9]=='9')
    {
      arr[9]=mark;
    }
    else {
      cout<<"choose a diffefent place ";
      player --;

        cin.ignore();  // without this cout wont show up
      
       cin.get();   // dono jaruri hai
    }

    i=checkWin();
    player ++;

  }

  while(i== -1);

  board();
  if(i==1)
  {
    if(player%2==1)
    cout<<endl<<b<<" Wins the game";
    else cout<<endl<<a<<" Wins the game";
  }
  else if(i==0)
  {
    cout<<endl<<" The match is draw";
  }
    cout<<endl;
    cout<<"To play the game again press 1 " <<endl;
    cin>>str;

    if(str==1) 
    {
        play = true;
        
    }
    else play = false;

   cin.ignore();   
//    cin.get();
    }
  return 0; 
}