#include <iostream>
#include <string>
#include <fstream> 

using namespace std;

void read_csv(string fileName){
	fstream file;
	try{
		const char* str = fileName.c_str();
		file.open(str, ios::in);
		if(!file){
			throw fileName;
		}
	}
	catch(string fileName){
		cout<<"�ɮ׵L�k�Q�}��"<<endl;
		cout<<"�ɮצW��:"<<fileName<<endl;
		return; 
	}
	while(!file.eof()){
		string name,birthday,height,weight;
		getline(file,name,',');
		getline(file,birthday,',');
		getline(file,height,',');
		getline(file,weight,'\n');
		
		cout<<"�m�W: "<<name <<endl;
		cout<<"�ͤ�: "<<birthday <<endl;
		cout<<"����: "<<height <<endl;
		cout<<"�魫: "<<weight <<endl;
		cout<<"----------------------------"<<endl;		 
	}
	return;
}

int main(){
	read_csv("data_2.csv");
	return 0;
}
