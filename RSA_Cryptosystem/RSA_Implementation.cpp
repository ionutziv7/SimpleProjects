#include <iostream>
using namespace std;

// This function returns the private key d (the multiplicative inverse of e modulo phi) using the [[Extended Euclidean Algorithm|Extended Euclidean Algorithm]] 
int getPrivateKey(int e, int phi)
{
	int b = phi; // declaration of local variables 
	int d = 1;
	int u = 0;
	while (b != 0)
	{
		int q = e / b;
		int b1 = b; // variable for caching
		b = e - q * b;
		e = b1;
		int u1 = u; // variable for caching
		u = d - q * u;
		d = u1;
	}
	return d;
}

//This function calculates the power a ^ b modulo n 
int modularPower(int a, int b, int n)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
		result %= n;
	}
	return result;
}

// This function encrypts the text with the key e
string encryptTextWithRSA(string text, int n, int e)
{
	string encryptedText = "";
	for (int i = 0; i < text.length(); i++)
	{
		int c = modularPower(text[i], e, n); //cripteaza un caracter al textului 
		encryptedText += c;
	}
	return encryptedText;
}

// This function decrypts the text with the key d
string decryptTextWithRSA(string text, int n, int d)
{
	string decryptedText = "";
	for (int i = 0; i < text.length(); i++)
	{
		int m = modularPower(text[i], d, n); //decripteaza un caracter al textului
		decryptedText += m;
	}
	return decryptedText;
}

// main function that executes the program 
int main()
{
	int p = 307; // initialize the variables for the primes p and q
	int q = 859;

	int n = p * q;
	int e = 1721; // declaration of the local variable for the public key
	int phi = (p - 1) * (q - 1);

	int d = getPrivateKey(e, phi); // Call the function that generates the private key
	string text = "Join Wikipedia"; // initialize the plaintext
	string ciphertext = encryptTextWithRSA(text, n, e); // calling the function to encrypt
	cout << ciphertext << endl; // output the encrypted text to the console
	string plaintext = decryptTextWithRSA(ciphertext, n, d); // calling the decryption function
	cout << plaintext << endl; // output the decrypted text to the console
}
