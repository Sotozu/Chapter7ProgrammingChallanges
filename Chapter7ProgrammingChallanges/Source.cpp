#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include <time.h>
#include <cstdlib>
using namespace std;


/*
// 1. Largest/Smallest Array Values
int main() {
	const int SIZE = 10;
	int counter = 1;
	int max, min;
	int my_array[SIZE];

	cout << "Please enter "<< SIZE <<" integers.\n";

	for (int& val : my_array) {
		cout << "Value " << counter << ": ";
		cin >> val;
		counter++;
	}
	
	max = my_array[0];
	min = my_array[0];

	for (int val : my_array) {
		if (max < val) {
			max = val;
		}
		if (min > val) {
			min = val;
		}
	}

	cout << "The max is: " << max << endl;
	cout << "The min is: " << min << endl;

	return 0;
}
*/
/*
int main() {
	const int MONTHS = 12;
	double rainfall_amounts[MONTHS];

	double max, min, total = 0;
	int max_month, min_month; //index for month_name[MONTHS]
	double average;

	string month_name[MONTHS] = { "January", "February", "March", "April", "May", "June", "July", "August",
	"September", "October", "November", "Decemeber" };

	cout << "Please enter the rainfall for the following months.\n";

	for (int i = 0; i < MONTHS; i++) {
		do {
			cout << month_name[i] << " rainfall (inches): ";
			cin >> rainfall_amounts[i];

			if (rainfall_amounts[i] < 0) {
				cout << "ERROR: Please enter a positive number.\n";
			}

		} while (rainfall_amounts[i] < 0);

		total += rainfall_amounts[i];
	}

	max = rainfall_amounts[0];
	min = rainfall_amounts[0];

	max_month = 0;
	min_month = 0;

	for (int i = 1; i < MONTHS; i++) {
		if (max < rainfall_amounts[i]) {
			max = rainfall_amounts[i];
			max_month = i;
		}
		if (min > rainfall_amounts[i]) {
			min = rainfall_amounts[i];
			min_month = i;
		}
	}

	average = total / MONTHS;
	cout << setprecision(2) << showpoint << fixed;
	cout << "Total Rainfall: " << total << endl;
	cout << "Month with the least rainfall: "<< month_name[min_month] << " with " << min << " inches" <<endl;
	cout << "Month with the most rainfall: " << month_name[max_month] << " with " << max << " inches" << endl;
	cout << "Average rainfall: " << average << endl;

	return 0;

}
*/

/*
// 3. Chips and Salsa

int main() {
	const int SALSA = 5;
	string salsa_names[SALSA] = { "mild","medium", "sweet", "hot","zesty" };
	double salsa_sold[SALSA];
	int max_index, min_index;
	double salsa_max, salsa_min;

	cout << "Please enter the sales for each type of salsa:\n";

	for (int i = 0; i < SALSA; i++) {
		cout << "sales for " << salsa_names[i] << " salsa: $";
		cin >> salsa_sold[i];
	}

	salsa_max = salsa_sold[0];
	salsa_min = salsa_sold[0];

	for (int i = 1; i < SALSA; i++) {

		if (salsa_max < salsa_sold[i]) {
			salsa_max = salsa_sold[i];
			max_index = i;
		}

		if (salsa_min > salsa_sold[i]) {
			salsa_min = salsa_sold[i];
			min_index = i;
		}
	}

	cout << "\nSALSA SALES REPORT\n";

	for (int i = 0; i < SALSA; i++) {
		cout << salsa_names[i] << ": $" << salsa_sold[i] << endl;
	}
	cout << endl;
	cout << "Most sales were made by " << salsa_names[max_index] << " salsa with $" << salsa_max << " in sales.\n";
	cout << "Least sales were made by " << salsa_names[min_index] << " salsa with $" << salsa_min << " in sales.\n";

	return 0;
}
*/

/*
// 4. Larger Than n
void myArray(int[], int, int);
int main() {
	const int SIZE = 10;
	int num;
	int number[SIZE] = {1000, 200, 3000, 400, 5000 ,600, 7000, 800, 9000, 100};

	cout << "Please enter a number.\n";
	cout << "NUMBER: ";
	cin >> num;
	myArray(number, SIZE, num);

	return 0;
}

void myArray(int number[], int SIZE, int num) {
	for (int i = 0; i < SIZE; i++) {
		if (number[i] > num) {
			cout << number[i] << " is greater than " << num << endl ;
		}
	}
}
*/
/*
// 5. Monkey Business

int main() {
	const int MONKEY = 3, DAY = 5;

	int monkey_eat[MONKEY][DAY];

	int total_pounds = 0, total_days = 0;
	double average;

	int max_eat, max_monkey, max_day;
	int min_eat, min_monkey, min_day;

	string week_days[DAY] = { "Monday","Tuesday", "Wednesday","Thursday","Friday"};

	cout << "Enter the amount of food that each monkey eats for the day of the week.\n";

	for (int i = 0; i < MONKEY; i++) {
		cout << "Enter the food eaten by monkey " << i + 1 << " in pounds.\n";
		for (int j = 0; j < DAY; j++) {
			do {
				cout << week_days[j] << " (lbs): ";
				cin >> monkey_eat[i][j];
				if (monkey_eat[i][j] < 0) {
					cout << "ERROR: Please enter a positive integer.\n";
				}
			} while (monkey_eat[i][j] < 0);
			total_pounds += monkey_eat[i][j];
			total_days++;
		}
	}

	max_eat = monkey_eat[0][0];						//setting the value to the first in the index 
													//for comaparison in the following 'for-loop'
	min_eat = monkey_eat[0][0];

	for (int i = 0; i < MONKEY; i++) {
		for (int j = 0; j < DAY; j++) {
			if (max_eat < monkey_eat[i][j]) {
				max_eat = monkey_eat[i][j];						// will contain the most eaten
				max_monkey = i + 1;									// Will contain which monkey (1,2 or 3)
				max_day = j;									// Will contain the index for which day the max was eaten
			}
			if (min_eat > monkey_eat[i][j]) {
				min_eat = monkey_eat[i][j]; // will contain the most eaten
				min_monkey = i + 1; // Will contain which monkey (1,2 or 3)
				min_day = j; // Will contain the index for which day the min was eaten
			}
		}
	}
	average = static_cast<double>(total_pounds) / total_days; //one of these has to be cast to a double/float
															  //in order for it to be stored as a fraction.
	cout << showpoint << fixed << setprecision(2);
	cout << "The average eaten by all the monkeys (lbs): " << average << endl;
	cout << "The max eaten was by monkey " << max_monkey << " who ate " << max_eat << "(lbs) on " << week_days[min_day] << endl;
	cout << "The minimum eaten was by monkey " << min_monkey << " who ate " << min_eat << "(lbs) on " << week_days[min_day] << endl;
	return 0;
}
*/

/*
// 6. Rain or Shine

int main() {

	const int MONTHS = 3; //0 = June, 1 = July, 2 = August
	const int DAYS = 30;
	const int WEATHER_TYPE_TOTAL = 3;
	const int WEATHER_TYPE = 3;

	int monthly_sunny_total, monthly_rainy_total, monthly_cloudy_total;

	int total_sunny = 0, total_rainy = 0, total_cloudy = 0;

	char month_forecast[MONTHS][DAYS]; //3 Months, 30 days each month
	string month_names[MONTHS] = { "June", "July", "August" };
	string weather_type[WEATHER_TYPE] = { "sunny","rainy","cloudy" };
	int total_weather_types[MONTHS][WEATHER_TYPE_TOTAL]; //Will hold the total of each type of weather for each month
														// index [0][0] = total sunny days for june, index [1][1] = total rainy days for july, index [2][2] = total cloudy days for august

	ofstream outFile; //to write into files
	ifstream inFile; //to read from files

	inFile.open("month_data.txt");

	
		for (int i = 0; i < MONTHS; i++) {
			monthly_sunny_total = 0;
			monthly_cloudy_total = 0;
			monthly_rainy_total = 0;
			for (int j = 0; j < DAYS; j++) {

				inFile >> month_forecast[i][j]; //inserting a line from the file "month_data.txt" into the array month_forecast[][]

				if (month_forecast[i][j] == 'S'){
					monthly_sunny_total += 1;
					}
				if (month_forecast[i][j] == 'R') {
					monthly_rainy_total += 1;
				}
				if (month_forecast[i][j] == 'C') {
					monthly_cloudy_total += 1;
				}
			}
			total_weather_types[i][0] = monthly_sunny_total;
			total_weather_types[i][1] = monthly_rainy_total;
			total_weather_types[i][2] = monthly_cloudy_total;

			total_sunny += monthly_sunny_total;
			total_rainy += monthly_rainy_total;
			total_cloudy += monthly_cloudy_total;
		}

		inFile.close();
		
		for (int i = 0; i < MONTHS; i++) {
			cout << month_names[i] << " totals.\n";
			for (int j = 0; j < WEATHER_TYPE_TOTAL; j++) {
				cout << "Total "<< weather_type[j] <<" days: " << total_weather_types[i][j] << endl;
			}
			cout << endl;
		}

		cout << "TOTALS FOR THE THREE MONTHS\n";
		cout << "Sunny Days: " << total_sunny << endl;
		cout << "Rainy Days: " << total_rainy << endl;
		cout << "Cloudy Days: " << total_cloudy << endl;

		return 0;
}
*/
/*
// 7. Number Analysis Program
int main() {
	ofstream outFile;
	fstream inFile;
	string file_name;
	const int SIZE = 100;
	int my_array[SIZE];

	int lowest_num, largest_num, total, count = 0;
	double average;

	bool check = true;
	do {
		cout << "Please enter a file name.\n";
		cin >> file_name;
		outFile.open(file_name);
		if (outFile.is_open()) {
			cout << "File opened succesfully.\n";
			check = true;
		}
		else {
			cout << "ERROR: Please enter a valid file name.\n" << "(example: \"random_numbers.txt\")\n";
			check = false;
		}
	} while (check = false);

	srand(time(0));
	for (int i = 0; i < SIZE; i++) {
		outFile << rand() % 100 + 1 << endl;
	}

	outFile.close();

	inFile.open(file_name);
	for (int i = 0; i < SIZE; i++) {
		inFile >> my_array[i];
	}
	inFile.close();

	lowest_num = my_array[0];
	largest_num = my_array[0];
	total = my_array[0];
	for (int i = 1; i < SIZE; i++) {
		if (lowest_num > my_array[i]) {
			lowest_num = my_array[i];
		}
		if (largest_num < my_array[i]) {
			largest_num = my_array[i];
		}
		total += my_array[i];
		count++;
	}

	average = static_cast<double>(total) / count;
	cout << "Largest number: " << largest_num << endl;
	cout << "Smallest number: " << lowest_num << endl;
	cout << "Total of the numbers: " << total << endl;
	cout << showpoint << fixed << setprecision(2);
	cout << "Average of all numbers: " << average << endl;
	return 0;
}
*/
/*
// 8. Lo Shu Magic Square
bool numCheck(int); // checks if the number inputed is 1 - 9 and unique. will return false if not 1 - 9 or unique.

const int ROW = 3;
const int COLUMN = 3;
const int SIZE = 9;

int main() {
	int magic_square[ROW][COLUMN];
	bool check;

	cout << "Please enter the numbers for the Los Shu Magic Square.\n";

	for (int i = 0; i < ROW; i++) {
		cout << "Column (" << i + 1 << ") of the square.\n";
		for (int j = 0; j < COLUMN; j++) {
			do {
				check = true; // will reset to true for every re-entry;
				cout << "Row " << j + 1 << ": ";
				cin >> magic_square[i][j];
				check = numCheck(magic_square[i][j]); //will return true if the number in magic_sqaure[i][j] is
				                                      //between 1 - 9 and has not been entered before

			} while (check != true);
		}
		cout << endl;
	}


	for (int i = 0; i < ROW; i++) { // Will determine if every column equals 15
		int sum = 0;
		for (int j = 0; j < COLUMN; j++) {
			sum += magic_square[i][j];
		}
		if (sum != 15) {
			cout << "This is NOT a Lo Shu Magic Square.\n";
			return 0; // ends the program
		}
	}

	for (int j = 0; j < COLUMN; j++) { //will determine if every row equals 15;
		int sum = 0;
		for (int i = 0; i < ROW; i++) {
			sum += magic_square[i][j];
		}
		if (sum != 15) {
			cout << "This is NOT a Lo Shu Magic Square.\n";
			return 0; // ends the program
		}
	}

	cout << "This is a Lo Shu Magic Square!\n";
	return 0;
}

bool numCheck(int num) {
	static vector<int> array_check; // will store one value at a time 1 - 9 and be checked to make sure that it's not entered twice.
	static int process_sentinal; //static variables are automatically assigned 0;
	if (num < 1 || num > 9) { //The number is not between 1 and 9
		cout << "Error: The number is either less than 1 or greater than 9.\n";
		return false;
	}
	// At this point the number is confirmed to between 1 and 9
	// The first time this is ran the number has to be inputed into the vector without runnnig a check;

	if (process_sentinal == 0) { //will run the first time. only once.
		array_check.push_back(num);// adds the number to the vecotor;
		process_sentinal++;
		return true;
	}

	if (process_sentinal > 0) { // will run after the function is called the first time. 

		for (int i = 0; i < array_check.size(); i++) {

			if (num == array_check[i]) {
				cout << "ERROR: The number is already in the square.\n";
				return false; // this number has already been used
			}
		}
		array_check.push_back(num);// This number has not been used. added to the vector.
	}
	return true;
}
*/
/*
// 9. Payroll
int main() {

	const int SIZE = 7;

	long int empID[SIZE] = { 5658845,  4520125,  7895122,  8777541, 8451277,  1302850, 7580489 };
	int hours[SIZE];
	double payRate[SIZE];
	double wages[SIZE];

	int hours_worked;
	int pay_rate;

	cout << "Please enter the following employee information.\n";

	for (int i = 0; i < SIZE; i++) {
		cout << "Employee: " << i + 1 << endl;
		do {
			cout << "Hours Worked: ";
			cin >> hours_worked;
			if (hours < 0) {
				cout << "ERROR: Please enter hours greater than 0.\n";
			}
		} while (hours < 0);

		do {
			cout << "Wage An Hour: $";
			cin >> pay_rate;
			if (pay_rate < 15.00) {
				cout << "ERROR: Please enter a payrate that's $15.00 minimum.\n";
			}
		} while (pay_rate < 15.00);
		hours[i] = hours_worked;
		payRate[i] = pay_rate;

		wages[i] = static_cast<double>(hours_worked)* pay_rate;

	}

	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "EMPLOYEE " << i + 1 << " INFORMATION.\n";
		cout << "empID: " << empID[i] << endl;
		cout << showpoint << fixed << setprecision(2);
		cout << "Gross Wage: $" << wages[i] << endl << endl;

	}
	return 0;
}
*/

/*
// 10. Drivers License ExaM
bool answerCheck(char);
int main() {
	const int SIZE = 20;
	char student_choice;
	bool check;
	vector<int> incorrect_answer_index;
	vector<int> correct_answer_index;
	int total_correct = 0, total_incorrect = 0;
	char answer[SIZE] = { 'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A',
	'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B' };

	cout << "Please enter the students 20 answers on the test.\n";
	cout << "The possible answers are 'A', 'B', 'C' and 'D'.\n";

	for (int i = 0; i < SIZE; i++) {
		do {
			check = true;
			cout << "Student answer " << i + 1 << ": ";
			cin >> student_choice;
			check = answerCheck(student_choice);
		} while (check != true);

		if (student_choice == answer[i]) {
			correct_answer_index.push_back(i);
		}
		else {
			incorrect_answer_index.push_back(i);
		}
	}

	cout << endl;
	cout << "Total Correctly Answered: " << correct_answer_index.size()<< endl;
	cout << "Total Incorrectly Answered: " << incorrect_answer_index.size() << endl << endl;
	if (correct_answer_index.size() > 15) {
		cout << "PASSED THE EXAM!\n";
	}
	else {
		cout << "FAILED THE EXAM!\n";
	}

	for (int i = 0; i < incorrect_answer_index.size(); i++) {
		cout << "Problem " << incorrect_answer_index[i]+1 << " missed.\n";
	}
	return 0;
}
bool answerCheck(char student_choice) {

	switch (student_choice) {
	case 'A':
		return true;
	case 'B':
		return true;
	case 'C':
		return true;
	case 'D':
		return true;
	default:
		cout << "Please enter a valid choice.\n";
		return false;
	}
}
*/
/*
// 11. Exam Grader
int main() {
	const int SIZE = 20;

	double percent;

	char correct_answers[SIZE];
	char student_answers[SIZE];

	vector<char> correct_answer_index;
	vector<char> incorrect_answer_index;

	ifstream inFile; //reading in from a file

	inFile.open("CorrectAnswers.txt");
	if (!inFile.is_open()) { //If the file fails to open then then execute this failure function
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < SIZE; i++) {
		inFile >> correct_answers[i];
	}
	inFile.close();

	inFile.open("StudentAnswers.txt");
	if (!inFile.is_open()) {
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < SIZE; i++) {
		inFile >> student_answers[i];
	}
	inFile.close();
	
	for (int i = 0; i < SIZE; i++) {
		if (correct_answers[i] == student_answers[i]) {
			correct_answer_index.push_back(i); // will hold the index of the problem correctly answered
		}
		if (correct_answers[i] != student_answers[i]) {
			incorrect_answer_index.push_back(i); // will hold the index of the problem incorrectly answered
		}
	}

	cout << "QUESTIONS MISSED\n";
	for (int i = 0; i < incorrect_answer_index.size(); i++) { 
		cout << "Missed problem " << incorrect_answer_index[i] + 1 << endl;
		cout << "Student answered: " << student_answers[incorrect_answer_index[i]] << "'" << endl;
		cout << "Correct answer: '"<< correct_answers[incorrect_answer_index[i]] << "'" << endl;
		cout << endl;
	}

	cout << "TOTAL QUESTIONS MISSED: " << incorrect_answer_index.size() << endl;

	percent = (static_cast<double>(correct_answer_index.size())/ SIZE)*100;
	cout << showpoint << fixed << setprecision(2);
	cout << "PERCENT OF QUESTIONS ANSWERED CORRECTLY: " << percent << "%\n";

	if (percent > 70.00) {
		cout << "STUDENT PASSED THE EXAM!\n";
	}
	else {
		cout << "STUDENT FAILED THE EXAM!\n";
	}

	return 0;
}
*/
/*
// 12. Grade Book
const int SIZE = 5;
const int TEST = 4;

double averageGrade(const double[][TEST], int);
char letterGrade(const double[], int SIZE);


int main() {
	

	string student_name[SIZE];
	char letter_grade[SIZE];
	double test_grades[SIZE][TEST];
	double student_average[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter student " << i + 1 << " name." << endl;
		getline(cin, student_name[i]);
		
		cout << "Enter " << student_name[i] << "'s test grades (out of 100).\n";
		for (int j = 0; j < TEST; j++) {
			do {
				cout << "Grade " << j + 1 << " : ";
				cin >> test_grades[i][j]; //user enters the test grade
				if (test_grades[i][j] < 0 || test_grades[i][j] > 100) { //checks to see if input is valid
					cout << "ERROR: Please enter a value less than 100 or greater than 0.\n";
				}
			} while (test_grades[i][j] < 0 || test_grades[i][j] > 100);

			cin.get(); // for some reason in the stream there is a null space at the end.
					   // review getline/string/stream to figure this out. for now this is a solution.
		}
		cout << endl;

		student_average[i] = averageGrade(test_grades, SIZE); // gives the average grade for the student
		letter_grade[i] = letterGrade(student_average, SIZE); 
	}
	cout << showpoint << fixed << setprecision(2);
	for (int i = 0; i < SIZE; i++) {
		cout << student_name[i] << endl;
		cout << "Average: " << student_average[i] << endl;
		cout << "Letter Grade: " << letter_grade[i] << endl;
		cout << endl;
	}
	
	return 0;
}

double averageGrade(const double test_grades[][TEST], int SIZE) {
	static int counter; //initialized to 0 when it's a static variable
	double sum = 0;
	double average;
	for (int i = 0; i < TEST; i++) {
		sum += test_grades[counter][i]; //will begin with counter = 0. This is the first student
	}
	counter++; // will have the next student average be calculate when this function is called again
	average = sum / TEST;
	return average;
}

char letterGrade(const double average[], int SIZE) {
	static int counter;
	char letter_grade;

	if (average[counter] >= 90 && average[counter] <= 100) {
		letter_grade = 'A';
	}
	else if (average[counter] >= 80 && average[counter] < 90) {
		letter_grade = 'B';
	}
	else if (average[counter] >= 70 && average[counter] < 80) {
		letter_grade = 'C';
	}
	else if (average[counter] >= 60 && average[counter] < 70) {
		letter_grade = 'D';
	}
	else if (average[counter] < 60) {
		letter_grade = 'F';
	}
	counter++; // will have the next student average be calculate when this function is called again
	return letter_grade; 
}
*/
/*
// 13. Grade Book Modification
const int SIZE = 5;
const int TEST = 4;

double averageGrade(const double[][TEST]);
char letterGrade(const double[]);

int smallestValueIndex(const double[][TEST]);

int main() {


	string student_name[SIZE];
	char letter_grade[SIZE];
	double test_grades[SIZE][TEST];
	double student_average[SIZE];
	int smallest_value_index;
	

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter student " << i + 1 << " name." << endl;
		getline(cin, student_name[i]);

		cout << "Enter " << student_name[i] << "'s test grades (out of 100).\n";
		for (int j = 0; j < TEST; j++) {
			do {
				cout << "Grade " << j + 1 << " : ";
				cin >> test_grades[i][j]; //user enters the test grade
				if (test_grades[i][j] < 0 || test_grades[i][j] > 100) { //checks to see if input is valid
					cout << "ERROR: Please enter a value less than 100 or greater than 0.\n";
				}
			} while (test_grades[i][j] < 0 || test_grades[i][j] > 100);

			cin.get(); // for some reason in the stream there is a null space at the end.
					   // review getline/string/stream to figure this out. for now this is a solution.
		}
		cout << endl;
		
		smallest_value_index = smallestValueIndex(test_grades); // Will hold the index for the smallest value in the students test grade array

		test_grades[i][smallest_value_index];

		student_average[i] = averageGrade(test_grades); // gives the average grade for the student

		letter_grade[i] = letterGrade(student_average);
	}

	cout << showpoint << fixed << setprecision(2);
	for (int i = 0; i < SIZE; i++) {
		cout << student_name[i] << endl;
		cout << "Average: " << student_average[i] << endl;
		cout << "Letter Grade: " << letter_grade[i] << endl;
		cout << endl;
	}

	return 0;
}

double averageGrade(const double test_grades[][TEST]) {
	static int counter; //initialized to 0 when it's a static variable
	double sum = 0;
	double average;

	for (int i = 0; i < TEST; i++) {
		sum += test_grades[counter][i]; //will begin with counter = 0. This is the first student
	}

	counter++; // will have the next student average be calculate when this function is called again
	average = sum / 3;
	return average;
}

char letterGrade(const double average[]) {
	static int counter;
	char letter_grade;

	if (average[counter] >= 90 && average[counter] <= 100) {
		letter_grade = 'A';
	}
	else if (average[counter] >= 80 && average[counter] < 90) {
		letter_grade = 'B';
	}
	else if (average[counter] >= 70 && average[counter] < 80) {
		letter_grade = 'C';
	}
	else if (average[counter] >= 60 && average[counter] < 70) {
		letter_grade = 'D';
	}
	else if (average[counter] < 60) {
		letter_grade = 'F';
	}
	counter++; // will have the next student average be calculate when this function is called again
	return letter_grade;
}

int smallestValueIndex(const double test_grades[][TEST]) {
	static int counter = 0;

	double smallest_value = test_grades[counter][0];
	int smallest_value_index = 0;

	for (int i = 1; i < TEST; i++) {
		if (smallest_value > test_grades[counter][i]) {
			smallest_value = test_grades[counter][i];
			smallest_value_index = i;
		}
	}
	counter++;
		return smallest_value_index;
}
*/
/*
// 14. Lottery Applicant

int main() {
	const int SIZE = 5;

	int rand_num;
	int user_num;
	int counter = 0;

	int lotter_array[SIZE];
	int user_array[SIZE];
	int matching_digits[SIZE];

	srand(time(0));

	for (int i = 0; i < SIZE; i++) {
		rand_num = rand() % 9 + 1;
		lotter_array[i] = rand_num;
	}

	cout << "Please enter a number 1 - 9.,\n";

	for (int i = 0; i < SIZE; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> user_array[i];
	}

	for (int i = 0; i < SIZE; i++) {
		if (lotter_array[i] == user_array[i]) {
			counter++;
			matching_digits[i] = user_array[i]; // Will store the matching value;
		}
		else {
			matching_digits[i] = 0;
		}
	}

	cout << counter << " matched.\n";
	cout << setw(20) << left << "LOTTERY ARRAY: ";
	for (int i = 0; i < SIZE; i++) {
		cout << lotter_array[i];
	}
	cout << endl;
	cout << setw(20) << left << "MATCHING NUMBERS: ";

	for (int i = 0; i < SIZE; i++) {
		if (matching_digits[i] == 0) {
			cout << " ";
		}
		else {
			cout << matching_digits[i];
		}
	}
}
*/
/*
// 15. vecotr Modification

// This program is a driver that tests a function comparing the
// contents of two int arrays
// Function Prototype 
bool testPIN(vector<int>, vector<int>, int);
int main() {

	const int NUM_DIGITS = 7;						// Number of digits in a PIN 
	vector<int> pin1 { 2, 4, 1, 8, 7, 9, 0 };		// Base set of values. 
	vector<int> pin2 { 2, 4, 6, 8, 7, 9, 0 };		// Only 1 element is 
													// different from pin1. 
	vector<int> pin3 { 1, 2, 3, 4, 5, 6, 7 };		// All elements are 
													// different from pin1. 

	if (testPIN(pin1, pin2, NUM_DIGITS)) {			//this should not occur
		cout << "ERROR: pin1 and pin2 report to be the same.\n";
	}
	else {
		cout << "SUCCESS: pin1 and pin2 are different.\n";
	}

	if (testPIN(pin1, pin3, NUM_DIGITS)) {
		cout << "ERROR: pin1 and pin3 report to be the same.\n";
	}
	else {
		cout << "SUCCESS: pin1 and pin3 are different.\n";
	}

	if (testPIN(pin1, pin1, NUM_DIGITS)) {
		cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
	}
	else {
		cout << "ERROR: pin1 and pin1 report to be different.\n";
	}
	return 0;
}

//****************************************************************** 
// The following function accepts two int arrays. The arrays are  * 
// compared. If they contain the same values, true is returned.   * 
// If they contain different values, false is returned.          * 
//****************************************************************** 

bool testPIN(vector<int> custPIN, vector<int> databasePIN, int size)
{
	for (int index = 0; index < size; index++)
	{
		if (custPIN[index] != databasePIN[index])
			return false; // We've found two different values. 
	}
	return true; // If we make it this far, the values are the same. 
}
*/

// 16. World Series Champions

/*DON"T HAVE ACCESS TO THE SOURCE CODE*/

// 17. Name Search

/*DON'T HAVE ACCESS TO THE SOURCE CODE*/

/*
// 18. Tic-Tac-Toe Game
const int ROW = 3;
const int COL = 3;
// Checks if the players choices are the values 1, 2 or 3
void validateInput(int& player_row, int& player_col);
// Displays the board
void showBoard(const char game_array[][COL], int ROW);
// Checks for winning conditions
bool checkWin(const char game_array[][COL], int ROW, char player);
// Checks if the position on the board has input in it already
void choiceOverlapCheck(const char game_array[][COL], int& player_row, int& player_col, int ROW);

int main() {

	int player_row, player_col;
	bool game_complete = false;
	char player1 = 'X', player2 = 'O', winner;
	
	int max_moves = 0; // when this iterated to 9 the game is over 

	char game_array[COL][ROW] = { { '*','*','*' },
								{ '*', '*', '*' },
								{ '*', '*', '*' } };

	showBoard(game_array, ROW); 
	
	cout << "Player one will be 'X'. Player two will be 'O'.\n";
	cout << "Player will select the row and column to place their 'X'/'O'.\n";

	do { // will go on untill 9 moves are made, which ends the game.
		 // if a win is determined.
		if (game_complete == true) {
			break;
		}
		if (max_moves == 9) {
			break;
		}
		for (int i = 1; i < 3; i++) {
			cout << "PLAYER " << i  << endl;
			//Will check and confirm if player inputs are acceptable
			validateInput(player_row, player_col);
			//Will check if the position of the board chosen already has input. Will fix 
			choiceOverlapCheck(game_array, player_row, player_col, ROW);

			if (i == 1) {
				game_array[player_row][player_col] = player1;
				game_complete = checkWin(game_array, ROW, player1);
				winner = player1;

			}
			else if (i == 2) {
				game_array[player_row][player_col] = player2;
				game_complete = checkWin(game_array, ROW, player2);
				winner = player2;
			}

			if (game_complete == true) {//if win condition has been met then break the loop and proceed.
				break;
			}

			max_moves++;
			if (max_moves == 9) {// the maximum amount of moves have been played out. break and proceed.
				break;
			}

			showBoard(game_array, ROW);
			cout << endl;
		}
	} while (game_complete != true || max_moves != 9);

	cout << "Player '" << winner << "' is the winner!\n";
	cout << endl;
	showBoard(game_array, ROW);
	cout << endl;

	return 0;
}


void showBoard(const char game_array[][COL], int ROW) {

	for (int i = 0; i < COL; i++) {
		for (int j = 0; j < ROW; j++) {
			cout << game_array[i][j];
		}
		cout << endl;
	}
}

bool checkWin(const char game_array[][COL], int ROW, char player) {
	int win_count = 0; //if this becomes 3 then we have a win
	char checking_type = player;// will be either 'X' or 'O'	

	for (int i = 0; i < ROW; i++) { // checking rows for a win
		for (int j = 0; j < COL; j++) {
			if (game_array[i][j] == checking_type) {
				win_count++;
			}
		}
		if (win_count == 3) {

			return true;
		}
		win_count = 0; //reset the count back to 0
	}

	

	for (int j = 0; j < ROW; j++) { // checking columns for a win
		for (int i = 0; i < COL; i++) {
			if (game_array[i][j] == checking_type) {
				win_count++;
			}
		}
		if (win_count == 3) {

			return true;
		}
		win_count = 0; //reset the count back to 0
	}

	if (game_array[0][0] == checking_type) { //checks left to right for a cross win
		if (game_array[1][1] == checking_type) {
			if (game_array[2][2] == checking_type) {
				return true;
			}
		}
	}

	if (game_array[0][2] == checking_type) { //checks right to left for a cross win
		if (game_array[1][1] == checking_type) {
			if (game_array[2][0] == checking_type) {
				return true;
			}
		}
	}

	return false;
}


void choiceOverlapCheck(const char game_array[][COL], int& player_row, int& player_col, int ROW) {
	while (game_array[player_row][player_col] != '*') {
		
		cout << "ERROR: The position is already occupied by an 'X'/'O'.\n";
		cout << "Please choose another position.\n";
		validateInput(player_row, player_col);
	}
}

void validateInput(int& player_row, int& player_col) {
	
	cout << "Enter Row: ";
	cin >> player_row;
	while (player_row < 1 || player_row > 3) {
		cout << "ERROR: Please enter a row with a value of 1 - 3.\n";
		cout << "Enter Row: ";
		cin >> player_row;
	}
	cout << "Enter Column: ";
	cin >> player_col;
	while (player_col < 1 || player_col > 3) {
		cout << "ERROR: Please enter a column with a value of 1 - 3.\n";
		cout << "Enter Column: ";
		cin >> player_col;
	}

	// The first row is actually in position 0.
	// when the player choose 1 it should indicate position 0. 
	// Thats why we subtract 1 to get it to position 0.
	// This is for the player expectations of choosing the "first" column/row.
	player_row -= 1;
	player_col -= 1;
}
*/
/*
// 19. 2D Array Operations

const int COL = 3;
const int ROW = 3;

double getTotal(double my_2D_array[][COL], int ROW);
double getAverage(double my_2D_array[][COL], int ROW);
double getRowTotal(double my_2D_array[][COL], int);
double getColumnTotal(double my_2D_array[][COL], int);
double getHighestInRow(double my_2D_array[][COL], int);
double getHighestInColumn(double my_2D_array[][COL], int);
double getLowestInRow(double my_2D_array[][COL], int);

int main() {
	double total, 
		average, 
		row_total, 
		col_total, 
		highest_in_row, 
		highest_in_col, 
		lowest_in_row;

	int width = 20;

	double my_2D_array[ROW][COL] = { {1,2,3},{4,5,6,},{7,8,9} };

	total = getTotal(my_2D_array, ROW);
	cout << setw(20) << left << "TOTAL OF 2D ARRAY: " << total << endl;

	average = getAverage(my_2D_array, ROW);
	cout << setw(20) << left << "AVERAGE OF 2D ARRAY: " << average << endl;

	cout << endl;
	for (int i = 0; i < ROW; i++) {
		row_total = getRowTotal(my_2D_array, i);
		cout << "ROW " << i << " TOTAL: " << row_total << endl;
	}

	cout << endl;
	for (int j = 0; j < COL; j++) {
		col_total = getColumnTotal(my_2D_array, j);
		cout << "COLUMN " << j << " TOTAL: " << col_total << endl;
	}

	cout << endl;
	for (int i = 0; i < ROW; i++) {
		highest_in_row = getHighestInRow(my_2D_array, i);
		cout << "HIGHEST IN ROW " << i <<  ": " << highest_in_row << endl;
	}

	cout << endl;
	for (int i = 0; i < ROW; i++) {
		highest_in_col = getHighestInColumn(my_2D_array, i);
		cout << "HIGHEST IN COLUMN " << i << ": " << highest_in_col << endl;
	}
	cout << endl;
	for (int i = 0; i < ROW; i++) {
		lowest_in_row = getLowestInRow(my_2D_array, i);
		cout << "LOWEST IN ROW " << i << ": " << lowest_in_row << endl;
	}
	return 0;
}
double getTotal(double my_2D_array[][COL], int ROW) {
	double total = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			total += my_2D_array[i][j];
		}
	}
	return total;
}
double getAverage(double my_2D_array[][COL], int ROW) {
	double total = 0;
	double average;
	int number_of_values = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			total += my_2D_array[i][j];
			number_of_values++;
		}
	}
	average = total / number_of_values;
	return average;
}
double getRowTotal(double my_2D_array[][COL], int i) {
	double row_total = 0;

	for (int j = 0; j < COL; j++) {
		row_total += my_2D_array[i][j];
	}
	
	return row_total;
}

double getColumnTotal(double my_2D_array[][COL], int j) {
	double col_total = 0;

	for (int i = 0; i < ROW; i++) {
		col_total += my_2D_array[i][j];
	}

	return col_total;
}
double getHighestInRow(double my_2D_array[][COL], int i) {
	double highest_in_row = my_2D_array[i][0];

	for (int j = 1; j < COL; j++) {
		if (highest_in_row < my_2D_array[i][j]) {
			highest_in_row = my_2D_array[i][j];
		}
	}

	return highest_in_row;
}
double getHighestInColumn(double my_2D_array[][COL], int j) {
	double highest_in_col = my_2D_array[0][j];

	for (int i = 0; i < ROW; i++) {
		if (highest_in_col < my_2D_array[i][j]) {
			highest_in_col = my_2D_array[i][j];
		}
	}
	return highest_in_col;
}

double getLowestInRow(double my_2D_array[][COL], int i) {
	double lowest_in_row = my_2D_array[i][0];

	for (int j = 1; j < COL; j++) {
		if (lowest_in_row > my_2D_array[i][j]) {
			lowest_in_row = my_2D_array[i][j];
		}
	}

	return lowest_in_row;
}
*/
/*
// 20. Theater Seating
const int ROWS = 15;
const int SEATS = 30;

void showTheater(const char theater[][SEATS], int ROWS);
bool askToExit();
int checkIfRowFull(const char theater[][SEATS]);
int checkIfSeatFull(const char theater[][SEATS], int row_num);
int seatsLeftInRow(const char theater[][SEATS], int row_num);
void  showSalesReport(const double row_prices[], const int tickets_sold_per_row[], int ROWS);
void showTicketReport(const char theater[][SEATS], int ROWS);

int main() {
	ifstream inFile;
	char theater[ROWS][SEATS]; //theater[15][30];
	double row_price[ROWS];
	int tickets_sold_per_row[ROWS] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, };
	bool done = false;
	bool row_full;
	int row_num, seat_num;
	double total;
	double row_cost;
	int number_purchased;
	int seats_left;
	int sales_grand_total;
	int total_tickets_sold = 0;
	
	//input the '#' character into the theater array.
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < SEATS; j++) {
			theater[i][j] = '#';
		}
	}

	// Will input the row prices from a file into an array called "row_prices"
	inFile.open("rowprices.txt");

	for (int i = 0; i < ROWS; i++) {
		inFile >> row_price[i];
	}
	inFile.close();

	do {
		showTheater(theater, ROWS);

		row_num = checkIfRowFull(theater); //Will return a valid row number;

		row_cost = row_price[row_num];
		cout << endl;

		do {
			seats_left = seatsLeftInRow(theater, row_num);
			cout << "There are " << seats_left << " seats in the row.\n";
			cout << "How many would you like to purchase?\n";
			do {
				cout << "NUMBER TO PURCHASE: ";
				cin >> number_purchased;
				if (number_purchased > seats_left) {
					cout << endl;
					cout << "ERROR: There are less seats than what you are wanting to purchase.\n";
					cout << "seats avaialable: " << seats_left << endl;
				}
			} while (number_purchased > seats_left);
			for (int i = 0; i < number_purchased; i++) {
				seat_num = checkIfSeatFull(theater, row_num); //Will return a valid seat number;
				theater[row_num][seat_num] = '*'; // Sets the position in the array as sold
				tickets_sold_per_row[row_num]++; //counts how many tickets were sold per row;
				total_tickets_sold += number_purchased;
			}
			showTheater(theater, ROWS);
			cout << "\nContinue purchasing seats in row " << row_num + 1<< "?\n";
			done = askToExit();
		} while (done == true);

		cout << endl;

		cout << "Show Sales Report?\n";
		done = askToExit();
		if (done == true) {
			showSalesReport(row_price, tickets_sold_per_row, ROWS);
		}
		cout << "Show Ticket Report?\n";
		done = askToExit();
		if (done == true) {
			showTicketReport(theater, ROWS);
		}
		

		cout << "\nExit the Program?\n";
		done = askToExit();
	} while (done == false);

	return 0;
}

void showTheater(char const theater[][SEATS], int ROWS) {
	int width = 3;
	cout << "         ";
	for (int i = 0; i < 30; i++) {
			cout << setw(width) << left << i + 1; 
	}
	cout << endl;
	for (int i = 0; i < ROWS; i++) { //iterate 15 times
		cout << "ROW " << setw(width) << left << i + 1 << ": ";
		for (int j = 0; j < SEATS; j++) { // iterate 30 times
			cout << setw(width) << left << theater[i][j];
		}
		cout << endl;
	}
}

bool askToExit() {

	int ask_to_end;
	cout << "Enter '0' YES.\n";
	cout << "Enter '1' NO\n";
	do {
		cout << "ENTER OPTION: ";
		cin >> ask_to_end;
	} while (ask_to_end != 1 && ask_to_end != 0);
	if (ask_to_end == 1) {
		return false;
	}
	else {
		return true;
	}
}

int checkIfRowFull(const char theater[][SEATS]) {

	int row_num;
	bool row_full;
	cout << "Please enter which row you would like to purchase a ticket from.\n";
	do {
		row_full = true;
		cout << "ENTER ROW: ";
		cin >> row_num;
		row_num--;
		for (int j = 0; j < SEATS; j++) {
			if (theater[row_num][j] == '#') {
				row_full = false;
			}
		}
		if (row_full == true) {
			cout << "ERROR: ROW FULL. Please enter another row.\n";
		}
	} while (row_full == true);
	return row_num;
} 

int checkIfSeatFull(const char theater[][SEATS], int row_num) {
	int seat_num;
	bool seat_full;
 
	do {
		seat_full = false;
		do {
			cout << "Enter the seat number you would like to purchase.\n";
			cout << "SEAT NUMBER: ";
			cin >> seat_num;
			if (seat_num < 1 || seat_num > 30) {
				cout << endl;
				cout << "ERROR: That seat does not exist.\n";
				cout << "Seat numbers 1-30.\n";
				cout << "Please enter a valid seat number.\n";
				cout << endl;
			}
		} while (seat_num < 1 || seat_num > 30);
		seat_num--; //seat_num index will be one less than what the user will enter
		if (theater[row_num][seat_num] != '#') {
			cout << endl;
			cout << "ERROR: SEAT TAKEN. Please enter another seat number.\n";
			seat_full = true;
		}
	} while (seat_full == true);

	return seat_num;
}

int seatsLeftInRow(const char theater[][SEATS], int row_num) {
	int count = 0;
	for (int j = 0; j < SEATS; j++) {
		if (theater[row_num][j] == '#') {
			count++;
		}
	}
	return count;
}

void  showSalesReport(const double row_prices[], const int tickets_sold_per_row[], int ROWS) {
	int width1 = 15;
	double total = 0;;
	cout << setw(width1) << left << "ROW NUMBER" << setw(width1) << left <<"ROW PRICE ($)" << setw(width1) << left << "TICKETS SOLD" << setw(width1) << left << "ROW SALES ($)" << endl;
	for (int i = 0; i < ROWS; i++) {
		cout << setw(width1) << left << i + 1 << setw(width1) << left << row_prices[i] << setw(width1) << left << tickets_sold_per_row[i] << setw(width1) << left << row_prices[i] * tickets_sold_per_row[i] << endl;
		total += (row_prices[i] * tickets_sold_per_row[i]);
	}
	cout << "\nGRAND TOTAL SALES: $" << total << endl;
}

void showTicketReport(const char theater[][SEATS], int ROWS) {
	
	int total_empty_seats = 0;
	int total_purchased_seats = 0;
	int seats_available_per_row[15];

	for (int i = 0; i < ROWS; i++) {
		int available_in_row_total = 0;
		for (int j = 0; j < SEATS; j++) {
			if (theater[i][j] == '#') {
				total_empty_seats++;
				available_in_row_total++;
			}
			if (theater[i][j] == '*') {
				total_purchased_seats++;
			}
		}
		seats_available_per_row[i] = available_in_row_total;
	}

	cout << "\nTOTAL SEATS SOLD: " << total_purchased_seats << endl;
	cout << "TOTAL SEATS AVAILABLE PER ROW:\n";
	cout << setw(10) << left << "ROWS" << setw(10) << left << "AVAILABLE" << endl;

	for (int i = 0; i < ROWS; i++) {
		cout << setw(10) << left << i + 1 << setw(10) << left << seats_available_per_row[i]<< endl;
	}
	cout << "TOTAL SEATS AVAIALBLE IN AUDITORIUM: " << total_empty_seats << endl;
}
*/


