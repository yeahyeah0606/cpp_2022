#include <iostream>
#include <stdlib.h>
#include <ctime>
//剪刀石頭布遊戲    

using namespace std;

int gameStatus = 0; //0平手 1玩家勝 2電腦勝 
void opPick(int &opChoice);
void judge(int myChoice, int opChoice);

int main(){
	int myChoice,opChoice;
	do{
		cout<<"剪刀(1) 石頭(2) 布(3)"<<endl;
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
			cout<<"電腦出剪刀"<<endl; 
			break;
		case 2:
			cout<<"電腦出石頭"<<endl;
			break; 
		case 3:
			cout<<"電腦出布"<<endl; 	
			break;
		
	}
	
}

void judge(int myChoice, int opChoice){
	if(myChoice == 1 && opChoice == 3){
		cout<<"您獲勝了\a"<<endl;
		gameStatus=1;
	}else if(myChoice == 2 && opChoice == 1){
		cout<<"您獲勝了\a"<<endl;
		gameStatus=1;		
	}else if(myChoice == 3 && opChoice == 1){
		cout<<"您獲勝了\a"<<endl;
		gameStatus=1;
	}else if(myChoice == 1 && opChoice == 2){
		cout<<"電腦獲勝了\a"<<endl;
		gameStatus=2;		
	}else if(myChoice == 2 && opChoice == 3){
		cout<<"電腦獲勝了\a"<<endl;
		gameStatus=2;		
	}else if(myChoice == 3 && opChoice == 1){
		cout<<"電腦獲勝了\a"<<endl;
		gameStatus=2;		
	}else {
		cout<<"平手!!!!"<<endl;
		gameStatus=0;		
	}
	
	return;
}




