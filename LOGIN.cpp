#include <iostream>

using namespace std;

int main(){
	string UNPass, temp;
	int lengthUser, lengthPass;
	
	cout<<"Silahkan Login"<<endl;
	
	cout<<"Masukkan Username Anda : ";
	cin>>UNPass;
	
	cout<<"Masukkan Password Anda : ";
	cin>>temp;
	
	lengthUser = UNPass.length();
	lengthPass = temp.length();
	UNPass = UNPass + temp;

	system("cls");
	
	cout<<"Selamat Datang! " ;
	for (int i=0; i<(lengthUser); i++){
		cout<<UNPass[i];
		
		if(i == lengthUser -1){
			cout<<endl <<"Password Anda : ";
			for ( int j = i; j<(lengthUser + lengthPass); j++){
				cout << UNPass[j+1];
			}
		}
	}
	UNPass = temp = "";
	lengthUser = lengthPass = 0;
	cout<<endl<<endl;
	system("Pause");
	return 0;	
}
