#include <iostream>
using namespace std;

class Sbank {
	int a,c;
	//every new account gets +$10,000//
	int b = 0;
	public:
		void Diposite() {
			cout << "Money Diposited : $";
			cin >> a;
			b = b + a;
			}
		void Money() {
			cout << "Bank Balance : $";
			cout << b;
			cout << "\n";
			}
		void Withdrawl() {
			cout << "Money Withdrwal : $";
			cin >> c;
			b = b - c;
			cout << "\n";
		}
		void bankCurpt() {
			cout << "Warning : Your saving gone bellow $0 \n\n";
			cout << "Recomended : Take A small loan from our bank with small fee \n";
			
		}
		//Add the loan system//
			
		
};

int main() {
	int d,f=1;
	int F[1] = {1};
	Sbank acc1;
	cout << "Notice : New account have been credited +$10,000 as Per New Policy. \n\n";
	cout << "Enter Your Command from bellow\n\n";
	cout << "1) Diposite Money \n2) Withraw Money \n3) Balance check\n\n";
	while (f=1){
		int e;
		cout << ">>> ";
		cin >> e;
		switch (e) {
			case 1:
				acc1.Diposite();
				continue;
			case 2:
				acc1.Withdrawl();
				continue;
			case 3:
				acc1.Money();
				continue;
			default :
				cout << "    ^\n";
				cout << "Error!! Enter Valid Value \n\n";
				continue;
		}
}
	cin >> d;
}

