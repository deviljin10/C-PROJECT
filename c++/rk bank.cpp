#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class bank{
	char name[100],father[100],addr[100],type[10];
	float balance;
	public :
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};
void bank::open_account() 
{
	cout<<"\n enter your full name:"<<endl;
	cin.ignore();
	cin.getline(name,100);
	cout<<"\n enter your father name:"<<endl;
	cin.ignore();
	cin.getline(father,100);
		cout<<"\n enter your addrress name:"<<endl;
	cin.ignore();
	cin.getline(addr,100);
		cout<<"\n type of account you want to open savings(s) or current(c):"<<endl;
	cin.ignore();
	cin.getline(type,100);
		cout<<"\n enter your first deposit amount:"<<endl;
	cin>>balance;
	cout<<"\n your accountis created succcessfully:"<<endl;
}
void bank::deposit_money(){
	int d;
	cout<<"\Enter amount you want to deposit:"<<endl;
	cin>>d;
	
	balance= balance +d;
	cout<<"\enter current/total balance is:"<<balance<<endl;}
	void bank::withdraw_money()
{
	float w;
	cout<<"\Enter amount you want to withdraw:"<<endl;
	cin>>w;
	
	balance= balance -w;
	cout<<"\nyour remaining  balance is:"<<balance<<endl;
}
void bank::display_account(){
	cout<<"\n your name:"<<name<<endl;
		cout<<"\n your father name:"<<father<<endl;
			cout<<"\n your addrress:"<<addr<<endl;
				cout<<"\n type of account:"<<type<<endl;
					cout<<"\n current/total balance:"<<balance<<endl;
}
int main(){
	bank obj;
	int ch;
	char option ;
	cout<<"\n<<.............................................................>>"<<endl;
	cout<<"\n<<................rk bank welcome you......................>>"<<endl;
 	cout<<"\n<<.............................................................>>"<<endl;
do{
cout<<"\n1.) open_account :"<<endl;
cout<<"\n2.) deposit money :"<<endl;
cout<<"\n3.) withdraw money: :"<<endl;
cout<<"\n4.) display account :"<<endl;
cout<<"\n5.) exit -->"<<endl;
cin>>ch;
switch(ch)
{case 1:
	cout<<"\n1.) open account:"<<endl;
	obj.open_account();
	break;
	case 2:
	cout<<"\n2.) deposit money:"<<endl;
	obj.deposit_money();
	break;
	case 3:
	cout<<"\n3.) withdraw money:"<<endl;
	obj.withdraw_money();
	break;
	case 4:
	cout<<"\n4.) display account :"<<endl;
	obj.display_account();
	break;
	case 5:
		if(ch==5){
			exit(1);
		}
		default:
			cout<<"\n please try again and choose correct option :"<<endl;
			break;}
			
			cout<<"\n do you want to continue banking without exit? press(y/n):"<<endl;
			option=getch();
			if((option=='n')||(option=='N')){
				exit(0);
			}
}while((option=='y'||option=='N'));
return 0;
}