#include <iostream>
#include <cmath>

using namespace std;

	void silasQuadratic(double a, double b, double c){
		
		if(a == 0){
			cout << "This is not a quadratic function! ";
		}
		
		double D = b * b - 4 * a * c;
		
		cout << "\n *********************************** \n";
		cout << "\n Discriminant = " << D << endl;
		cout << "\n *********************************** \n";
		
		cout << "\n *********************************** \n";
		if (D > 0){
			
			double x_one = (-b + sqrt(D)) / (2/a);
			double x_two = (-b - sqrt(D)) / (2/a);
			
			cout << "Root One = " << x_one << endl;
			cout << "Root Two = " << x_two << endl;
			
		}
		else if ( D == 0){
			double x_value = -b / (2*a);
			cout << "The equation has two equal and real roots. " << endl;
			cout << "Root 1 == Root 2 = " << x_value << endl;	
		}
		else {
			double real = - b /(2 * a);
			double imaginary = sqrt (-D) / (2*a);
			cout << "Two complex roots" << endl;
			cout << "Root One: " << real << " + " << abs(imaginary) << "i" << endl;
			cout << "Root Two: " << real << " + " << abs(imaginary) << "i" << endl; 
				
		}
		cout << "\n *********************************** \n";
		
		
	}

int main(int argc, char** argv) {
	
	double a, b, c;
	

	cout << "\n SOLVING QUADRATIC EQUATION \n" << endl;
	cout << "\n *********************************** \n";
	
	cout << "Enter the coeeficient value 'a':  ";
	if(!(cin >> a)){
		cout << "'a' must be a numeric value: " << endl;
		return 1;
	}

	
	cout << "Enter the coeeficient 'b':  ";
		if(!(cin >> b)){
		cout << "'b' must be a numeric value: " << endl;
		return 1;
	}
		
	cout << "Enter the constant 'c':  ";
	if(!(cin >> c)){
		cout << "'c' must be a numeric value: " << endl;
		return 1;
	}
    cout << "\n *********************************** \n";
	

	silasQuadratic(a, b, c);
	return 0;
}
