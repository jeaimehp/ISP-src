#include <iostream>
#include <string>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	char rosetta [62] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ','1','2','3','4','5','6','7','8','9'}; 
	//cout << rosetta[:] << endl;
	int key;
	string phrase = "";
	cout << "Enter your secret phrase" << endl;
	getline(cin, phrase);
	cout << "Enter your key integer number" << endl;
	cin >> key;
	int phraselength = phrase.length();
	cout << "The phrase is = " << phrase << endl << " The length of the phrase = " << phraselength << " The key is = " << key << " The modded key is " << key%62<< endl; 
	for (int i=0;i<phraselength;i++){
		for (int j=0;j<=62;j++){
			if (phrase[i] == rosetta[j]){
				if (key - j > 62){
				cout << rosetta[(abs(j-key)%62)];
				}
				else {
				cout << rosetta[abs(j-key)];
				}	
			}
		}
	
	}	
	cout << endl << "Done" << endl;

}
