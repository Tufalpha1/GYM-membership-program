#include<iostream>  //necesssary libraries
#include<string>
#include<stdlib.h>
using namespace std;

class person
{
private:
	string name;
	int age;
	string gender;
public:
	person() //constructor of class customer
	{
		name = " ";
		age = 0;
		gender = " ";
	}
	void set_name(string name);
	void set_age(int age);
	void set_gender(string gender);
	void get_name();           //encryption functions 
	void get_age();
	void get_gender();
	void get_name1();         //decryption functions
	void get_age1();
	void get_gender1();
	void pPrint();
	~person() { }; //destructor of class customer
};

class customer :public person
{
	long int contact;
	string city;
public:
	customer()
	{
		contact = 0;
		city = " ";
	}
	void set_contact(long long int contact);
	void set_city(string city);
	void get_contact();          //encryption functions
	void get_city();
	void get_contact1();       //decryption functions
	void get_city1();
	void display();
	~customer() { };
};

class trainer : public person
{

public:
	int ID1, ID2, ID3;
	trainer()
	{
		ID1 = 0;
		ID2 = 0;
		ID3 = 0;
	}
	friend ostream& operator<<(ostream& os, trainer&);
	void setID(int i1, int i2, int i3);     //setter and getter funcions of class trainer
	void getID()const;
	void display_info1(trainer&)const;     //displaying data of trainers
	void display_info2()const;
	~trainer() { };
};

class training_type                 // prints training types
{
public:
	training_type() { };
	void get_training1()const;
	void get_training2()const;
	void get_training3()const;
	~training_type() { };
};

class meal
{
public:
	meal() { };                           //displaying different meal plans 
	void meal1()const;                     //plan 1
	void meal2()const;                     //plan 2
	void meal3()const;                     //plan 3
	~meal() { };
};

class equipment
{
	string a, b, c, d, e, f;
public:
	equipment()
	{
		a = " ";
		b = " ";
		c = " ";
		d = " ";
		e = " ";
		f = " ";
	}
	void set_equipment1(string a, string b, string c, string d, string e, string f);
	void set_equipment2(string a, string b, string c, string d, string e, string f);
	void set_equipment3(string a, string b, string c, string d, string e, string f);
	void get_equipment1() const;
	void get_equipment2()const;
	void get_equipment3()const;
	~equipment() { };
};

class Credit_Card
{
	long long int card_number;
	int balance;
public:
	Credit_Card()
	{
		card_number = 0;
		balance = 1000;
	}
	void setCardNumber(long long int);
	void setBalance(int);
	int getCardNumber();
	int getBalance();
	~Credit_Card() {}
};
