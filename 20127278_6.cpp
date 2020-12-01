#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a, b , c, delta, x, x1, x2;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Nhap so c: ";
	cin >> c;
	
	delta = (b*b) - (4*a*c);
	
	if(a==0 && b == 0 && c == 0)
		cout << "Phuong trinh co vo so nghiem";
	else if(a==0 && b == 0 && c != 0)
		cout << "Phuong trinh vo nghiem";
	else if (a==0 && b!=0 && c==0)
		cout << "Phuong trinh co 1 nghiem duy nhat la: " << 0/b ;
	else if (a==0 && b!=0 && c!=0)
		cout <<"Phuong trinh co 1 nghiem duy nhat la: " << -c/b;
	else 
		if(delta == 0){
			x = -b / (2*a);
			cout <<"Phuong trinh co 1 nghiem kep x1 = x2 = " << x;
		}
		else if(delta >= 0)
		{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		cout <<"Phuong trinh co 2 nghiem phan biet " << endl <<"x1 = "<< x1 << endl <<"x2= "<< x2;
		}
		else if(delta < 0)
			cout << "Phuong trinh vo nghiem";
}
