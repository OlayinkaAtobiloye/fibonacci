using namespace std;
#include <iostream>

int Get_No(){
	int number; // declare the number of terms
	cout << "How many numbers do you want to generate in the Fibonacci sequence?: ";
	cin >> number; // gets the input from user and assign to number
	return number;
}

void Generate_Array(int *number){
	int last_num = 0; // last two term in the sequence
	int present_num = 1; // last term in the sequence
	if (*number == 1){ 
		cout << last_num << '\t';
	}
	else if(*number == 2){
		cout << last_num << '\t' << present_num << '\t';
	}
	else{
	cout << last_num << '\t' << present_num << '\t';
	for (int i=0; i<(*number - 2); i++){
		int new_num = last_num + present_num;
		cout << new_num << '\t';
		last_num = present_num;
		present_num = new_num;
	}
	}
	
}
int main(){
	char decision = 'y';
	cout << "Welcome to Yinka's Fibonnaci sequence Generator." << endl;
	do{
		int number = Get_No();
		Generate_Array(&number);
		cout << endl << "Do you wish to generate a new sequence? Enter Y or y for yes: ";
		cin >> decision;
	}
	while (decision == 'y' || decision == 'Y');
	cout << "Thank you for using this generator. Bye!" << '\n';
	
}