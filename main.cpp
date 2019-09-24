#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void sale();
//int total_product=20;
void stock(int total_product);
void show_product(int total_product);
string product_name[20];
int product_price[20],product_count[20];

int main(int argc, char** argv) {

	int total_product=10;
//	ofstream cv_file ("./files/product.txt");
//	if(cv_file.is_open()){
//		cv_file<<"";
//    	cv_file.close();
//	}else{cout<<"can't open file";}

	stock(total_product);
	show_product(total_product);
	return 0;
}
void stock(int total_product){
	string password;
	int edit_num;
	
	char menu,again;
//	cout<<"password : ";cin>>password;
//	if(password=="admin"){
	do{
	
		do{
			cout<<"[a]dd product\n"
				<<"[e]dit product\n"
				<<"[q]uit\n"
				<<"select menu : ";cin>>menu;
		}while(tolower(menu)!='q' && tolower(menu)!='a' && tolower(menu)!='e');
		menu=tolower(menu);
		show_product(total_product);
		cout<<"\n";
		if(menu=='a' || menu=='e'){cout<<"select number product : ";cin>>edit_num;} /////////////////////////////////////////////////
		if(menu=='a'){
			cout<<"product name : ";cin>>product_name[edit_num];
			cout<<"product price : ";cin>>product_price[edit_num];
			cout<<"product count : ";cin>>product_count[edit_num];
				ofstream cv_file ("./files/product.txt");
				if(cv_file.is_open()){
					for(int i=0;i<(sizeof(product_name)/sizeof(*product_name));i++){
						cv_file<<"{ "
							<<i<<setw(1)<<" product_name: "<<product_name[i]<<","
							<<" product_price: "<<product_price[i]<<","
							<<" product_count: "<<product_count[i]<<","
							<<" }"<<setw(3);
						if(i!=0&&(i+1)%5==0){cv_file<<"\n";}
					}
			    	cv_file.close();
				}else{cout<<"can't open file";}
		}else if(menu=='e'){
			cout<<"product name : ";cin>>product_name[edit_num];
			cout<<"product price : ";cin>>product_price[edit_num];
			cout<<"product count : ";cin>>product_count[edit_num];
				ofstream cv_file ("./files/product.txt");
				if(cv_file.is_open()){
					for(int i=0;i<(sizeof(product_name)/sizeof(*product_name));i++){
						cv_file<<"{ "
							<<i<<setw(1)<<" product_name: "<<product_name[i]<<","
							<<" product_price: "<<product_price[i]<<","
							<<" product_count: "<<product_count[i]<<","
							<<" }"<<setw(3);
						if(i!=0&&(i+1)%5==0){cv_file<<"\n";}
					}
			    	cv_file.close();
				}else{cout<<"can't open file";}
		}		
		system("CLS");
//		cout<<(sizeof(product_name)/sizeof(*product_name));

		cout<<"stock again ? y/n :";cin>>again;
	}while(tolower(again)!='n');
//	}
}
void show_product(int total_product){
	for(int i=0;i<total_product;i++){
		cout<<"["<<i<<"] ";
		cout<<setw(10)<<left<<product_name[i];
//			<<setw(10)<<left<<product_price[i]<<"\n"
//			<<setw(10)<<left<<product_count[i];
		if(i!=0&&i%5==0){cout<<"\n";}
	}
}
