#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void sale();
int total_product=20;
void stock(int total_product);
void show_product(int total_product);
string product_name[20];
int product_price[20],product_count[20];
int main(int argc, char** argv) {
	
//	ofstream cv_file ("./files/product.txt");
//	if(cv_file.is_open()){
//		cv_file<<"";
//    	cv_file.close();
//	}else{cout<<"can't open file";}


	stock(total_product);
	return 0;
}
void stock(int total_product){
	string password;
	int edit_num;
	
	char menu,again;
	cout<<"password : ";cin>>password;
	if(password=="admin"){
		do{
			cout<<"[a]dd product\n"
				<<"[e]dit product\n"
				<<"[q]uit\n"
				<<"select menu : ";cin>>menu;
		}while(tolower(menu)!='q' && tolower(menu)!='a' && tolower(menu)!='e');
		menu=tolower(menu);
		if(menu=='a' || menu=='e'){cout<<"select number product : ";cin>>edit_num;}
		if(menu=='a'){
			cout<<"product name : ";cin>>product_name[edit_num];
			cout<<"product price : ";cin>>product_price[edit_num];
			cout<<"product count : ";cin>>product_count[edit_num];
		}
	}
}
void show_product(int total_product){
	int page_total,unit_page=5,page_stg,page,n_product,old_page;
	page_total=total_product-(total_product%unit_page)
}
