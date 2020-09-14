
#include <iostream>
#include <iomanip>
#include "complexNo.cpp"
#include "complexNo.h"
#include <unistd.h>


using namespace std;

const int num = 10;
complexNo Z[num];

void message();
void calculations();

int main()
{
    message();
    calculations();
    
    Z[1]= complexNo(3,4);
    
    cout <<"The polar form of the constructor is :";
    Z[1].showEularform();
    cout<<endl<<endl;
    int num;
    char ch;
    cout << "\t\t\t\t############" << endl << endl;
    cout<<  "\t\t\t\tOperations: " << endl << endl;
    cout << "\t\t\t\t############" << endl<<endl<<endl;
    cout<<"1. Addition \n2. Substraction \n3. Multiplication \n4. Division"<<endl<<endl;
    do
    {
    cout<<"-------------------------------------------------"<<endl<<endl;
    cout<<"Choose one of the operations :";
    cin>>num;
    cout<<endl;
    switch (num)
    {
    	case 1 : cout<<"Addition of the two numbers is : "; 
    	Z[3].printComplex(); break;
    	case 2 : cout<<"Substraction of your two numbers is (from first complex number to second) : ";
    	Z[4].printComplex(); break;
    	case 3 : cout<<"Multiplication of your two complex numbers is : ";
    	Z[5].printComplex(); break;
    	case 4 : cout<<"Division of your two complex numbers is : ";
    	Z[6].printComplex(); break;

    }
        cout<<endl<<endl;
        cout<<"do you want to continue with other operation(Y/N): ";
    	cin>> ch;
	}while(ch=='Y' || ch == 'y');

}

void message()
{
	cout<<"\t\t**********************************************************************"<<endl<<endl;
    cout <<"\t\tThis Program Computes the Following Calculations of 2 Complex Numbers" << endl<<endl;
    cout<<"\t\t**********************************************************************"<<endl<<endl<<endl;
    sleep(1);
    cout <<"\t\t\t\t==> Addition"<<endl;
    cout <<"\t\t\t\t==> Substraction"<<endl;
    cout <<"\t\t\t\t==> Multiplication"<<endl;
    cout <<"\t\t\t\t==> Division"<<endl;
    cout <<"\t\t\t\t==> Conversion to Polar Form"<<endl;
    cout <<"\t\t\t\t==> Conversion to Eular Form"<<endl<<endl<<endl;
    
    
}

void calculations()
{
    cout << fixed << setprecision(2);
    double a,b,c, d;
    cout << "Enter the Real and Imaginary Part of the Complex Number Respectively ."<<endl<<endl;
    cout << "Real Part of Z[1]      : "; cin >> a;
    cout << "Imaginary Part of Z[1] : "; cin >> b;
    cout << endl;
    cout << "Real Part of Z[2]      : "; cin >> c;
    cout << "Imaginary Part of Z[2] : "; cin >> d;
    Z[1] = complexNo(a,b);
    Z[2] = complexNo(c,d);
    Z[3] = Z[1] + Z[2]; Z[4] = Z[1] - Z[2];  Z[5] = Z[1] * Z[2];  Z[6] = Z[1] / Z[2];
    
    cout << endl;
    cout << "\t\t\t##############################################" << endl;
    cout<<  "\t\t\tThe information of the first complex number : " <<endl;
    cout << "\t\t\t##############################################" << endl<<endl<<endl;
    cout<<"The complex number is :";
    Z[1].printComplex(); cout<<endl<<endl;
    
    cout<<"The real part of the complex number is :";
    cout<< Z[1].getReal(); cout<<endl<<endl;
    
    cout<<"The imaginary part of the complex number is :";
    cout<< Z[1].getImag(); cout<<endl<<endl;
    
    cout<<"The conjugate is :";
    cout<<Z[1].getReal()<<"+("<<Z[1].getImConj()<<")";cout<<endl<<endl;
    
    cout<<"the modulus of the complex number is: ";
    cout<<Z[1].getModulus();cout<<endl<<endl;
    
    cout<<"the argument of the complex number is: ";
    cout<<Z[1].getArgument();cout<<endl<<endl;
    
    cout<<"the polar form of the complex number is: ";
    Z[1].showPolarform();cout<<endl<<endl;
    
    cout<<"the Euler form of the complex number is: ";
    Z[1].showEularform();cout<<endl<<endl;
    
}
  




