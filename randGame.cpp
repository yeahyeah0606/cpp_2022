#include <iostream>
#include <stdlib.h>
#include <ctime>
//�ŤM���Y���C��    

using namespace std;

int gameStatus = 0; //0���� 1���a�� 2�q���� 
void opPick(int &opChoice);
void judge(int myChoice, int opChoice);

int main(){
	int myChoice,opChoice;
	do{
		cout<<"�ŤM(1) ���Y(2) ��(3)"<<endl;
		cin>>myChoice;
		opPick(opChoice);
		judge(myChoice,opChoice);
	}while(gameStatus == 0);	
	return 0;
} 

void opPick(int &opChoice){
	srand(time(NULL));
	opChoice = rand()%3+1;
	
	switch(opChoice){
		case 1:
			cout<<"�q���X�ŤM"<<endl; 
			break;
		case 2:
			cout<<"�q���X���Y"<<endl;
			break; 
		case 3:
			cout<<"�q���X��"<<endl; 	
			break;
		
	}
	
}

void judge(int myChoice, int opChoice){
	if(myChoice == 1 && opChoice == 3){
		cout<<"�z��ӤF\a"<<endl;
		gameStatus=1;
	}else if(myChoice == 2 && opChoice == 1){
		cout<<"�z��ӤF\a"<<endl;
		gameStatus=1;		
	}else if(myChoice == 3 && opChoice == 1){
		cout<<"�z��ӤF\a"<<endl;
		gameStatus=1;
	}else if(myChoice == 1 && opChoice == 2){
		cout<<"�q����ӤF\a"<<endl;
		gameStatus=2;		
	}else if(myChoice == 2 && opChoice == 3){
		cout<<"�q����ӤF\a"<<endl;
		gameStatus=2;		
	}else if(myChoice == 3 && opChoice == 1){
		cout<<"�q����ӤF\a"<<endl;
		gameStatus=2;		
	}else {
		cout<<"����!!!!"<<endl;
		gameStatus=0;		
	}
	
	return;
}




