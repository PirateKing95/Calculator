/*
Cody Andrews	
10-25-2018
Calculator Application
*/

#include <iostream>
#include <cstdlib>
#include <string>

//Functions

void Add() {
	
	//variables for the while loop
	double sum =0.0; 
	std::string line = "";
		
	//while loop that keeps asking for numbers to add until user exits loop
	while (line != "end") {
			std::cout << "The current sum is " << sum << std::endl;
			std::cout << "Enter the number you would like to add or \"end\" to exit the program: " << std::endl;
			std::cin >> line;
			sum += atof(line.c_str());
		}

	//displays the final total of all numbers added once user exits addition function
	std::cout << "The final total is " << sum << std::endl; 
	
}
void Sub() {
	//Variables for while loop
	double difference = 0.0;
	std::string line = ""; 


	std::cout << "What number would you like subtracted?" << std::endl; 
	std::cin >> difference; 
	//While loop that keeps asking for numbers to add until user exits loop
	while (line != "end") {
		
		std::cout << "The current difference is " << difference << std::endl;
		std::cout << "Enter the number you would like to subtract " << difference << " by or \ntype \"end\" to exit program." << std::endl;
		std::cin >> line; 
		difference = difference - atof(line.c_str());
	}

	std::cout << "The final difference is " << difference << std::endl;

}
void Mult() {
	//Variables for while loop
	double product = 0.0, num1, num2; 
	std::string line = ""; 

	while (line != "end") {

		std::cout << "What number you would you like to multiply or type end to exit program?" << std::endl; 
		std::cin >> line;
		if (line == "end")
			break;
		std::cout << "What is the second number you would like to multiply by?" << std::endl; 
		std::cin >> num2; 
		product = atof(line.c_str()) * num2;

		std::cout << "The product is: " << product << std::endl; 
	}



}
void Div() {
	double quotient = 0.0;
	std::string line = "";

	//Get user input for number being divided 
	std::cout << "What is the number you would like divided?" << std::endl;
	std::cin >> quotient;
	//while loop that keeps allowing division of original num until user ends program
	while (line != "end") {
		std::cout << "Enter the number you would like to divide " << quotient << " by or \ntype \"end\" to exit program." << std::endl;
		std::cin >> line;
		quotient /= atof(line.c_str());
		std::cout << "The Quotient is: " << quotient << std::endl;
	}


}



//Main function
int main() {

	//variables
	int UserChoice; 

	//Ask user what they'd like to compute
	std::cout << "What would you like to do?" << std::endl; 
	std::cout << "1 = Addition" << std::endl; 
	std::cout << "2 = Subtraction" << std::endl; 
	std::cout << "3 = Multiplication" << std::endl;
	std::cout << "4 = Division" << std::endl;
	std::cin >> UserChoice; 

	//switch statement that calls different functions based off of user input
	switch (UserChoice) {

		//Addition
	case 1:
		Add();
		break;
		
		//Subtraction
	case 2:
		Sub();
		break;

		//Multiplication
	case 3:
		Mult();
		break;

		//Division
	case 4:
		Div();
		break;
	}

	system("pause");
}
