#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



int check_table[9]={0,0,0,0,0,0,0,0,0};
float results[9]={0,0,0,0,0,0,0,0,0};




//Functions
int generate_random_number(){//generates value to use
	
	int number;
	number = rand() % 9 + 1;
	//cout << number << endl;
	return number;
}

int generate_unique_number(){
	int number = generate_random_number();
	while(check_table[number - 1] == 1){
		number = generate_random_number();
	}
	
	check_table[number - 1] = 1;
	
	return number;
}


int clear_tables(){
	int i = 0;
	for(i=0; i !=9; i++){
		check_table[i] = 0;
		results[i] = 0;
	}
}

void check_tables(){
	int i; 
	
	for(i=0; i!=9; i++)
	{
		cout << results[i] << " ";
	}
	cout << endl;
	for(i=0; i!=9; i++)
	{
		cout << check_table[i] << " ";
	}	
	cout << endl;
}

int main(void)
{
	srand(time(0));

	int i;
	float stuff;
	
	for(i=0; i != 9; i++){
		results[i] = generate_unique_number();
	}
	
	//stuff = results[0] + 13.0 * results[1] / results[2] + results[3] + 12.0 - results[4] - results[5] - 11.0 + results[6] * results[7] / results[8] - 10.0;
	
	while(stuff != 66.0)
	{
		clear_tables();
		cout << stuff << " : fail" << endl;
		for(i=0; i != 9; i++){
			results[i] = generate_unique_number();
		}
		stuff = results[0] + (13.0 * results[1] / results[2]) + results[3] + (12.0 * results[4]) - results[5] - 11.0 + (results[6] * results[7] / results[8]) - 10.0;

	}	
	
	cout << stuff << ": success" << endl;
	
	cout << "A: " << results[0] << endl;
	cout << "B: " << results[1] << endl;
	cout << "C: " << results[2] << endl;
	cout << "D: " << results[3] << endl;
	cout << "E: " << results[4] << endl;
	cout << "F: " << results[5] << endl;
	cout << "G: " << results[6] << endl;
	cout << "H: " << results[7] << endl;
	cout << "I: " << results[8] << endl;

	
	
	
}