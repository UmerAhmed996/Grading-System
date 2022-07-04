#include<iostream>
using namespace std;

int main()
{
	const int size = 100;
	int Roll_No[size] = {25,66,45};
	float Midterm_Marks[size] = {10.5,36,8};
	float Final_Marks[size] = { 55,75.5,55};
	int Class[size] = {6,6,7};
	char Grades[size] = {'D','B','D'};
	int select = 0, counter = 3, flag = 1, flag1 = 0, main_select = 0, flag3 = 0;
	float marks = 0, temp = 0; char get_grade = 0; int mid_flag = 1; int final_flag = 1;
	
	cout << "---------------------------------------------------------" << endl;

	cout << "                   SCHOOL GARDING SYSTEM" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << endl;
	while (flag == 1)
	{
		cout << "                          MENU" << endl;
		cout << "---------------------------------------------------------" << endl;
		cout << endl;
		cout << "Press 1 to show all student data" << endl;
		cout << "Press 2 to enroll student information " << endl;
		cout << "Press 3 to delete student entry" << endl;
		cout << "Press 4 to show full menu" << endl;
		cout << "Press 0 to exit" << endl;
		cout << "Please enter your choice: ";
		cin >> select;
		cout << endl;

		if (select == 1)
		{
			// Show the existing information to the user
			for (int i = 0; i < counter; i++)
			{
				cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
					<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
					<< "Grade: " << Grades[i] << endl;
			}
		}

		else if (select == 2)                                   // adding new students
		{
			cout << "Kindly input the student details: \n";
		    flag3 = 1;
			while (flag3 == 1)
			{
				flag3 = 0;
				cout << "Please enter student roll no: " << endl;
				cin >> temp;
				for (int i = 0; i < counter; i++)
				{
					if (Roll_No[i] == temp)
					{
						flag3 = 1;
					}
				}
				if (flag3 == 1)
				{
					cout << "Roll no. already exist" << endl;
				}
				else
				{
					flag3 = 0;
				}
			}
				Roll_No[counter] = temp;
				cout << "Please enter student mid term marks: " << endl;
				cin >> temp;
				while (mid_flag == 1)
				{
					if (temp <= 50)
					{
						Midterm_Marks[counter] = temp;
						mid_flag = 0;
					}
					else
					{
						cout << "Please enter your marks out of 50" << endl;
						cin >> temp;
						mid_flag = 1;
					}
				}
				cout << "Please enter student final term marks: " << endl;
				cin >> temp;
				while (final_flag == 1)
				{
					if (temp <= 100)
					{
						Final_Marks[counter] = temp;
						final_flag = 0;
					}
					else
					{
						cout << "Please enter your marks out of 100" << endl;
						cin >> temp;
						final_flag = 1;
					}
				}
				cout << "Please enter student class: " << endl;
				cin >> Class[counter];

				if (Final_Marks[counter] < 50)
				{
					Grades[counter] = 'F';
				}
				else if (Final_Marks[counter] >= 50 && Final_Marks[counter] <= 59)
				{
					Grades[counter] = 'D';
				}
				else if (Final_Marks[counter] >= 60 && Final_Marks[counter] <= 72)
				{
					Grades[counter] = 'C';
				}
				else if (Final_Marks[counter] >= 73 && Final_Marks[counter] <= 85)
				{
					Grades[counter] = 'B';
				}
				else if (Final_Marks[counter] >= 86)
				{
					Grades[counter] = 'A';
				}
				cout << endl;
				counter++;
		}

		else if (select == 3)
		{
			cout << "Enter the roll no to delete its data: "; //deletion process
			cin >> temp;

			int index = -1;

			for (int i = 0; i < counter; i++)
			{
				if (Roll_No[i] == temp)
				{
				index = i;
					break;
				}
			}

			if (index != -1)
			{
				for (int j = index; j < counter; j++)
				{
					Roll_No[j] = Roll_No[j + 1];

					Midterm_Marks[j] = Midterm_Marks[j + 1];

					Final_Marks[j] = Final_Marks[j + 1];

					Class[j] = Class[j + 1];
				}
				cout << "\nStudent data is deleted" << endl;
				counter--;
			}
			else
			{
				cout << "\nStudent roll no doesn't exist" << endl;
			}
		}
		else if (select == 4)
		{
			cout << "Press 1 to Sort and display record in ascending order w.r.t roll no.\n" << endl;//-----
			cout << "Press 2 to Sort and display record in descending order w.r.t roll no." << endl << endl;//-----
			cout << "Press 3 to Sort and display record in ascending order w.r.t Mid marks.\n" << endl;//-----
			cout << "Press 4 to Sort and display record in descending order w.r.t Mid marks." << endl << endl;//----
			cout << "Press 5 to Sort and display record in ascending order w.r.t Final marks.\n" << endl;//-----
			cout << "Press 6 to Sort and display record in descending order w.r.t Final marks." << endl << endl;
			cout << "Press 7 to Sort and display record in ascending order w.r.t Grades.\n" << endl;//-----
			cout << "Press 8 to Sort and display record in descending order w.r.t Grades." << endl << endl;//-----
			cout << "Press 9 to display Record of student which got marks higher than X marks in Finalmarks in descending order.\n" << endl;//-----
			cout << "Press 10 to display Record of student which got mark higher than X mark in Finalmark in ascending order." << endl << endl;//----
			cout << "Press 11 to display Record of student which got marks less than or equal to  X marks in Finalmarks in descending order.\n" << endl;//---
			cout << "Press 12 to display Record of student which got marks less than or equal to  X marks in Finalmarks in ascending order" << endl << endl;//---
			cout << "Press 13 to display Record of student which got grade higher than X Grade  in descending order" << endl << endl;//---
			cout << "Press 14 to display Record of student which got grade higher than X Grade in ascending order" << endl << endl;
			cout << "Press 15 to display Record of student which got garde less than or equal to X Grade in descending order\n" << endl;
			cout << "Press 16 to display Record of student which got grade less than or equal to X Grade in ascending order" << endl << endl;
			cout << "Please enter your choice: ";
			cin >> main_select;
			if (main_select == 1)
			{
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Roll_No[j] > Roll_No[j + 1])
						{
							temp = Roll_No[j + 1];
							Roll_No[j + 1] = Roll_No[j];
							Roll_No[j] = temp;

							temp = Midterm_Marks[j + 1];
							Midterm_Marks[j + 1] = Midterm_Marks[j];
							Midterm_Marks[j] = temp;

							temp = Final_Marks[j + 1];
							Final_Marks[j + 1] = Final_Marks[j];
							Final_Marks[j] = temp;

							temp = Class[j + 1];
							Class[j + 1] = Class[j];
							Class[j] = temp;

							temp = Grades[j + 1];
							Grades[j + 1] = Grades[j];
							Grades[j] = temp;

						}
					}
				}

				for (int i = 0; i < counter; i++)
				{
					cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
						<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
						<< "Grade: " << Grades[i] << endl;
				}
			}
			if (main_select == 2)
			{
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Roll_No[j] < Roll_No[j + 1])
						{
							temp = Roll_No[j + 1];
							Roll_No[j + 1] = Roll_No[j];
							Roll_No[j] = temp;

							temp = Midterm_Marks[j + 1];
							Midterm_Marks[j + 1] = Midterm_Marks[j];
							Midterm_Marks[j] = temp;

							temp = Final_Marks[j + 1];
							Final_Marks[j + 1] = Final_Marks[j];
							Final_Marks[j] = temp;

							temp = Class[j + 1];
							Class[j + 1] = Class[j];
							Class[j] = temp;

							temp = Grades[j + 1];
							Grades[j + 1] = Grades[j];
							Grades[j] = temp;

						}
					}
				}

				for (int i = 0; i < counter; i++)
				{
					cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
						<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
						<< "Grade: " << Grades[i] << endl;
				}
			}
			if (main_select == 3)
			{
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Midterm_Marks[j] > Midterm_Marks[j + 1])
						{
							temp = Roll_No[j + 1];
							Roll_No[j + 1] = Roll_No[j];
							Roll_No[j] = temp;

							temp = Midterm_Marks[j + 1];
							Midterm_Marks[j + 1] = Midterm_Marks[j];
							Midterm_Marks[j] = temp;

							temp = Final_Marks[j + 1];
							Final_Marks[j + 1] = Final_Marks[j];
							Final_Marks[j] = temp;

							temp = Class[j + 1];
							Class[j + 1] = Class[j];
							Class[j] = temp;

							temp = Grades[j + 1];
							Grades[j + 1] = Grades[j];
							Grades[j] = temp;

						}
					}
				}

				for (int i = 0; i < counter; i++)
				{
					cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
						<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
						<< "Grade: " << Grades[i] << endl;
				}
			}
			if (main_select == 4)
			{
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Midterm_Marks[j] < Midterm_Marks[j + 1])
						{
							temp = Roll_No[j + 1];
							Roll_No[j + 1] = Roll_No[j];
							Roll_No[j] = temp;

							temp = Midterm_Marks[j + 1];
							Midterm_Marks[j + 1] = Midterm_Marks[j];
							Midterm_Marks[j] = temp;

							temp = Final_Marks[j + 1];
							Final_Marks[j + 1] = Final_Marks[j];
							Final_Marks[j] = temp;

							temp = Class[j + 1];
							Class[j + 1] = Class[j];
							Class[j] = temp;

							temp = Grades[j + 1];
							Grades[j + 1] = Grades[j];
							Grades[j] = temp;

						}
					}
				}
				for (int i = 0; i < counter; i++)
				{
					cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
						<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
						<< "Grade: " << Grades[i] << endl;
				}
			}
			if (main_select == 5)
			{
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Final_Marks[j] > Final_Marks[j + 1])
						{
							temp = Roll_No[j + 1];
							Roll_No[j + 1] = Roll_No[j];
							Roll_No[j] = temp;

							temp = Midterm_Marks[j + 1];
							Midterm_Marks[j + 1] = Midterm_Marks[j];
							Midterm_Marks[j] = temp;

							temp = Final_Marks[j + 1];
							Final_Marks[j + 1] = Final_Marks[j];
							Final_Marks[j] = temp;

							temp = Class[j + 1];
							Class[j + 1] = Class[j];
							Class[j] = temp;

							temp = Grades[j + 1];
							Grades[j + 1] = Grades[j];
							Grades[j] = temp;

						}
					}
				}

				for (int i = 0; i < counter; i++)
				{
					cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
						<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
						<< "Grade: " << Grades[i] << endl;
				}
			}
			if (main_select == 6)
			{
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Final_Marks[j] < Final_Marks[j + 1])
						{
							temp = Roll_No[j + 1];
							Roll_No[j + 1] = Roll_No[j];
							Roll_No[j] = temp;

							temp = Midterm_Marks[j + 1];
							Midterm_Marks[j + 1] = Midterm_Marks[j];
							Midterm_Marks[j] = temp;

							temp = Final_Marks[j + 1];
							Final_Marks[j + 1] = Final_Marks[j];
							Final_Marks[j] = temp;

							temp = Class[j + 1];
							Class[j + 1] = Class[j];
							Class[j] = temp;

							temp = Grades[j + 1];
							Grades[j + 1] = Grades[j];
							Grades[j] = temp;

						}
					}
				}

				for (int i = 0; i < counter; i++)
				{
					cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
						<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
						<< "Grade: " << Grades[i] << endl;
				}
			}
			if (main_select == 7)
			{
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Grades[j] < Grades[j + 1])
						{
							temp = Roll_No[j + 1];
							Roll_No[j + 1] = Roll_No[j];
							Roll_No[j] = temp;

							temp = Midterm_Marks[j + 1];
							Midterm_Marks[j + 1] = Midterm_Marks[j];
							Midterm_Marks[j] = temp;

							temp = Final_Marks[j + 1];
							Final_Marks[j + 1] = Final_Marks[j];
							Final_Marks[j] = temp;

							temp = Class[j + 1];
							Class[j + 1] = Class[j];
							Class[j] = temp;

							temp = Grades[j + 1];
							Grades[j + 1] = Grades[j];
							Grades[j] = temp;

						}
					}
				}

				for (int i = 0; i < counter; i++)
				{
					cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
						<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
						<< "Grade: " << Grades[i] << endl;
				}
			}
			if (main_select == 8)
			{
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Grades[j] > Grades[j + 1])
						{
							temp = Roll_No[j + 1];
							Roll_No[j + 1] = Roll_No[j];
							Roll_No[j] = temp;

							temp = Midterm_Marks[j + 1];
							Midterm_Marks[j + 1] = Midterm_Marks[j];
							Midterm_Marks[j] = temp;

							temp = Final_Marks[j + 1];
							Final_Marks[j + 1] = Final_Marks[j];
							Final_Marks[j] = temp;

							temp = Class[j + 1];
							Class[j + 1] = Class[j];
							Class[j] = temp;

							temp = Grades[j + 1];
							Grades[j + 1] = Grades[j];
							Grades[j] = temp;

						}
					}
				}

				for (int i = 0; i < counter; i++)
				{
					cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
						<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
						<< "Grade: " << Grades[i] << endl;
				}
			}
			if (main_select == 9)
			{
				cout << "Please enter the marks: ";
				cin >> marks;
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Final_Marks[j] < Final_Marks[j + 1])
						{
								temp = Roll_No[j + 1];
								Roll_No[j + 1] = Roll_No[j];
								Roll_No[j] = temp;

								temp = Midterm_Marks[j + 1];
								Midterm_Marks[j + 1] = Midterm_Marks[j];
								Midterm_Marks[j] = temp;

								temp = Final_Marks[j + 1];
								Final_Marks[j + 1] = Final_Marks[j];
								Final_Marks[j] = temp;

								temp = Class[j + 1];
								Class[j + 1] = Class[j];
								Class[j] = temp;

								temp = Grades[j + 1];
								Grades[j + 1] = Grades[j];
								Grades[j] = temp;
							
						}
					}
				}
				for (int i = 0; i < counter; i++)
				{
					if (Final_Marks[i] > marks)
					{
						cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
							<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
							<< "Grade: " << Grades[i] << endl;
					}
				}
			}
			if (main_select == 10)
			{
				cout << "Please enter the marks: ";
				cin >> marks;
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Final_Marks[j] > Final_Marks[j + 1])
						{
								temp = Roll_No[j + 1];
								Roll_No[j + 1] = Roll_No[j];
								Roll_No[j] = temp;

								temp = Midterm_Marks[j + 1];
								Midterm_Marks[j + 1] = Midterm_Marks[j];
								Midterm_Marks[j] = temp;

								temp = Final_Marks[j + 1];
								Final_Marks[j + 1] = Final_Marks[j];
								Final_Marks[j] = temp;

								temp = Class[j + 1];
								Class[j + 1] = Class[j];
								Class[j] = temp;

								temp = Grades[j + 1];
								Grades[j + 1] = Grades[j];
								Grades[j] = temp;
							
						}
					}
				}
				for (int i = 0; i < counter; i++)
				{
					if (Final_Marks[i] > marks)
					{
						cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
							<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
							<< "Grade: " << Grades[i] << endl;
					}
				}
			}
			if (main_select == 11)
			{
				cout << "Please enter the marks: ";
				cin >> marks;
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Final_Marks[j] < Final_Marks[j + 1])
						{
							
								temp = Roll_No[j + 1];
								Roll_No[j + 1] = Roll_No[j];
								Roll_No[j] = temp;

								temp = Midterm_Marks[j + 1];
								Midterm_Marks[j + 1] = Midterm_Marks[j];
								Midterm_Marks[j] = temp;

								temp = Final_Marks[j + 1];
								Final_Marks[j + 1] = Final_Marks[j];
								Final_Marks[j] = temp;

								temp = Class[j + 1];
								Class[j + 1] = Class[j];
								Class[j] = temp;

								temp = Grades[j + 1];
								Grades[j + 1] = Grades[j];
								Grades[j] = temp;
							
						}
					}
				}
				for (int i = 0; i < counter; i++)
				{
					if (Final_Marks[i] <= marks)
					{
						cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
							<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
							<< "Grade: " << Grades[i] << endl;
					}
				}
			}
			if (main_select == 12)
			{
				cout << "Please enter the marks: ";
				cin >> marks;
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Final_Marks[j] > Final_Marks[j + 1])
						{
							
								temp = Roll_No[j + 1];
								Roll_No[j + 1] = Roll_No[j];
								Roll_No[j] = temp;

								temp = Midterm_Marks[j + 1];
								Midterm_Marks[j + 1] = Midterm_Marks[j];
								Midterm_Marks[j] = temp;

								temp = Final_Marks[j + 1];
								Final_Marks[j + 1] = Final_Marks[j];
								Final_Marks[j] = temp;

								temp = Class[j + 1];
								Class[j + 1] = Class[j];
								Class[j] = temp;

								temp = Grades[j + 1];
								Grades[j + 1] = Grades[j];
								Grades[j] = temp;
							
						}
					}
				}
				for (int i = 0; i < counter; i++)
				{
					if (Final_Marks[i] <= marks)
					{
						cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
							<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
							<< "Grade: " << Grades[i] << endl;
					}
				}
			}
			if (main_select == 13)
			{
				cout << "Please enter the grade: ";
				cin >> get_grade;
				if (get_grade >= 97 && get_grade <= 122)
				{
					get_grade = get_grade - 32;
				}
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Grades[j] > Grades[j + 1])
						{
							
								temp = Roll_No[j + 1];
								Roll_No[j + 1] = Roll_No[j];
								Roll_No[j] = temp;

								temp = Midterm_Marks[j + 1];
								Midterm_Marks[j + 1] = Midterm_Marks[j];
								Midterm_Marks[j] = temp;

								temp = Final_Marks[j + 1];
								Final_Marks[j + 1] = Final_Marks[j];
								Final_Marks[j] = temp;

								temp = Class[j + 1];
								Class[j + 1] = Class[j];
								Class[j] = temp;

								temp = Grades[j + 1];
								Grades[j + 1] = Grades[j];
								Grades[j] = temp;
							
						}
					}
				}
				for (int i = 0; i < counter; i++)
				{
					if (Grades[i] < get_grade)
					{
						cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
							<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
							<< "Grade: " << Grades[i] << endl;
					}
				}
			}
			if (main_select == 14)
			{
				cout << "Please enter the grade: ";
				cin >> get_grade;
				if (get_grade >= 97 && get_grade <= 122)
				{
					get_grade = get_grade - 32;
				}
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Grades[j] < Grades[j + 1])
						{
							
								temp = Roll_No[j + 1];
								Roll_No[j + 1] = Roll_No[j];
								Roll_No[j] = temp;

								temp = Midterm_Marks[j + 1];
								Midterm_Marks[j + 1] = Midterm_Marks[j];
								Midterm_Marks[j] = temp;

								temp = Final_Marks[j + 1];
								Final_Marks[j + 1] = Final_Marks[j];
								Final_Marks[j] = temp;

								temp = Class[j + 1];
								Class[j + 1] = Class[j];
								Class[j] = temp;

								temp = Grades[j + 1];
								Grades[j + 1] = Grades[j];
								Grades[j] = temp;
							
						}
					}
				}
				for (int i = 0; i < counter; i++)
				{
					if (Grades[i] < get_grade)
					{
						cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
							<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
							<< "Grade: " << Grades[i] << endl;
					}
				}
			}
			if (main_select == 15)
			{
				cout << "Please enter the grade: ";
				cin >> get_grade;
				if (get_grade >= 97 && get_grade <= 122)
				{
					get_grade = get_grade - 32;
				}
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Grades[j] > Grades[j + 1])
						{
							
								temp = Roll_No[j + 1];
								Roll_No[j + 1] = Roll_No[j];
								Roll_No[j] = temp;

								temp = Midterm_Marks[j + 1];
								Midterm_Marks[j + 1] = Midterm_Marks[j];
								Midterm_Marks[j] = temp;

								temp = Final_Marks[j + 1];
								Final_Marks[j + 1] = Final_Marks[j];
								Final_Marks[j] = temp;

								temp = Class[j + 1];
								Class[j + 1] = Class[j];
								Class[j] = temp;

								temp = Grades[j + 1];
								Grades[j + 1] = Grades[j];
								Grades[j] = temp;
							
						}
					}
				}
				for (int i = 0; i < counter; i++)
				{
					if (Grades[i] >= get_grade)
					{
						cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
							<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
							<< "Grade: " << Grades[i] << endl;
					}
				}
			}
			if (main_select == 16)
			{
				cout << "Please enter the grade: ";
				cin >> get_grade;
				if (get_grade >= 97 && get_grade <= 122)
				{
					get_grade = get_grade - 32;
				}
				for (int i = 0; i < counter; i++)
				{
					for (int j = 0; j < counter - i - 1; j++)
					{
						if (Grades[j] < Grades[j + 1])
						{
							
								temp = Roll_No[j + 1];
								Roll_No[j + 1] = Roll_No[j];
								Roll_No[j] = temp;

								temp = Midterm_Marks[j + 1];
								Midterm_Marks[j + 1] = Midterm_Marks[j];
								Midterm_Marks[j] = temp;

								temp = Final_Marks[j + 1];
								Final_Marks[j + 1] = Final_Marks[j];
								Final_Marks[j] = temp;

								temp = Class[j + 1];
								Class[j + 1] = Class[j];
								Class[j] = temp;

								temp = Grades[j + 1];
								Grades[j + 1] = Grades[j];
								Grades[j] = temp;
							
						}
					}
				}
				for (int i = 0; i < counter; i++)
				{
					if (Grades[i] >= get_grade)
					{
						cout << "Roll No: " << Roll_No[i] << ", " << "Midterm Marks: " << Midterm_Marks[i]
							<< ", " << "Final Term Marks: " << Final_Marks[i] << ", " << "Class: " << Class[i] << ", "
							<< "Grade: " << Grades[i] << endl;
					}
				}
			}
		}
		else if (select == 0)
		{
		    cout << "Program is turning off....." << endl;
			flag = 0;
		}
		else
		{
			cout << "You have select wrong choice please enter a valid choice" << endl;
		}
	}
	system("pause");
	return 0;
}