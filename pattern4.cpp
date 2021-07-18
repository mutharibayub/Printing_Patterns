// Mutharib(i200476)	assignment1

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	char c;
	cout<<"Enter character to be used: ";
	cin>>c;
	cout<<setw(10)<<c<<endl<<endl
	<<setw(7)<<c<<setw(6)<<c<<endl<<endl
	<<setw(4)<<c<<setw(12)<<c<<endl<<endl
	<<setw(1)<<c<<setw(18)<<c<<endl<<endl
	<<setw(4)<<c<<setw(12)<<c<<endl<<endl
	<<setw(7)<<c<<setw(6)<<c<<endl<<endl
	<<setw(10)<<c<<endl<<endl;
	
	cout<<"Enter character to be used: ";
	cin>>c;
	cout<<setw(10)<<c<<endl<<endl;
	cout<<setw(7)<<c<<setw(6)<<c<<endl<<endl;
	cout<<setw(4)<<c<<setw(12)<<c<<endl<<endl;
	cout<<setw(1)<<c<<setw(18)<<c<<endl<<endl;
	cout<<setw(4)<<c<<setw(12)<<c<<endl<<endl;
	cout<<setw(7)<<c<<setw(6)<<c<<endl<<endl;
	cout<<setw(10)<<c<<endl<<endl;
	
	
	return 0;
}
