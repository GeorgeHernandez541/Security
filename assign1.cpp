/******************************************************
 *Program Filename: assign1.cpp
 *Author: George Hernandez
 *Date: 10/13/14
 *Description: Encrypts and decrypts a string message
 *input: string 
 *output:original string
 ******************************************************/

#include <iostream>
#include <string>
#include <functional>
#include "encrypt.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

void encrypting(string,string);
void decrypting(string,string);
void testing(string,string);

int main(){ 

	string test1 = "123";
	string test2 = "54678";
	string test3 = "923475431235";
	string key = "Oreos";
	
	cout << " Encrypting and decrypting '123' with 'Oreos': " << endl;
	encrypting(test1, key);
	cout << " Encrypting and decrypting '54678' with 'Oreos': " << endl;
	encrypting(test2, key);
	cout << " Encrypting and decrypting '92347531235' with 'Oreos': " << endl;
	encrypting(test3, key);

	return 0;
}



/**********************************************************************
 *Function: encrypting
 *Description: Encrypts a string with a key using the xor function
 *Parameters: string stat, string pass
 *Pre-Con: None
 *Post-Con: None
 ***********************************************************************/
void encrypting (string stat, string pass){ 
	int temp, keytemp;
		
	for ( temp = 0 ,keytemp = 0; temp < stat.length(); temp ++, keytemp ++){ 
        	stat[temp]^= pass[keytemp];
		if (keytemp == pass.length()){ 
			keytemp = 0;
		}
		
	}
	cout << stat << endl;
	decrypting(stat, pass);
}

/*******************************************************************************************
 *Function: decrypting
 *Description: Decrypts the string passed from encrypting and uses the key for original string
 *Parameters: string original, string code
 *Pre-Con: None
 *Post-Con: None
 *******************************************************************************************/
void decrypting (string original,string code){
	int temp, keytemp;

	for (temp=0 , keytemp = 0; temp < original.length(); temp ++, keytemp ++){ 		
		original[temp] ^= code[keytemp];
		if (keytemp == code.length()){ 
			keytemp = 0;
		}
	}
	cout << original << endl;
}
