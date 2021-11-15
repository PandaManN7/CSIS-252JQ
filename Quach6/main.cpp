// File:      <prog6>
// Name:      <Johnny Quach>
// Class:     <CSIS 252>
// Program:   <Assignment 6>
// Date:      <10/29/2021>
//g++ main.cpp


//This program will display four people and four serving plates on a rotating lazy susan.

#include <iostream>
#include <fstream>
#include <iomanip>
#include "stackType.h"
#include <array>

using namespace std;


//To display the options
void display(){
cout<<"***************"<<endl;
cout<<"1 Rotation"<<endl;
cout<<"2 Decorating"<<endl;
cout<<"3 Get pancake"<<endl;
cout<<"4 Put pancake"<<endl;
cout<<"5 Eat pancake"<<endl;
cout<<"0 End person"<<endl;
cout<<"***************"<<endl;
};
//To find the rotation
int rotaion(int ct){
ct++;
if (ct==5){
	ct=1;
}
return(ct);
};

//Main of the program
int main(){
int num,ct=1;

stackType<string> pancake1;
stackType<string> pancake2;
stackType<string> pancake3;
stackType<string> pancake4;
stackType<string> queues1;
stackType<string> queues2;
stackType<string> queues3;
stackType<string> queues4;
queues1.add2();
queues2.add2();
queues3.add2();
queues4.add2();
pancake1.add2();
pancake2.add2();
pancake3.add2();
pancake4.add2();




//Person 1
cout<<"Person 1:"<<endl;
display();
cin>>num;
while (num!=0){
	if (num==1){
		cout<<"You have rotated the lazy susan one time. "<<endl;
		ct=rotaion(ct);
	}
	else if (num==2){
		cout<<"You have decorated your pancake."<<endl;
		pancake1.pop();
		pancake1.push("Decorated pancake");
	}	
	else if (num==3){
			
		if (!queues1.isEmptyStack() and ct==1){
			cout<<"You grabbed a pancake from the first serving plate."<<endl;
			queues1.print();
			pancake1.push(queues1.top());
			
			queues1.pop();
		}
		else if (!queues2.isEmptyStack() and ct==2){
			cout<<"You grabbed a pancake from the second serving plate."<<endl;
			queues2.print();
			pancake1.push(queues2.top());
			queues2.pop();
		}
		else if (!queues3.isEmptyStack() and ct==3){
			cout<<"You grabbed a pancake from the third serving plate."<<endl;
			queues3.print();
			pancake1.push(queues3.top());
			queues3.pop();
		}
		else if (!queues4.isEmptyStack() and ct==4){
			cout<<"You grabbed a pancake from the fourth serving plate."<<endl;
			queues4.print();			
			pancake1.push(queues4.top());
			queues4.pop();
		}
		
		else{
			cout<<"No more pancakes left on serving plate " <<ct<<"."<<endl;
		}	
		
	}
	else if (num==4){
		if (!pancake1.isEmptyStack()){
			cout<<"You have put your pancake on serving plate "<<ct<<"."<<endl;
			if (ct==1){
				queues1.push(pancake1.top());
				pancake1.pop();
			}
			else if (ct==2){
				queues2.push(pancake1.top());
				pancake1.pop();
			}
			else if (ct==3){
				queues3.push(pancake1.top());
				pancake1.pop();
			}
			else if (ct==4){
				queues4.push(pancake1.top());
				pancake1.pop();
			}
		}
		else{
			cout<<"No more pancakes left on your plate."<<endl;
		}
		
	}

	else if (num==5){
		if (!pancake1.isEmptyStack()){
			cout<<"You ate your "<<pancake1.top()<<endl;
			pancake1.pop();
		}
		else{
			cout<<"No more pancakes left on your plate"<<endl;
		}

	}
display();
cin>>num;	
}

//Person 2
cout<<"Person 2:"<<endl;
display();
cin>>num;
while (num!=0){
	if (num==1){
		cout<<"You have rotated the lazy susan one time. "<<endl;
		ct=rotaion(ct);
	}
	else if (num==2){
		cout<<"You have decorated your pancake."<<endl;
		pancake2.pop();
		pancake2.push("Decorated pancake");
	}	
	else if (num==3){
			
		if (!queues1.isEmptyStack() and ct==1){
			cout<<"You grabbed a pancake from the first serving plate."<<endl;
			queues1.print();
			pancake2.push(queues1.top());
			
			queues1.pop();
		}
		else if (!queues2.isEmptyStack() and ct==2){
			cout<<"You grabbed a pancake from the second serving plate."<<endl;
			queues2.print();
			pancake2.push(queues2.top());
			queues2.pop();
		}
		else if (!queues3.isEmptyStack() and ct==3){
			cout<<"You grabbed a pancake from the third serving plate."<<endl;
			queues3.print();
			pancake2.push(queues3.top());
			queues3.pop();
		}
		else if (!queues4.isEmptyStack() and ct==4){
			cout<<"You grabbed a pancake from the fourth serving plate."<<endl;
			queues4.print();			
			pancake2.push(queues4.top());
			queues4.pop();
		}
		
		else{
			cout<<"No more pancakes left on serving plate " <<ct<<"."<<endl;
		}	
		
	}
	else if (num==4){
		if (!pancake2.isEmptyStack()){
			cout<<"You have put your pancake on serving plate "<<ct<<"."<<endl;
			if (ct==1){
				queues1.push(pancake2.top());
				pancake2.pop();
			}
			else if (ct==2){
				queues2.push(pancake2.top());
				pancake2.pop();
			}
			else if (ct==3){
				queues3.push(pancake2.top());
				pancake2.pop();
			}
			else if (ct==4){
				queues4.push(pancake2.top());
				pancake2.pop();
			}
		}
		else{
			cout<<"No more pancakes left on your plate."<<endl;
		}
		
	}

	else if (num==5){
		if (!pancake2.isEmptyStack()){
			cout<<"You ate your "<<pancake2.top()<<endl;
			pancake2.pop();
		}
		else{
			cout<<"No more pancakes left on your plate"<<endl;
		}

	}
display();
cin>>num;	
}

//Person 3
cout<<"Person 3:"<<endl;
display();
cin>>num;
while (num!=0){
	if (num==1){
		cout<<"You have rotated the lazy susan one time. "<<endl;
		ct=rotaion(ct);
	}
	else if (num==2){
		cout<<"You have decorated your pancake."<<endl;
		pancake3.pop();
		pancake3.push("Decorated pancake");
	}	
	else if (num==3){
			
		if (!queues1.isEmptyStack() and ct==1){
			cout<<"You grabbed a pancake from the first serving plate."<<endl;
			queues1.print();
			pancake3.push(queues1.top());
			
			queues1.pop();
		}
		else if (!queues2.isEmptyStack() and ct==2){
			cout<<"You grabbed a pancake from the second serving plate."<<endl;
			queues2.print();
			pancake3.push(queues2.top());
			queues2.pop();
		}
		else if (!queues3.isEmptyStack() and ct==3){
			cout<<"You grabbed a pancake from the third serving plate."<<endl;
			queues3.print();
			pancake3.push(queues3.top());
			queues3.pop();
		}
		else if (!queues4.isEmptyStack() and ct==4){
			cout<<"You grabbed a pancake from the fourth serving plate."<<endl;
			queues4.print();			
			pancake3.push(queues4.top());
			queues4.pop();
		}
		
		else{
			cout<<"No more pancakes left on serving plate " <<ct<<"."<<endl;
		}	
		
	}
	else if (num==4){
		if (!pancake3.isEmptyStack()){
			cout<<"You have put your pancake on serving plate "<<ct<<"."<<endl;
			if (ct==1){
				queues1.push(pancake3.top());
				pancake3.pop();
			}
			else if (ct==2){
				queues2.push(pancake3.top());
				pancake3.pop();
			}
			else if (ct==3){
				queues3.push(pancake3.top());
				pancake3.pop();
			}
			else if (ct==4){
				queues4.push(pancake3.top());
				pancake3.pop();
			}
		}
		else{
			cout<<"No more pancakes left on your plate."<<endl;
		}
		
	}

	else if (num==5){
		if (!pancake3.isEmptyStack()){
			cout<<"You ate your "<<pancake3.top()<<endl;
			pancake3.pop();
		}
		else{
			cout<<"No more pancakes left on your plate"<<endl;
		}

	}
display();
cin>>num;	
}

//Person 4
cout<<"Person 4:"<<endl;
display();
cin>>num;
while (num!=0){
	if (num==1){
		cout<<"You have rotated the lazy susan one time. "<<endl;
		ct=rotaion(ct);
	}
	else if (num==2){
		cout<<"You have decorated your pancake."<<endl;
		pancake4.pop();
		pancake4.push("Decorated pancake");
	}	
	else if (num==3){
			
		if (!queues1.isEmptyStack() and ct==1){
			cout<<"You grabbed a pancake from the first serving plate."<<endl;
			queues1.print();
			pancake4.push(queues1.top());
			
			queues1.pop();
		}
		else if (!queues2.isEmptyStack() and ct==2){
			cout<<"You grabbed a pancake from the second serving plate."<<endl;
			queues2.print();
			pancake4.push(queues2.top());
			queues2.pop();
		}
		else if (!queues3.isEmptyStack() and ct==3){
			cout<<"You grabbed a pancake from the third serving plate."<<endl;
			queues3.print();
			pancake4.push(queues3.top());
			queues3.pop();
		}
		else if (!queues4.isEmptyStack() and ct==4){
			cout<<"You grabbed a pancake from the fourth serving plate."<<endl;
			queues4.print();			
			pancake4.push(queues4.top());
			queues4.pop();
		}
		
		else{
			cout<<"No more pancakes left on serving plate " <<ct<<"."<<endl;
		}	
		
	}
	else if (num==4){
		if (!pancake4.isEmptyStack()){
			cout<<"You have put your pancake on serving plate "<<ct<<"."<<endl;
			if (ct==1){
				queues1.push(pancake4.top());
				pancake4.pop();
			}
			else if (ct==2){
				queues2.push(pancake4.top());
				pancake4.pop();
			}
			else if (ct==3){
				queues3.push(pancake4.top());
				pancake4.pop();
			}
			else if (ct==4){
				queues4.push(pancake4.top());
				pancake4.pop();
			}
		}
		else{
			cout<<"No more pancakes left on your plate."<<endl;
		}
		
	}

	else if (num==5){
		if (!pancake4.isEmptyStack()){
			cout<<"You ate your "<<pancake4.top()<<endl;
			pancake4.pop();
		}
		else{
			cout<<"No more pancakes left on your plate"<<endl;
		}

	}
display();
cin>>num;	
}






cout<<"****************"<<endl;
cout<<"Person 1 pancakes"<<endl;
pancake1.print();
cout<<"****************"<<endl;
cout<<endl;

cout<<"Person 2 pancakes"<<endl;
pancake2.print();
cout<<"****************"<<endl;
cout<<endl;

cout<<"Person 3 pancakes"<<endl;
pancake3.print();
cout<<"****************"<<endl;
cout<<endl;

cout<<"Person 4 pancakes"<<endl;
pancake4.print();
cout<<"****************"<<endl;

cout<<"Serving plate 1 pancakes"<<endl;
queues1.print();
cout<<"****************"<<endl;
cout<<endl;

cout<<"Serving plate 2 pancakes"<<endl;
queues2.print();
cout<<"****************"<<endl;
cout<<endl;

cout<<"Serving plate 3 pancakes"<<endl;
queues3.print();
cout<<"****************"<<endl;
cout<<endl;

cout<<"Serving plate 4 pancakes"<<endl;
queues4.print();
cout<<"****************"<<endl;





return 0;
};
















