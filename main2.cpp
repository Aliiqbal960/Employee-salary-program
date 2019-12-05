#include <iostream>
#include <string>
using namespace std;
class Employee{
	int sal,NHWPD,ten,fivsix;
	public:
		getInfo(){
			cout<<"Enter your salary = ";
			cin>>sal;
			cout<<"Enter Numbers of hours work per day = ";
			cin>>NHWPD;
		}
		AddSal(){
			if(sal<500){
				sal=sal+10;
				
			}
			
			
		}
		AddWork(){
			if(NHWPD>6){
				sal=sal+5;
			}
			cout<<"\n\nSo your salary is = "<<sal;
		}
};
int main(){
	Employee a;
	a.getInfo();
	a.AddSal();
	a.AddWork();
}
