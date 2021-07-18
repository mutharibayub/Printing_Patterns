// Mutharib(i200476)	assignment1

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	char c;
	cout<<"Enter character to be used: ";
	cin>>c;
	cout<<setw(6)<<c<<"\n"
	<<setw(5)<<c<<c<<c<<"\n"
	<<setw(4)<<c<<c<<c<<c<<c<<"\n"
	<<setw(3)<<c<<c<<c<<c<<c<<c<<c<<"\n"
	<<setw(2)<<c<<c<<c<<c<<c<<c<<c<<c<<c<<"\n"
	<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<"\n"
	<<setw(2)<<c<<c<<c<<c<<c<<c<<c<<c<<c<<"\n"
	<<setw(3)<<c<<c<<c<<c<<c<<c<<c<<"\n"
	<<setw(4)<<c<<c<<c<<c<<c<<"\n"
	<<setw(5)<<c<<c<<c<<"\n"
	<<setw(6)<<c<<endl;

	cout<<"Enter character to be used: ";
	cin>>c;
	cout<<setw(6)<<c<<endl;
	cout<<setw(5)<<c<<c<<c<<endl;
	cout<<setw(4)<<c<<c<<c<<c<<c<<endl;
	cout<<setw(3)<<c<<c<<c<<c<<c<<c<<c<<endl;
	cout<<setw(2)<<c<<c<<c<<c<<c<<c<<c<<c<<c<<endl;
	cout<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<endl;
	cout<<setw(2)<<c<<c<<c<<c<<c<<c<<c<<c<<c<<endl;
	cout<<setw(3)<<c<<c<<c<<c<<c<<c<<c<<endl;
	cout<<setw(4)<<c<<c<<c<<c<<c<<endl;
	cout<<setw(5)<<c<<c<<c<<endl;
	cout<<setw(6)<<c<<endl;
		
	return 0;
}
