#include<iostream>
#include<string.h>
using namespace std;

class Points{
	private :
		char str[100];
	public :
	
	 Points(char str[]){
	 	strcpy(this->str,str);
	 	
	 }
	 void print(){
	 	cout<<"My Name is =  "; 
	 }	
	 void print(char a[]){
	 	cout<<str<<" "<<a<<endl;
	 }
		
};

int main(){
	Points p("Prince");
	p.print();
	p.print("Parabiya");
	
	
	return 0;
}
