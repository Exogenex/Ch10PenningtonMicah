// Micah Pennington
// March 15 2022 ©
// Chapter 10 Program

#include <iostream>

using namespace std;

// Prototypes
int cntVl(char* point);
int cntCn(char* point);

int main() {
	// The char passed as the user's 
	char menuIn;
	const int STRING_LENGTH = 100;
	char cString[STRING_LENGTH];

	// Get the c-string to be acted upon
	cout << "Enter a string: ";
	cin.getline(cString, STRING_LENGTH);

	while (true) {
		// Enter menu
		cout << "A) Count the number of vowels in the string\n";
		cout << "B) Count the number of consonants in the string\n";
		cout << "C) Count both the vowels and the consonants in the string\n";
		cout << "D) Enter annother string\n";
		cout << "E) Exit the program\n";
		cin.get(menuIn);
		cin.ignore();// Ignore newline left after cin.get()

		// Switch menu
		switch (tolower(menuIn))
		{
		case 'a':
			cout << "The number of vowels in the string is: " << cntVl(cString) << '\n'; break;
		case 'b':
			cout << "The number of consonants in the string is: " << cntCn(cString) << '\n'; break;
		case 'c':
			cout << "The number of vowels in the string is: " << cntVl(cString) << '\n';
			cout << "And the number of consonants in the string is: " << cntCn(cString) << '\n';
			break;
		case 'd': 
			// Get a new c-string to be acted upon
			cout << "Enter a string: ";
			cin.getline(cString, STRING_LENGTH);
			break;
		case 'e': return EXIT_SUCCESS; // Correct way to exit
		default: // Wrong input
			cout << "Error: Incorrect Menu Input" << '\n';
			cout << "Please re-enter the string and try again" << '\n';
			break;
		}

	}

	return EXIT_FAILURE; // Unknown Error
}

/// <summary>
/// Counts the number of vowels occuring in a c-string
/// </summary>
/// <param name="point">A pointer to a c-string(char array)</param>
/// <returns>Total number of vowels in the passed c-string</returns>
int cntVl(char* point) {
	int total = 0;
	int i = 0;
	while (point[i] != '\0')
	{
		switch (tolower(point[i]))
		{
		case 'a': total++;break;
		case 'e': total++;break;
		case 'i': total++;break;
		case 'o': total++;break;
		case 'u': total++;break;
		default: break;
		}

		i++;
	}

	return total;
}

/// <summary>
/// Counts the number of consonants occuring in a c-string
/// </summary>
/// <param name="point">A pointer to a c-string(char array)</param>
/// <returns>Total number of consonants in the passed c-string</returns>
int cntCn(char* point) {
	int total = 0;
	int i = 0;
	while (point[i] != '\0')
	{
		switch (tolower(point[i]))
		{
		case 'b': total++;break;
		case 'c': total++;break;
		case 'd': total++;break;
		case 'f': total++;break;
		case 'g': total++;break;
		case 'h': total++;break;
		case 'j': total++;break;
		case 'k': total++;break;
		case 'l': total++;break;
		case 'm': total++;break;
		case 'n': total++;break;
		case 'p': total++;break;
		case 'q': total++;break;
		case 'r': total++;break;
		case 's': total++;break;
		case 't': total++;break;
		case 'v': total++;break;
		case 'w': total++;break;
		case 'x': total++;break;
		case 'y': total++;break;
		case 'z': total++;break;
		default: break;
		}

		i++;
	}

	return total;
}