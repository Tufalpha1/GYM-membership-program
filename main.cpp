#include"gym.h"
#include<iostream>    //necessary libraries
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	customer* c1;
	int lim = 100;
	c1 = new customer[lim];
	trainer tr;
	string a, d; int n = 0, t_num;
	string cn;
	int total = 0;
	int num1 = 0;
	char bch, dec;
	long long int b; int c, choice1, choice2; char ch; //declaring all the necessary variables

	cout << "\n\n\n\t\t\t\t\t    ****GYM MEMBERSHIP SYSTEM****" << endl;
	cout << "\n\n\t\t\t\tMuhammad Zain-ul-Adideen \t|\t 201002" << endl;
	cout << "\n\t\t\t\tAhmad Muhammad Jaffar  \t\t|\t 200964" << endl;
	cout << "\n\t\t\t\tMuhammad Mujtaba Zahid \t\t|\t 200988\n\n\n\n\n\t\t\t\t";
	system("PAUSE");

	int num = 0;
	char again;
	do
	{
		system("cls");
		again = 'n';
		cout << "\n\t\t\t\t____________________________________________________";              //GYM
		cout << "\n\n\t\t\t\t||||||||||   WELCOME TO BROOKLYN 99 GYM   ||||||||||";            //INTRODUCTORY
		cout << "\n\t\t\t\t____________________________________________________" << endl;      //BANNER
		cout << "\t\t\t\t";
		cin.ignore();
		cout << "\n\n\t\t\t\tENTER FULL NAME: ";
		getline(cin, a);  //getline() function to print string with spaces
		c1[num].set_name(a);
		cout << "\t\t\t\tENTER AGE: ";
		cin >> c;
		if (c < 18)    //age validation
		{
			again = 'y';
			cout << "\n\n\n\t\t\t\t***SORRY! YOU ARE UNDER 18 AND ARE NOT ALLOWED TO ENTER***" << endl;
			cout << "\t\t\t\t";
			num1++;
			system("PAUSE");
		}
		else
		{
			c1[num].set_age(c);
		}

		if (again == 'n')
		{
			cout << "\t\t\t\tENTER CITY: ";
			cin >> cn;
			c1[num].set_city(cn);
			cout << "\t\t\t\tENTER GENDER: ";
			cin >> d;
			c1[num].set_gender(d);
			cout << "\t\t\t\tENTER CONTACT: ";
			cin >> b;
			c1[num].set_contact(b);
			system("CLS");
			cout << "\n\t\t\t\tYOUR INFORMATION (ENCRYPTED USING CAESAR CYPHER):";
			c1[num].get_name();
			c1[num].get_age();
			c1[num].get_gender();
			c1[num].get_city();
			c1[num].get_contact();
			cout << "\n\t\t\t\tWOULD YOU LIKE TO DECRYPT YOUR INFORMATION?(Y/N)";
			cin >> dec;
			if (dec == 'y' || dec == 'Y')
			{
				cout << "\n\t\t\t\tYOUR INFORMATION (DECRYPTED):";
				c1[num].get_name1();
				c1[num].get_age1();
				c1[num].get_gender1();
				c1[num].get_city1();
				c1[num].get_contact1();
				cout << "\n\n\n\t\t\t\t";
				system("PAUSE");
			}

			system("CLS");
			cout << "\n\n\t\t\t\tHOW WOULD YOU LIKE YOUR SUBSCRIPTION?";
			cout << "\n\t\t\t\t1)MONTHLY (50$)";
			cout << "\n\t\t\t\t2)YEARLY (600$)";
			cout << "\n\t\t\t\tpress 1 or 2" << endl;
			cout << "\t\t\t\t";
			cin >> choice1;

			if (choice1 == 1) //if user chose monthly subscription
			{

				tr.setID(201002, 200988, 200964);
				tr.display_info1(tr);                       //displaying trainer if user chose monthly subscription
				cout << "\n\t\t\t\tCHOOSE YOUR TRAINER (MONTHLY SUBSCRIPTION):  ";
				cin >> t_num;
				switch (t_num)                            //displaying of the choosen trainer
				{
				case 1:
					cout << "\n\t\t\t\tYOU SELECTED TRAINER 1(JAKE).";
					total = 55;
					break;
				case 2:
					cout << "\n\t\t\t\tYOU SELECTED TRAINER 2(AMY).";
					total = 60;
					break;
				case 3:
					cout << "\n\t\t\t\tYOU SELECTED TRAINER 3(TERRY).";
					total = 70;
					break;
				}
				cout << "\n\n\n\t\t\t\t";
				system("PAUSE");

			}
			else //if user chose yearly subsription
			{

				tr.setID(201002, 200988, 200964);
				tr.display_info2();                  //displaying trainer if user chose yearly subscription
				cout << "\n\t\t\t\tCHOOSE YOUR TRAINER (YEARLY SUBSCRIPTION): " << endl;
				cout << "\t\t\t\t";
				cin >> t_num;
				switch (t_num)
				{
				case 1:                                                  //displaying message of the choosen trainer
					cout << "\n\t\t\t\tYOU SELECTED TRAINER 1(JAKE).";
					total = 900;
					break;
				case 2:
					cout << "\n\t\t\t\tYOU SELECTED TRAINER 2(AMY).";
					total = 960;
					break;
				case 3:
					cout << "\n\t\t\t\tYOU SELECTED TRAINER 3(TERRY).";
					total = 1080;
					break;
				}
				cout << "\n\n\n\t\t\t\t";
				system("PAUSE");
			}
			training_type TRT;
			system("CLS");
			cout << "\n\n\t\t\t\tWHAT TYPE OF TRAINING WOULD YOU LIKE?";    //asking for training type
			TRT.get_training1();
			TRT.get_training2();
			TRT.get_training3();
			cout << "\n\t\t\t\tCHOOSE YOUR TRAINING TYPE: ";
			cin >> choice2;
			meal m1;
			equipment eq;
			if (choice2 == 1)              //if user chose weight loss
			{
				cout << "\n\t\t\t\t\t\t****MEAL PLAN FOR WEIGHT LOSS****" << endl;
				m1.meal1();
				cout << "\n\n\n\t\t\t\t\t\t****EQUIPMENT FOR WEIGHT LOSS****<<endl";
				eq.set_equipment1("TREADMILL", "BICYCLE", "ROWER", " STEPMIL", "CROSS TRAINER", "VIBRATION MACHINE");
				eq.get_equipment1();
			}
			else if (choice2 == 2)          //if user chose weight gain
			{
				cout << "\n\t\t\t\t\t\t****MEAL PLAN FOR WEIGHT GAIN****" << endl;
				cout << "\n\n\n";
				m1.meal2();
				cout << "\n\n\n\t\t\t\t\t\t****EQUIPMENT FOR WEIGHT GAIN****" << endl;
				eq.set_equipment2("TREADMILL", "DUMBELLS", "BENCH PRESS", " DEAD-LIFT", "PULL-UP BAR", "SMITH MACHINE");
				eq.get_equipment2();
			}
			else                            //if user chose lean abs
			{
				cout << "\n\t\t\t\t\t\t****MEAL PLAN FOR LEAN ABS****" << endl;
				m1.meal3();
				cout << "\n\n\n\t\t\t\t\t\t****EQUIPMENT FOR LEAN ABS****" << endl;
				eq.set_equipment3("TREADMILL", "KETTLE BALL", "AB WHEELS", "SIT-UP BENCHES", "PULL-UP BAR", "FOAM ROLLER");
				eq.get_equipment3();
			}
			cout << "\n\n\t\t\t\tENTER ANY CHARACTER FOR DISPLAYING BILL: " << endl;
			cout << "\t\t\t\t";
			cin >> bch;
			cout << "\n\n\t\t\t\tYOUR TOTAL BILL WOULD BE:  " << total << "$";


			char condition;
			do {
				condition = 'y';
				int choice;
				cout << "\n\n\t\t\tWHICH CREDIT CARD WOULD YOU LIKE TO PAY WITH: ";
				cout << "\n\t\t\t1)MASTER CARD";
				cout << "\n\t\t\t2)VISA";
				cout << "\n\t\t\t3)CHASE";
				cout << "\n\t\t\t4)CITIBANK" << endl;
				cout << "\t\t\t";
				cin >> choice;
				Credit_Card c1;
				long long int card_number;
				int balance = 0;
				if (choice == 1)
				{
					char tempc;
					do
					{
						tempc = 'y';
						cout << "\n\t\t\t\tPLEASE ENTER YOUR 16-DIGIT CREDIT CARD NUMBER(MASTER CARD):" << endl;
						cout << "\t\t\t\t";
						cin >> card_number;
						int count = 0;
						long long int temp = card_number;
						while (temp != 0)
						{
							count++;
							temp = temp / 10;
						}
						if (count == 16)
						{
							tempc = 'y';
							c1.setCardNumber(card_number);
							do
							{
								tempc = 'y';
								cout << "\n\t\t\t\tPLEASE ENTER CARD BALANCE: " << endl;
								cout << "\t\t\t\t";
								cin >> balance;
								if (choice1 == 1 && balance >= 100)
								{
									c1.setBalance(balance);
									cout << "\n\n\t\t\t\tREMAINING BALANCE IN YOUR CARD IS: " << c1.getBalance() - total << "$" << endl;
								}
								else if (choice1 == 1 && balance < 100)
								{
									cout << "\n\n\t\t\t\tYOU HAVE INSUFFICIENT BALANCE IN YOUR CARD TO GET MONTHLY SUBSCRIPTION. " << endl;
									tempc = 'n';
								}
								if (choice1 == 2 && balance >= 1100)
								{
									c1.setBalance(balance);
									cout << "\n\t\t\t\tREMAINING BALANCE IN YOUR CARD IS: " << c1.getBalance() - total << "$" << endl;
									tempc = 'y';
								}
								else if (choice1 == 2 && balance < 1100)
								{
									cout << "\n\n\t\t\t\tYOU HAVE INSUFFICIENT BALANCE IN YOUR CARD TO GET YEARLY SUBSCRIPTION. " << endl;
									tempc = 'n';
								}
							} while (tempc == 'n');
						}
						else
						{
							cout << "\n\n\t\t\t\tYOU HAVE ENTERED AN INVALID MASTER CARD NUMBER. " << endl;
							cout << "\n\t\t\t\tPLEASE ENTER YOUR CREDIT CARD NUMBER AGAIN:" << endl;
							tempc = 'n';
						}
					} while (tempc == 'n');
				}
				else if (choice == 2)
				{
					char tempc;
					do
					{
						tempc = 'y';
						cout << "\n\t\t\t\tPLEASE ENTER YOUR 16-DIGIT CARD NUMBER(VISA):" << endl;
						cout << "\t\t\t\t";
						cin >> card_number;
						int count = 0;
						long long int temp = card_number;
						while (temp != 0)
						{
							count++;
							temp = temp / 10;
						}
						if (count == 16)
						{
							char tempc;
							c1.setCardNumber(card_number);
							do
							{
								tempc = 'y';
								cout << "\n\t\t\t\tPLEASE ENTER CARD BALANCE: " << endl;
								cout << "\t\t\t\t";
								cin >> balance;
								if (choice1 == 1 && balance >= 100)
								{
									c1.setBalance(balance);
									cout << "\n\n\t\t\t\tREMAINING BALANCE IN YOUR CARD IS: " << c1.getBalance() - total << "$" << endl;
									tempc = 'y';
								}
								else if (choice1 == 1 && balance < 100)
								{
									cout << "\n\n\t\t\t\tYOU HAVE INSUFFICIENT BALANCE IN YOUR CARD TO GET MONTHLY SUBSCRIPTION. " << endl;
									tempc = 'n';
								}
								if (choice1 == 2 && balance >= 1100)
								{
									c1.setBalance(balance);
									cout << "\n\t\t\t\tREMAINING BALANCE IN YOUR CARD IS: " << c1.getBalance() - total << "$" << endl;
									tempc = 'y';
								}
								else if (choice1 == 2 && balance < 1100)
								{
									cout << "\n\n\t\t\t\tYOU HAVE INSUFFICIENT BALANCE IN YOUR CARD TO GET YEARLY SUBSCRIPTION. " << endl;
									tempc = 'n';
								}

							} while (tempc == 'n');
						}
						else
						{
							cout << "\n\n\t\t\t\tYOU HAVE ENTERED AN INVALID VISA CARD NUMBER. " << endl;
							cout << "\n\t\t\t\tPLEASE ENTER YOUR CREDIT CARD NUMBER AGAIN:" << endl;
							tempc = 'n';
						}
					} while (tempc == 'n');
				}
				else if (choice == 3)
				{
					char tempc;
					do
					{
						tempc = 'y';
						cout << "\n\t\t\t\tPLEASE ENTER YOUR 14-DIGIT CARD NUMBER(CHASE):" << endl;
						cout << "\t\t\t\t";
						cin >> card_number;
						int count = 0;
						long long int temp = card_number;
						while (temp != 0)
						{
							count++;
							temp = temp / 10;
						}
						if (count == 14)
						{
							char tempc;
							c1.setCardNumber(card_number);
							do
							{
								tempc = 'y';
								cout << "\n\t\t\t\tPLEASE ENTER CARD BALANCE: " << endl;
								cout << "\t\t\t\t";
								cin >> balance;
								if (choice1 == 1 && balance >= 100)
								{
									c1.setBalance(balance);
									cout << "\n\n\t\t\t\tREMAINING BALANCE IN YOUR CARD IS: " << c1.getBalance() - total << "$" << endl;
									tempc = 'y';
								}
								else if (choice1 == 1 && balance < 100)
								{
									cout << "\n\n\t\t\t\tYOU HAVE INSUFFICIENT BALANCE IN YOUR CARD TO GET MONTHLY SUBSCRIPTION. " << endl;
									tempc = 'n';
								}
								if (choice1 == 2 && balance >= 1100)
								{
									c1.setBalance(balance);
									cout << "\n\t\t\t\tREMAINING BALANCE IN YOUR CARD IS: " << c1.getBalance() - total << "$" << endl;
									tempc = 'y';
								}
								else if (choice1 == 2 && balance < 1100)
								{
									cout << "\n\n\t\t\t\tYOU HAVE INSUFFICIENT BALANCE IN YOUR CARD TO GET YEARLY SUBSCRIPTION. " << endl;
									tempc = 'n';
								}
							} while (tempc == 'n');
						}
						else
						{
							cout << "\n\n\t\t\t\tYOU HAVE ENTERED AN INVALID MASTER CARD NUMBER. " << endl;
							cout << "\n\t\t\t\tPLEASE ENTER YOUR CREDIT CARD NUMBER AGAIN:" << endl;
							tempc = 'n';
						}
					} while (tempc == 'n');
				}
				else if (choice == 4)
				{
					char tempc;
					do
					{
						tempc = 'y';
						cout << "\n\t\t\t\tPLEASE ENTER YOUR 14-DIGIT CARD NUMBER(CITI-BANK):" << endl;
						cout << "\t\t\t\t";
						cin >> card_number;
						int count = 0;
						long long int temp = card_number;
						while (temp != 0)
						{
							count++;
							temp = temp / 10;
						}
						if (count == 14)
						{
							char tempc;
							c1.setCardNumber(card_number);
							do
							{
								tempc = 'y';
								cout << "\n\t\t\t\tPLEASE ENTER BALANCE IN YOUR MASTER CARD: " << endl;
								cout << "\t\t\t\t";
								cin >> balance;
								if (choice1 == 1 && balance >= 100)
								{
									c1.setBalance(balance);
									cout << "\n\n\t\t\t\tREMAINING BALANCE IN YOUR CARD IS: " << c1.getBalance() - total << "$" << endl;
									tempc = 'y';
								}
								else if (choice1 == 1 && balance < 100)
								{
									cout << "\n\n\t\t\t\tYOU HAVE INSUFFICIENT BALANCE IN YOUR CARD TO GET MONTHLY SUBSCRIPTION. " << endl;
									tempc = 'n';
								}
								if (choice1 == 2 && balance >= 1100)
								{
									c1.setBalance(balance);
									cout << "\n\t\t\t\tREMAINING BALANCE IN YOUR CARD IS: " << c1.getBalance() - total << "$" << endl;
									tempc = 'y';
								}
								else if (choice1 == 2 && balance < 1100)
								{
									cout << "\n\n\t\t\t\tYOU HAVE INSUFFICIENT BALANCE IN YOUR CARD TO GET YEARLY SUBSCRIPTION. " << endl;
									tempc = 'n';
								}
							} while (tempc == 'n');
						}
						else
						{
							cout << "\n\n\t\t\t\tYOU HAVE ENTERED AN INVALID MASTER CARD NUMBER. " << endl;
							cout << "\n\t\t\t\tPLEASE ENTER YOUR CREDIT CARD NUMBER AGAIN:" << endl;
							tempc = 'n';
						}
					} while (tempc == 'n');
				}
				else
				{
					cout << "\n\tWRONG CHOICE!" << endl;
					cout << "\n\tPLEASE ENTER YOUR CHOICE TO CONTINUE: " << endl;
					condition = 'n';
				}
			} while (condition == 'n');
			cout << "\n\n\t\t\t\t****CONGRATULATIONS! YOU HAVE GOT MEMBERSHIP OF BROOKLYN 99 GYM****" << endl;
			cout << "\n\n\t\t\t\t\t   _                   _";
			cout << "\n\t\t\t\t\t _| |                 | |_   ";
			cout << "\n\t\t\t\t\t|   |_________________|   | ";
			cout << "\n\t\t\t\t\t|    _________________    |";
			cout << "\n\t\t\t\t\t|_  |                 |  _| ";
			cout << "\n\t\t\t\t\t  |_|                 |_|  ";
			cout << "\n\n\t\t\t\t";

			system("PAUSE");
		}


		num++;


		while (num != 0 && c > 18)
		{
			char tempc = 'n';
			cout << "\n\n\t\t\t\tDO YOU WANT TO SEE DATA OF ALL CUSTOMERS?(y/n)" << endl;
			cout << "\t\t\t\t";
			cin >> tempc;
			if (tempc == 'y' || tempc == 'Y')
			{
				cout << "\n\n\n\t\t\t\t***DISPLAYING DATA OF ALL CUSTOMERS***\n" << endl;
				for (int i = 0; i < num - num1; i++)
				{
					cout << "\n\n\t\t\t\tCUSTOMER<" << i + 1 << ">" << endl;
					c1[i].display();
				}
			}
			cout << "\t\t\t\t";
			system("PAUSE");
			break;
		}


		char againc;
		system("CLS");
		cout << "\n\t\t\t\t\tDO YOU WANT TO ENTER DATA FOR ANOTHER CUSTOMER?(y/n)";
		cout << "\t";
		cin >> againc;
		if (againc == 'Y' || againc == 'y')
		{
			again = 'y';
		}
		else if (againc == 'n' || againc == 'N')
		{
			cout << "\n\n\t\t\t\tGOODBYE!\n\n" << endl;
			delete[] c1;
			exit(0);
		}
	} while (again == 'y');

	return 0;
}


