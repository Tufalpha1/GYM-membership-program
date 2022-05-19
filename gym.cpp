#include"gym.h"
#include<iostream>
#include<string>
#include<stdlib.h>



void person::set_name(string name)             //setting person data
{
	this->name = name;
}
void person::set_age(int age)
{
	this->age = age;
}
void person::set_gender(string gender)
{
	this->gender = gender;
}
void person::get_name()                    //getting person data
{
	for (int i = 0; i < name.length(); i++)
	{
		name.at(i) += 3;                         //encrypting name
	}
	cout << "\n\t\t\t\tName: " << name << endl;
}
void person::get_name1()
{
	for (int i = 0; i < name.length(); i++)
	{
		name.at(i) -= 3;                         //decrypting name
	}
	cout << "\n\t\t\t\tName: " << name << endl;
}
void person::get_age()
{
	age = age + 3;
	cout << "\t\t\t\tAge: " << age << endl;      //encrypting age
}
void person::get_age1()
{
	age = age - 3;
	cout << "\t\t\t\tAge: " << age << endl;             //decrypting age
}
void person::get_gender()
{
	for (int i = 0; i < gender.length(); i++)
	{
		gender.at(i) += 3;                         //encrypting gender
	}
	cout << "\t\t\t\tGender: " << gender << endl;
}
void person::get_gender1()
{
	for (int i = 0; i < gender.length(); i++)
	{
		gender.at(i) -= 3;                         //decrypting gender
	}
	cout << "\t\t\t\tGender: " << gender << endl;
}
void person::pPrint()
{
	cout << "\n\t\t\t\tNAME:\t   " << name << endl;
	cout << "\t\t\t\tAGE:\t   " << age << endl;
	cout << "\t\t\t\tGENDER:\t   " << gender << endl;
}



void customer::set_city(string city)
{
	this->city = city;
}
void customer::get_city()
{
	for (int i = 0; i < city.length(); i++)
	{
		city.at(i) += 3;                          //encrypting using caesar cypher
	}
	cout << "\t\t\t\tCity: " << city << endl;
}
void customer::get_city1()
{
	for (int i = 0; i < city.length(); i++)
	{
		city.at(i) -= 3;                         //decrypting using caesar cypher
	}
	cout << "\t\t\t\tCity: " << city << endl;
}
int d_contact;
void customer::set_contact(long long contact)
{
	this->contact = contact;
}
void customer::get_contact()
{
	contact = contact + 3;
	cout << "\t\t\t\tContact #: " << contact << endl;  //encrypting contact
}
void customer::get_contact1()
{
	contact = contact - 3;
	cout << "\t\t\t\tContact #:" << contact << endl;       //decrypting contact
}
void customer::display()
{
	pPrint();
	cout << "\t\t\t\tCITY:\t   " << city << endl;
	cout << "\t\t\t\tCONTACT:   " << contact << endl;
}



void trainer::setID(int i1, int i2, int i3)            //setting  trainer IDs
{
	ID1 = i1;
	ID2 = i2;
	ID3 = i3;
}
ostream& operator<<(ostream& os, trainer& t)            //overloading operator for <<
{
	os << "\n\t\t\tID: " << t.ID1 << "\t\tID: " << t.ID2 << "\t\tID: " << t.ID3;
	return os;
}
void trainer::display_info1(trainer& t)const                             //information of trainer if user chose monthly plan
{

	cout << "\n\n\t\t\t[TRAINER 1:]\t\t[TRAINER 2:]\t\t[TRAINER 3:]";
	cout << "\n\t\t\tName: Jake Peralta\tName: Amy Santiago\tName: Terry Jeffords";
	cout << "\n\t\t\tAge: 30\t\t\tAge: 28\t\t\tAge: 32";
	cout << "\n\t\t\tGender: Male\t\tGender: Female\t\tGender: Male";
	cout << t;
	cout << "\n\t\t\tCost: 25$\t\tCost: 30$\t\tCost: 40$" << endl;
}
void trainer::display_info2()const                             //information of trainer if user chose yearly plan
{

	cout << "\n\n\t\t\t[TRAINER 1:]\t\t[TRAINER 2:]\t\t[TRAINER 3:]";
	cout << "\n\t\t\tName: Jake Peralta\tName: Amy Santiago\tName: Terry Jeffords";
	cout << "\n\t\t\tAge: 30\t\t\tAge: 28\t\t\tAge: 32";
	cout << "\n\t\t\tGender: Male\t\tGender: Female\t\tGender: Male";
	cout << "\n\t\t\tID: " << this->ID1 << "\t\tID: " << this->ID2 << "\t\tID: " << this->ID3;
	cout << "\n\t\t\tCost: 300$\t\tCost: 360$\t\tCost: 480$" << endl;
}

void training_type::get_training1() const
{
	cout << "\n\t\t\t\t1)WEIGHT LOSS";
}
void training_type::get_training2()const
{
	cout << "\n\t\t\t\t2)WEIGHT GAIN (BULKING)";
}
void training_type::get_training3()const
{
	cout << "\n\t\t\t\t3)LEAN ABS (CUTTING):";
}


void meal::meal1()const                                       //meal plan for weight loss
{

	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  DAY ||     BREAKFAST    ||          LUNCH          ||      DINNER        ||         SNACK          ||";
	cout << "\n\t_________________________________________________________________________________________________________";
	cout << "\n\t||  MON ||  Oatmeal+Banana  ||  Grilled Chicken Salad  ||  Rice And Chicken  ||  Apple+Peanut Butter   ||";
	cout << "\n\t_________________________________________________________________________________________________________";
	cout << "\n\t||  TUE ||  Granola Cereal  ||     Sweet potatoes +    ||  Veggie stirfry &  ||         Almonds        ||";
	cout << "\n\t||      ||      +Milk       ||      Scrambled eggs     ||    Grilled Beef    ||                        ||";
	cout << "\n\t_________________________________________________________________________________________________________";
	cout << "\n\t||  WED ||  Peanut Butter   ||     Rice and Chicken    ||  Grilled Chicken   ||    Freash Fruits       ||";
	cout << "\n\t||      ||     Sandwich     ||                         ||       Salad        ||                        ||";
	cout << "\n\t_________________________________________________________________________________________________________";
	cout << "\n\t|| THUR ||     Turkey       ||      Tuna Salad on      ||      Soup and      || Popcorn(sugar_free)    ||";
	cout << "\n\t||      ||      +Eggs       ||       Wheat Bread       ||       Salmon       ||                        ||";
	cout << "\n\t_________________________________________________________________________________________________________";
	cout << "\n\t||  FRI || Oatmeal + Banana ||         Soup And        ||  Sweet Potatoes+   ||     Greek Yogurt       ||";
	cout << "\n\t||      ||                  ||         Salmon          ||  Scrambled Eggs    ||                        ||";
	cout << "\n\t_________________________________________________________________________________________________________";
	cout << "\n\t||  SAT ||    Pancakes      ||      Bacon,Lettuce,     || Veggie Stirfry &   ||       Cashews          ||";
	cout << "\n\t||      ||                  ||       Tomato Wrap       ||    Grilled Beef    ||                        ||";
	cout << "\n\t_________________________________________________________________________________________________________";
	cout << "\n\t||  SUN ||     Smoothie     ||         Quinoa          ||   Stuffed Bell     ||        Bananas         ||";
	cout << "\n\t||      ||      Bowl        ||                         ||       Peppers      ||                        ||";
	cout << "\n\t_________________________________________________________________________________________________________";


}
void meal::meal2()const                                  //meal plan for weight gain
{

	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  DAY ||    BREAKFAST     ||          LUNCH          ||      DINNER        ||         SNACK         ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  MON ||    Paleo Eggs    ||      Spicy Pulled       ||  Easy Chicken and  ||      Collard Wrap     ||";
	cout << "\n\t||      ||    Benedict      ||     chicken breast      ||    Vegetables      ||                       ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  TUE || Rutabaga & Onion ||        Black Cod        ||    Texas Style     ||     Tuna Stuffed      ||";
	cout << "\n\t||      ||   Hash Browns    || Medalions with Mushrooms||        Chill       ||         Eggs          ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  WED || Creamy Macadamia ||    Beef Brisket With    || Roasted duck Loin  ||  Pico De Gabo with    ||";
	cout << "\n\t||      ||      Shrimp      ||       Mushroom          || with Wild Mushroom ||     Carrot Chips      ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t|| THUR || Jicama & Sausage ||      Ginger Orange      ||    French Style    ||     Raw Vegetable     ||";
	cout << "\n\t||      ||  Breakfast Pie   ||       Drumsticks        ||   Chicken Breasts  ||        Slices         ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  FRI || Sauteed Spinach  ||   Chinese Five Spice    ||  Chicken Piccata   ||  Moroccan-Style Lamb  ||";
	cout << "\n\t||      ||  And Mushrooms   ||       Stir Fry          ||                    ||       Meatballs       ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  SAT ||HotBreakfast Apple||     Buffalo Greek       ||   Mediterranean    || Beacon Wrapped Sweet  ||";
	cout << "\n\t||      || Creamed Cereal   ||       Caesar Salad      ||       Chicken      ||    Potato Fries       ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  SUN || Pumpkin And meat ||      Greek Turkey       ||     Fried Egg      ||   Celery And Almond   ||";
	cout << "\n\t||      ||      Pie         ||        Burgers          ||   Chorizo Burgers  ||        Salad          ||";
	cout << "\n\t________________________________________________________________________________________________________";


}
void meal::meal3()const                              //meal plan for lean abs
{
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  DAY ||    BREAKFAST     ||          LUNCH          ||      DINNER        ||         SNACK         ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  MON ||  Smoked Salmon   ||   Avocado Tuna Wrap     ||   Grilled Salmon,  ||   Strawberry Banana   ||";
	cout << "\n\t||      ||      Toast       ||                         ||     Wild rice      ||      Smoothie         ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  TUE || Kale Pineeapple  ||   Kale White Bean       ||    Kale Pesto      ||      Kale Chips       ||";
	cout << "\n\t||      ||     Smoothie     ||          Soup           ||   Chicken Pasta    ||                       ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  WED ||  Greek Yougurt   ||  Quinoa Tomato Black    ||   Poached Ginger   ||  Goji Berries, Mixed  ||";
	cout << "\n\t||      ||      Parfait     ||     Bean Salad          ||       Chicken      ||        Nuts           ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t|| THUR || Open Avocado And ||      Turkey Wrap        ||    Shrimp And      ||     Chia Pudding      ||";
	cout << "\n\t||      ||     Egg Toast    ||                         ||      Couscous      ||                       ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  FRI || Chocolate Waffles||    Acal Bowl With       ||   Grilled Steak    ||    Apple And Nut      ||";
	cout << "\n\t||      ||                  ||       Berries           ||     Salad          ||     Butter Dip        ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  SAT || Eggs And Turkey  ||   Crunchy Chickpea      || Sweet & Spicy Paleo||  Jerky(Chicken,Beef,  ||";
	cout << "\n\t||      ||      Bacon       ||      Kale Caesar        ||  Chicken Fingers   ||    bison,turkey)      ||";
	cout << "\n\t________________________________________________________________________________________________________";
	cout << "\n\t||  SUN || Peanut Butter &  ||  Chicken Cheese Skinny  ||  Balsamic Glazed   || Edamame Poppers with  ||";
	cout << "\n\t||      ||   Banana Shake   ||     Quesadillas         ||     Steak Rolls    ||       Sea Salt        ||";
	cout << "\n\t________________________________________________________________________________________________________";
}




void equipment::set_equipment1(string a, string b, string c, string d, string e, string f)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->e = e;
	this->f = f;
}
void equipment::set_equipment2(string a, string b, string c, string d, string e, string f)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->e = e;
	this->f = f;
}
void equipment::set_equipment3(string a, string b, string c, string d, string e, string f)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->e = e;
	this->f = f;
}
void equipment::get_equipment1()const
{
	cout << "\n\n\t\t" << a << "\t" << b << "\t\t" << c << "\t" << d << "\t" << e << "\t" << f << "\t";
}
void equipment::get_equipment2()const
{
	cout << "\n\n\t\t" << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << "\t";
}
void equipment::get_equipment3()const
{
	cout << "\n\n\t\t" << a << "\t " << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << "\t";
}

void Credit_Card::setCardNumber(long long int a)
{
	card_number = a;
}
void Credit_Card::setBalance(int a)
{
	balance = a;
}
int Credit_Card::getCardNumber()
{
	return card_number;
}
int Credit_Card::getBalance()
{
	return balance;
}