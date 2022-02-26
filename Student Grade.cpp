#include <iostream>

using namespace std;

struct studentType
{
	string studentFirst;
	string studentLast;
	int testScore;
	char grade;
};


void input(studentType number[], int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << "Enter first name " << (i + 1) << ":  ";
		cin >> number[i].studentFirst;

		cout << "Enter last name " << (i + 1) << ":  ";
		cin >> number[i].studentLast;


	}
	
}

void grade(studentType number[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout << "Enter Score for " << number[i].studentFirst << " " << number[i].studentLast << ":";
		cin >> number[i].testScore;
		cout << endl;
		
	}
}

int findHighest(studentType number[], int size)
{
	int index = 0;
	double value = number[0].testScore;

	for (int i = 0; i < size; i++)
	{
		if (number[i].testScore > value)
		{
			value = number[i].testScore;
			index = i;
		}
	}

	return index;
}

void givingGrade(studentType number[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (number[i].testScore >= 90)
		{
			number[i].grade = 'A';
		}
		else if (number[i].testScore >= 80)
		{
			number[i].grade = 'B';
		}
		else if (number[i].testScore >= 70)
		{
			number[i].grade = 'C';
		}
		else if (number[i].testScore >= 60)
		{
			number[i].grade = 'D';
		} 
		else if (number[i].testScore >= 50)
		{
			number[i].grade = 'F';
		}
		else if(number[i].testScore >= 40)
		{
			number[i].grade = 'F';
		}
	}
}

void print(studentType number[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << number[i].studentFirst << " " << number[i].studentLast << " " << number[i].testScore << " " << number[i].grade << endl;
	}
}

int main()
{
	const int Num_things = 20;
	
	studentType things[Num_things];

	input(things, Num_things);

	findHighest(things, Num_things);
	
	grade(things, Num_things);

	givingGrade(things, Num_things);

	print(things, Num_things);


	int high = findHighest(things, Num_things);
	int score{};
	
	cout << " The highest letter grade was a " << things[high].grade << " and  " << things[score].studentFirst << " " << things[score].studentLast << " got it" << endl;

	cout << endl <<endl;
}
	

