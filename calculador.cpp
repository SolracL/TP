#include <iostream>
#include <cmath>
using namespace std;
	

	int main(int argc, char const *argv[])
	{
		setlocale(LC_ALL, "Portuguese");

		char op;
		double num1, num2;
		double resultado;
		
		cout<<"\n\n Calculadora";
		cout<<"\n\n Digite o primeiro número: ";
		cin>>num1;
		cout<<"\n\n Digite uma das operações [+,-,/,*,^]: ";
		cin>>op;
		cout<<"\n\n Digite o segundo número: ";
		cin>>num2;

			switch (op)
	    {
	    case '+':
	    	resultado = num1 + num2;
	    	break;
	    case '-':
	    	resultado = num1 - num2;
	    	break;
	    case '/':
	    	resultado = num1 / num2;
	    	break;
	    case '^':
	    	resultado = pow (num1 , num2);
	    	break;
	    case '*':
	    	resultado = num1 * num2;
	    	break;
	    defaut:
	    	break;
		}

		cout << num1 << op << num2 << " = " << resultado << endl;
		return 0;
		
	}
