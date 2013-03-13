#include <iostream>
// math2GradeCalculator.cpp by Jesse Stewart 2012
// This program takes as an input the grades from the eight quizes, five tests, and one final from this class, outputting the final grade for this class using the equation (your_grade = 0.65(test_average) + 0.10(quiz_average) + 0.25(final_exam_grade)).
using namespace std;

int main() {
	double quiz[8], test[5], final_exam_grade = 0.0, your_grade = 0.0, test_average = 0.0, quiz_average = 0.0, score_holder = 0.0;
	int number_of_tests = 5, number_of_quizes = 8;
	
	// for loop to take the quiz scores from the user and enter them into an array.
	cout << "Please enter the grade you recieved for each of the quizes." << endl;
	for (int x = 1; x <= number_of_quizes; x++) {
		cout << x << ". ";
		cin >> quiz[x];
	}
	
	// for loop that adds up the scores from all of the quizes.
	for (int x = 1; x <= number_of_quizes-1; x++) {
		score_holder += quiz[x];
	}
	
	// equation that calculates the average from all of the quiz scores. each of the eight quizes are out of 25 points.
	quiz_average = score_holder / 200;
	
	// reset the value in score_holder to 0.0 in preperation for computing the net average.
	score_holder = 0.0;
	
	// for loop to take in the test scores from the user and enter them into an array.
	cout << "Please enter the grad you recieved for each of the tests." << endl;
	for (int y = 1; y <= number_of_tests; y++) {
		cout << y << ". ";
		cin >> test[y];
	}
	
	// for loop that adds up the scores from all of the tests.
	for (int y = 1; y <= number_of_tests-1; y++) {
		score_holder += test[y];
	}
	
	// equation that calculates the average from all of the test scores. each of the five tests are out of 100 pounts.
	test_average = score_holder / 500;
	
	cout << "Please enter your final exam grade: ";
	cin >> final_exam_grade;
	
	// equation that calculates the students final grade for the class.
	your_grade = ((0.65 * test_average) + (0.10 * quiz_average) + (0.25 * final_exam_grade));
	
	// code that prints out all of the grades you entered and that the program calculated.
	cout << "Your grades for Math 2" << "/nQuizes." << endl;
	for (int i = 1; i <= number_of_quizes; i++) {
		cout << i << ". " << quiz[i] << endl;
	}
	cout << "Quiz average: " << quiz_average << endl;
	for (int i = 1; i <= number_of_tests; i++) {
		cout << i << ". " << test[i] << endl;
	}
	cout << "Test average: " << test_average << "/nFinal exam grade: " << final_exam_grade << "/nFinal class grade: " << your_grade << "/nI hope that you have enjoyed this semester, and that you have learned something. Thank you for using this program." << endl;
	
	return 0;
}