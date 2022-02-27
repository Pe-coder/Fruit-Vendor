#include <iostream>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	
	int ans;
	int ans11;
	double apple = 0;
	double orange = 0;
	double water = 0;
	double applec = 0;
	double orangec = 0;
	double waterc = 0;
	
	
	
	cout<<"                                  Welcome to the Fruit Vendooor"<<endl;
	cout<<endl;
	cout<<"Would you like to enter?"<<endl;
	cin>>ans11;
	while(ans11 == 1){
		cout<<"Please enjoy our options : "<<endl;
	cout<<endl;
	cout<<"1)Apple                                 2$"<<endl;
	cout<<"2)Orange                                3$"<<endl;
	cout<<"3)Watermelon                            5$"<<endl;
	cout<<"4)Show me the bill!!"<<endl;
	cout<<endl;
	cout<<"Your choice :";
	cin>>ans;
	
	if(ans == 1){
		apple = apple + 2;
		applec++;
		
	} 
	
	if(ans == 2){
		orange = orange + 3;
		orangec++;
		
	}
	
	if(ans == 3){
		
		water = water + 5;
		waterc++;
		
		
	}
	
	if(ans == 4){
		ofstream check("Check.html");
		
		check << "<body>"<<endl<<"<table style=\"border:1px solid black\">"<<endl<<"<tr>"<<endl<<"<th>Product</th>"<<endl<<"<th>Amount</th>"<<endl<<"<th>Price</th>"<<endl<<"<th>Total</th>"<<endl<<"</tr>"<<endl<<"<tr>"<<endl<<"<td>Apples</td>"<<endl<<"<td>"<<applec<<"</td>"<<endl<<"<td>2$</td>"<<endl<<"</tr>"<<endl<<"<tr>"<<endl<<"<td>Oranges</td>"<<endl<<"<td>"<<orangec<<"</td>"<<endl<<"<td>3$</td>"<<endl<<"</tr>"<<endl<<"<tr>"<<endl<<"<td>Watermelons</td>"<<endl<<"<td>"<<waterc<<"</td>"<<endl<<"<td>5$</td>"<<endl<<"</tr>"<<endl<<"<tr>"<<endl<<"<td>"<<apple + orange + water<<" $</td>"<<endl<<"</tr>";
		
		cout<<"You bought : "<<endl;
		cout<<applec<<" Apples with the total of "<<apple<<endl;
		cout<<orangec<<" Oranges with the total of "<<orange<<endl;
		cout<<waterc<<" Watermelons with the total of "<<water<<endl;
		cout<<"Your total comes to : "<<apple + orange + water<<" $"<<endl;
		
	}	
		cout<<"would you like to continue?"<<endl;
		cin>>ans11;
	}
	
	
	
	return 0;
}
