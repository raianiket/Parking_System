#include<iostream>
#include<fstream>
#include<string.h>	
#include<conio.h>	
#include<stdio.h>
using namespace std;
class car
{
public:
char accident_gradec;
char car_type[20];
char companyc[20];
char name_c[20];
float car_cost;
int car_number;
int number_of_daysc;
float total_costc;
float finec;

void readc();
void displayc();
void totalcostc();
void calcfinec();
};
void car::readc()
{
cout<<"\n"<<"CAR DATA READING";
char c='n';
cout<<"\n"<<"Enter the owners name:";
cin.ignore();
cin.getline(name_c,20);
cout<<"\n"<<"Enter the car company:";
cin.getline(companyc,20);
cout<<"\n"<<"Enter the car number:";
cin>>car_number;
cout<<"\n"<<"Enter the number of days on rent:";
cin>>number_of_daysc;
cout<<"\n"<<"Enter the car cost:";
cin>>car_cost;
cout<<"\n"<<"Has an accident been involved? (y/n):";
cin>>c;
if(c=='y'||c=='Y')
{
		calcfinec();
}
else
{
		accident_gradec='o';
finec=0.0;
}
cout<<"\n"<<"CAR DATA READING ENDED"<<"\n";
}


void car::calcfinec()
{
	cout<<"\n"<<"CAR FINE BEING CALCULATED";
cout<<"\n"<<"Enter the accident grade(s- small accident)(m- medium accident)(b- big accident):";
cin>>accident_gradec;
float d;
if(strcmp(companyc,"ferrari")==0)
	d=10;
else if(strcmp(companyc,"toyota")==0)
	d=9;
else if(strcmp(companyc,"honda")==0)
	d=8;
else if(strcmp(companyc,"ford")==0)
	d=7;
else if(strcmp(companyc,"dodge")==0)
	d=6;
else if(strcmp(companyc,"mitsubishi")==0)
	d=5;
else if(strcmp(companyc,"skoda")==0)
	d=4;
else if(strcmp(companyc,"maruti")==0)
	d=3;
else if(strcmp(companyc,"ambassador")==0)
	d=2;


else
	d=1;

float e;
if((accident_gradec=='s')||(accident_gradec=='S'))
{
	e=3;
}
else if((accident_gradec=='m')||(accident_gradec=='M'))
{
	e=5;
}
else if((accident_gradec=='b')||(accident_gradec=='B'))
{
	e=8;
}
else
{
	e=1;
}
finec=float(car_cost*(e/100)*d);
cout<<"\n"<<"CAR FINE CALCULATED"<<"\n";
}


void car::totalcostc()
{
	cout<<"\n"<<"TOTAL COST FOR CAR BEING CALCULATED";
	total_costc=(1000*number_of_daysc)+finec;
	cout<<"\n"<<"TOTAL COST CALCULATED"<<"\n";
}


void car::displayc()
{
	cout<<"\n\t\t"<<"DISPLAYING CAR DATA";
cout<<"\n"<<"Name of the owners of the car:";
puts(name_c);
cout<<"\n"<<"Number of days rented:"<<number_of_daysc;
cout<<"\n"<<"Cost of the car:"<<car_cost;
cout<<"\n"<<"Car number is:"<<car_number;
cout<<"\n"<<"The car company is:";
puts(companyc);
cout<<"\n"<<"The car type is:"<<car_type;
if(accident_gradec=='o')
{
cout<<"\n"<<"The owners was not involved in any accident";	
cout<<"\n"<<"fine=0";
}
else
{
cout<<"\n"<<"THE owners WAS INVOLVED IN AN ACCIDENT";
cout<<"\n"<<"THE FINE IS:"<<finec<<"Rupees";
}
cout<<"\n"<<"The total cost is:"<<total_costc<<"Rupees";
cout<<"\n"<<"END OF CAR DATA DISPLAY"<<"\n";
}


class motorbike
{
public:
char accident_gradeb;
char companyb[20];
char name_b[20];
int powerb;
double bike_cost;
int bike_number;
int number_of_daysb;
double total_costb;
double fineb;

void readb();
void displayb();
void totalcostb();
void calcfineb();
};


void motorbike::readb()
{
cout<<"MOTORBIKE DATA READING";
char c='n';
cin.ignore();
cout<<"\n"<<"Enter the owners name:";
cin.getline(name_b,20);
cout<<"\n"<<"Enter the motorbike company:";
cin.getline(companyb,20);
cout<<"\n"<<"Enter the motorbike number:";
cin>>bike_number;
cout<<"\n"<<"Enter the number of days on rent:";
cin>>number_of_daysb;
cout<<"\n"<<"Enter the Motorbike power (cc):";
cin>>powerb;
cout<<"\n"<<"Enter the motorbike cost:";
cin>>bike_cost;
cout<<"\n"<<"Has an accident been involved? (y/n):";
cin>>c;
if(c=='y'||c=='Y')
{
		calcfineb();
}
else
{
		accident_gradeb='o';
fineb=0;
}
cout<<"\n"<<"MOTORBIKE DATA READING ENDED"<<"\n";
}

void motorbike::calcfineb()
{
	cout<<"\n"<<"MOTORBIKE FINE BEING CALCULATED";
cout<<"\n"<<"Enter the accident grade(s- small accident)(m- medium accident)(b- big accident):";
cin>>accident_gradeb;
int d;
if(strcmp(companyb,"Harley davidson")==0)
	d=10;
else if(strcmp(companyb,"hayabuza")==0)
	d=9;
else if(strcmp(companyb,"honda")==0)
	d=8;
else if(strcmp(companyb,"suzuki")==0)
	d=7;
else if(strcmp(companyb,"red bull")==0)
	d=6;
else if(strcmp(companyb,"mitsubishi")==0)

	d=5;
else if(strcmp(companyb,"lotus")==0)
	d=4;
else if(strcmp(companyb,"pulsar")==0)
	d=3;
else if(strcmp(companyb,"scooter")==0)
	d=2;
	
else
	d=1;

int e;
if((accident_gradeb=='s')||(accident_gradeb=='S'))
{
	e=3;
}
else if((accident_gradeb=='m')||(accident_gradeb=='M'))
{
	e=5;
}
else if((accident_gradeb=='b')||(accident_gradeb=='B'))
{
	e=8;
}
else
{
	e=1;
}
fineb=double(bike_cost*(e/100)*d);
cout<<"\n"<<"MOTORBIKE FINE CALCULATED"<<"\n";
}


void motorbike::totalcostb()
{
	cout<<"\n"<<"TOTAL COST FOR MOTORBIKE BEING CALCULATED";
	//Function to calculate motorbike totalcost
	total_costb=500*number_of_daysb+fineb;
	cout<<"\n"<<"TOTAL COST CALCULATED"<<"\n";
}

void motorbike::displayb()
{
	cout<<"\n"<<"DISPLAYING MOTORBIKE DATA";
cout<<"\n"<<"Name of the owners of the Motorbike:";
puts(name_b);
cout<<"\n"<<"Number of days rented:"<<number_of_daysb;
cout<<"\n"<<"Cost of the motorbike:"<<bike_cost;
cout<<"\n"<<"Motorbike number is:"<<bike_number;
cout<<"\n"<<"The motorbike company is:";
puts(companyb);
cout<<"\n"<<"The motorbike power is:"<<powerb<<" cc";

if(accident_gradeb=='o')
{
cout<<"\n"<<"The owners was not involved in any accident";	
cout<<"\n"<<"fine=0";
}
else
{
cout<<"\n"<<"THE owners WAS INVOLVED IN AN ACCIDENT";
cout<<"\n"<<"THE FINE IS:"<<fineb<<"Rupees";
}
cout<<"\n"<<"The total cost is:"<<total_costb<<"Rupees";
cout<<"\n"<<"END OF MOTORBIKE DATA DISPLAY"<<"\n";
}
class BUS
{
	public:
	int no_of_bus;
	int no_of_daysbus;
void readbus()
{
	cout<<"\n"<<"Enter the number of Buses Rented:";
	cin>>no_of_bus;
	cout<<"\n"<<"Enter the number of days rented:";
	cin>>no_of_daysbus;
cout<<"\n";
}
void displaybus()
{
cout<<"\n"<<"The number of Buses rented is:"<<"\n"<<no_of_bus;
cout<<"\n"<<"The number of days rented is:"<<"\n"<<no_of_daysbus;
}
};

class VAN
{
	public:
	int no_of_van;
int no_of_daysvan;
void readvan()
{
	cout<<"\n"<<"Enter the number of Vans Rented:";
	cin>>no_of_van;
	cout<<"\n"<<"Enter the number of days rented:";
	cin>>no_of_daysvan;
cout<<"\n";
}
void displayvan()
{
cout<<"\n"<<"The number of Vans rented is:"<<"\n"<<no_of_van;
cout<<"\n"<<"The number of days rented is:"<<"\n"<<no_of_daysvan;
cout<<"\n";
}
};

class heavy: public BUS, public VAN
{
	public:
	char name_of_ownersh[20];
	double total_costh;
	void readh();
	void totalcosth();
    void displayh();
};


void heavy::readh()
{
	cout<<"\n"<<"ENTERING THE HEAVY VEHICLE DATA";
cout<<"\n"<<"Enter the name of the heavy vehicle owners:";
cin.ignore();
cin.getline(name_of_ownersh,20);
readbus();
readvan();
totalcosth();
cout<<"\n"<<"END OF HEAVY VEHICLE DATA ENTRY"<<"\n";
}

void heavy::totalcosth()
{
	cout<<"\n"<<"CALCULATING HEAVY VEHICLE TOTALCOST";
total_costh=( no_of_bus*no_of_daysbus*350.5)+( no_of_van*no_of_daysvan*300.2);
cout<<"\n"<<"TOTAL COST CALCULATED"<<"\n";
}

void heavy::displayh()
{
	cout<<"\n"<<"DISPLAYING HEAVY VEHICLE DATA";
cout<<"\n"<<"The name of the owners of the heavy vehicle is:";
puts(name_of_ownersh);
cout<<"\n"<<"The total cost is:"<<total_costh<<" Rupees";
displaybus();
displayvan();
cout<<"\n"<<"END OF HEAVY VEHICLE DISPLAY"<<"\n";
}

struct extrawork
{
float petrol_cost;
float maintenance_cost;
float government_tax;
} ;
int main()
{
	int login();
    login();
	car ca;
	motorbike moto;
int i,j,k;
int L,m,n;
float t1=0,t2=0,t3=0,tot=0;
float total_expenses;
char abc;
cout<<"\t\t\t"<<"*******  WELCOME TO THE PARKING MANAGEMENT SYSTEM    **********";
ofstream fout1;
fout1.open("accc.txt",ios::out|ios::app);
cout<<"\n"<<"How many car records must be entered:"<<"\a";
cin>>i;
cout<<"\n"<<"How many motorbike records must be entered:"<<"\a";
cin>>j;
cout<<"\n"<<"How many heavy vehicle records must be entered:"<<"\a";
cin>>k;
car u[10];
motorbike v[10];
heavy w[10];
L=i;
m=j;
n=k;
fout1.seekp(0);
for(i=0;i<L;i++)


{
	abc='n';
u[i].readc();
u[i].totalcostc();
t1=t1+u[i].total_costc;
getch();
cout<<"\n"<<"Do you want to see the entered car data? (y/n):";
cin>>abc;
if(abc=='y'||abc=='Y')
{
	u[i].displayc();
}
	fout1<<"\n\t\t"<<"DISPLAYING CAR DATA";
fout1<<"\n"<<"Name of the owners of the car:";
fout1<<u[i].name_c;
fout1<<"\n"<<"Number of days rented:"<<u[i].number_of_daysc;
fout1<<"\n"<<"Cost of borrowed car:"<<u[i].car_cost;
fout1<<"\n"<<"Car number is:"<<u[i].car_number;
fout1<<"\n"<<"The car company is:";
fout1<<u[i].companyc;
fout1<<"\n"<<"The car type is:"<<u[i].car_type;
if(u[i].accident_gradec=='o')
{
fout1<<"\n"<<"The owners was not involved in any accident";	
fout1<<"\n"<<"fine=0";
}
else
{
fout1<<"\n"<<"THE owners WAS INVOLVED IN AN ACCIDENT";
fout1<<"\n"<<"THE FINE IS:"<<u[i].finec<<" Rupees";
}
fout1<<"\n"<<"The total cost is:"<<u[i].total_costc<<"Rupees";
}
fout1<<"\nThe total profit on car rent:"<<t1<<"Rupees\n";
fout1.close();

ofstream fout2;
fout2.open("accb.txt",ios::out|ios::app);
for(j=0;j<m;j++)

{
	abc='n';
	v[j].readb();
v[j].totalcostb();
t2=t2+v[j].total_costb;
cout<<"\nDo you want to see the entered motorbike data(y/n):";
cin>>abc;
if(abc=='y'||abc=='Y')
{
	v[j].displayb();
}

fout2<<"\n"<<"DISPLAYING MOTORBIKE DATA";
fout2<<"\n"<<"Name of the owners of the Motorbike:";
fout2<<v[j].name_b;
fout2<<"\n"<<"Number of days rented:"<<v[j].number_of_daysb;
fout2<<"\n"<<"Cost of borrowed motorbike:"<<v[j].bike_cost;
fout2<<"\n"<<"Motorbike number is:"<<v[j].bike_number;
fout2<<"\n"<<"The motorbike company is:";
fout2<<v[j].companyb;
fout2<<"\n"<<"The motorbike power is:"<<v[j].powerb<<" cc";
//Function to display motorbike data
if(v[j].accident_gradeb=='o')
{
fout2<<"\n"<<"The owners was not involved in any accident";	//Function to display car details
fout2<<"\n"<<"fine=0";
}
else
{
fout2<<"\n"<<"THE owners WAS INVOLVED IN AN ACCIDENT";
fout2<<"\n"<<"THE FINE IS:"<<v[j].fineb<<"Rupees";
}
fout2<<"\n"<<"The total cost is:"<<v[j].total_costb<<"Rupees";
}

fout2<<"\nThe total profit on motorbike rent: "<<t2<<"Rupees\n";
fout2.close();
for(k=0;k<n;k++)
//Loop to process heavy vehicle rental data
{
	abc='n';
w[k].readh();
	t3=t3+w[k].total_costh;
cout<<"\nDo you want to see the entered heavy vehicle data(y/n):";
cin>>abc;
if(abc=='y'||abc=='Y')
{
		w[k].displayh();
}
}
cout<<"\nThe total profit on heavyvehicle rent:"<<t3<<"Rupees\n";

extrawork exp;
cout<<"\nENTER THE MONTHLY EXPENSES DATA";
//Entering the business expenses
cout<<"\nEnter the petrol/diesel cost:";
cin>>exp.petrol_cost;
cout<<"\nEnter the maintenance cost:";
cin>>exp.maintenance_cost;
cout<<"\nEnter the government taxloss:";
cin>>exp.government_tax;
tot=t1+t2+t3-(exp.petrol_cost+exp.maintenance_cost+exp.government_tax);
cout<<"\n\aTHE CURRENT MONTHLY PROFIT:"<<tot<<"Rupees\n";
abc='n';
cout<<"\nDo you wish to see the accident records(y/n):";
cin>>abc;
if(abc=='y'||abc=='Y')
{
	ifstream fin1;
	fin1.open("accc.txt",ios::in);
fin1.seekg(0);
while(fin1)
{
	fin1.read((char*)&ca,sizeof(ca));
	ca.displayc();
}
fin1.close();
cout<<"\nAll car accident Records Displayed"<<endl;
ifstream fin2;
fin2.open("accb.txt",ios::in);
fin2.seekg(0);
while(fin2)
{
	fin2.read((char*)&moto,sizeof(moto));
	moto.displayb();
}
fin2.close();
cout<<"\nAll motorbike accident Records Displayed"<<endl;
}
cout<<"\n\nEND OF PROGRAM";
getch();
return(0);
}
int login()
{
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t Enter Password to Login in Parking Management System";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13)
   {
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "Aniket123")
   {
      cout << "\n\n\n\n\t\t\t\t  Access Granted ! Welcome U r eligible to Access now \n\n";
      system("PAUSE");
   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Denied ????? !!!!!! ...Please Try Again!!\n";
      system("PAUSE");
      login();
   }
}

