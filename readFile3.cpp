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
		cout<<"檔案無法被開啟"<<endl;
		cout<<"檔案名稱:"<<fileName<<endl;
		return; 
	}
	while(!file.eof()){
		string name,birthday,height,weight;
		getline(file,name,',');
		getline(file,birthday,',');
		getline(file,height,',');
		getline(file,weight,'\n');
		
		cout<<"姓名: "<<name <<endl;
		cout<<"生日: "<<birthday <<endl;
		cout<<"身高: "<<height <<endl;
		cout<<"體重: "<<weight <<endl;
		cout<<"----------------------------"<<endl;		 
	}
	return;
}

int main(){
	read_csv("data_2.csv");
	return 0;
}
