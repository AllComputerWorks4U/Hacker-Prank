#include <stdlib.h> //including stdlib.h library
#include <iostream> //including iostream library
using namespace std;
string IP, port; //setting global variables

int main () {
	system("Green-text.bat"); //Setting text color to green
	cout<<"Ip address: "; //Asking for ip address
	cin>>IP;
	cout<<"Port: "; //Asking for port
	cin>>port;
	cout<<"Connecting"; //Connecting
    for (int dots = 0; dots < 3; dots++) { //Dots "animation"
        sleep(1);
        cout<<".";
    }
    sleep(0.5);
    cout<<"\nConnected!"; //Connected!
    sleep(1);
	system("Hacking.bat"); //Starting prank
}