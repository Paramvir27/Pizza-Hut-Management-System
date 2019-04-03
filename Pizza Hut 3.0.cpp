//PIZZA HUT MANAGEMENT SYSTEM

	// PARAMVIR SINGH
	// 11702998 - K17EC
	// Open in DEV C++
	
#include<iostream>
#include<conio.h>
#include<fstream>

	using namespace std;
	
void hr()
{
		int g,h;
		g=178;
		printf("\n");
		for(h=1;h<=42;h++)
		printf("%c",g);
		for(h=1;h<=10;h++)
		printf("%c",177);
		for(h=1;h<=10;h++)
		printf("%c",182);
		for(h=1;h<=18;h++)
		printf("%c",219);
		printf("\n");
	
}

	class pizza
	{
		public:
		string name;
		string type;
		string cname;
		string mob;
		int cost;
		int quantity;
		int total;
		int order;
		
		public:
		int display(int c);
		int bill(int c);
		pizza()
		{
		order=100;	
		}
	}p[100];	
	
	int pizza::display(int c)
	{
			int i;
			i=c;
			cout<<i+1<<"."<<p[i].name;
			cout<<"\t"<<p[i].type;
			cout<<"\t"<<p[i].cost;
			cout<<"\t"<<p[i].quantity;
			cout<<"\t\t"<<p[i].total<<"\n ";
			
	}
	
	int pizza::bill(int c)
	{
		int i,j,tb;
		tb=0;
		i=c;
		hr();
		cout<<"\n\n______________________________________________________________________________\n";
		cout<<"\n\n CUSTOMER NAME = "<<cname;
		cout<<"\n\n MOBILE NUMBER = "<<mob;
		cout<<"\n\n ORDER ID = "<<order<<"\n\n";
		cout<<"\n________________________________\n";
		cout<<"\nNo. NAME\t\t\t\tTYPE\tCOST\tQUANTITY\tTOTAL\n\n ";
		for(j=0;j<=i-1;j++)
		{
			p[j].display(j);
			tb=tb+p[j].total;
		}
		cout<<"\n________________________________\n";
		cout<<"\n\n GST 18%    = "<<"Rs "<<tb*0.18;
		cout<<"\n\n TOTAL BILL = "<<"Rs "<<tb+tb*0.18<<"\n\n";
		cout<<" PRESS ANY KEY IF CUSTOMER PAYED THE BILL \n\n";
		
		
		ofstream f1;
		f1.open("pizzaRecords.txt",ios::app);
		f1<<"______________________________________________________________________________\n";
		f1<<"\n CUSTOMER NAME = "<<cname;
		f1<<"\n MOBILE NUMBER = "<<mob;
		f1<<"\n ORDER ID = "<<order<<"\n";
		f1<<"\nNo. NAME\t\t\t\tTYPE\tCOST\tQUANTITY\tTOTAL\n ";
		for(j=0;j<=i-1;j++)
		{
			f1<<j+1<<"."<<p[j].name;
			f1<<"\t"<<p[j].type;
			f1<<"\t"<<p[j].cost;
			f1<<"\t"<<p[j].quantity;
			f1<<"\t\t"<<p[j].total<<"\n ";
		}
	
		f1<<"\n GST 18%    = "<<"Rs "<<tb*0.18;
		f1<<"\n TOTAL BILL = "<<"Rs "<<tb+tb*0.18<<"\n\n";
		f1<<"______________________________________________________________________________\n";
		f1.close();
		order++;
	}
	
	
	
	int main()
	{
	
		hr();
		cout<<"\n\n**************************** PIZZA HUT LOGIN ACCESS ****************************\n\n ";
			uptop:
	
		string username,password;
		printf("\t%c ENTER USERNAME : ",219);
		cin>>username;	
		printf("\n\t%c ENETR PASSWORD : ",177);
		cin>>password;
		if((username=="11702998")&&(password=="27"))
		{
		cout<<"\n__________________________________________\n\n";
		start:
		hr();
		cout<<"\n\n WELCOME TO YUMMY PIZZA HUT \n ";
		cout<<"\n__________________________________________\n";
		
		int ch,i,m,n,nq,pcost;
		ifstream f2;
		i=0;
		m=0;
			int z;
			z=500;
			char line[z];
		string pname,ptype,cusname,mobno;
		
		cout<<"\n\n 1. ORDER PIZZAS ";
		cout<<"\n\n 2. FULL ORDER DIRECTORY ";
		cout<<"\n\n 3. PIZZAS RATE LIST ";
		cout<<"\n\n 4. EXIT";
		cout<<"\n\n__________________________________________\n";
		cout<<"\n\n ENTER YOUR CHOICE  ";
		cin>>ch;
		hr();
		switch(ch)			// MAIN MENU SWITCH CASE
		{
		case 1:
			int choice;
			
			ptype:	
			cout<<"\n\n SELECT PIZZA TYPE :";	
			cout<<"\n\n__________________________________________\n";
			cout<<"\n\n 1. MARGHERITA ";
			cout<<"\n\n 2. SPICY TRIPLE TANGO ";
			cout<<"\n\n 3. DOUBLE CHEESE MARGHERITA ";
			cout<<"\n\n 4. FARM HOUSE ";
			cout<<"\n\n 5. RETURN TO PREVIOUS MENU ";
			cout<<"\n\n__________________________________________\n";
			cout<<"\n\n ENTER YOUR CHOICE  ";
			cin>>choice;
			hr();
			
			switch(choice)		// PIZZA CHOICE SWITCH CASE
			{
				case 1:
					sizetype:		// MARGHERITA PIZZA
					int size;
					cout<<"\n\n - - MARGHERITA PIZZA SIZE ??";
					cout<<"\n\n__________________________________________\n";
					cout<<"\n\n 1. SMALL ";
					cout<<"\n\n 2. MEDIUM ";
					cout<<"\n\n 3. LARGE ";
					cout<<"\n\n 4. RETURN TO PREVIOUS MENU ";
					cout<<"\n\n__________________________________________\n";
					cout<<"\n\n ENTER YOUR CHOICE  ";
					cin>>size;
					hr();
					switch(size)
					{
						case 1:			//SMALL PIZZA MARGHERITA
						pcost=100;
						pname="MARGHERITA PIZZA              ";
						ptype="SMALL";
						goto pizzaend;
						break;
						
						case 2:			//MEDIUM PIZZA MARGHERITA
						pcost=150;
						pname="MARGHERITA PIZZA              ";
						ptype="MEDIUM";
						goto pizzaend;
						break;
						
						case 3:			//LARGE PIZZA MARGHERITA
						pcost=200;
						pname="MARGHERITA PIZZA               ";
						ptype="LARGE";
						goto pizzaend;
						break;
						
						case 4:			// RETURN TO ALL PIZZA MENU
						goto ptype;
						break;
						
						default:
						cout<<"\n\nINVALID CHOICE\n";
						hr();	
						goto sizetype;
							
					}
					break;
					
				case 2:						// SPICY TRIPLE TANGO
					sizetype2:
					cout<<"\n\n - - SPICY TANGO PIZZA SIZE ??";
					cout<<"\n\n__________________________________________\n";
					cout<<"\n\n 1. SMALL ";			
					cout<<"\n\n 2. MEDIUM ";
					cout<<"\n\n 3. LARGE ";
					cout<<"\n\n 4. RETURN TO PREVIOUS MENU ";
					cout<<"\n\n__________________________________________\n";
					cout<<"\n\n ENTER YOUR CHOICE  ";
					cin>>size;
					hr();
					switch(size)
					{
						case 1:			//SMALL SPICY TANGO PIZZA
						pcost=150;
						pname="SPICY TANGO PIZZA             ";
						ptype="SMALL";
						goto pizzaend;
						break;
						
						case 2:			//MEDIUM SPICY TANGO PIZZA
						pcost=200;
						pname="SPICY TANGO PIZZA             ";
						ptype="MEDIUM";
						goto pizzaend;
						break;
						
						case 3:			//LARGE SPICY TANGO PIZZA
						pcost=250;
						pname="SPICY TANGO PIZZA              ";
						ptype="LARGE";
						goto pizzaend;
						break;
						
						case 4:			// RETURN TO ALL PIZZA MENU
						goto ptype;
						break;
						
						default:
						cout<<"\n\nINVALID CHOICE\n";
						hr();	
						goto sizetype2;
							
					}
					break;
					
				case 3:						// DOUBLE CHEESE MARGHERITA PIZZA
					sizetype3:
					cout<<"\n\n - - DOUBLE CHEESE MARGHERITA PIZZA SIZE ??";
					cout<<"\n\n__________________________________________\n";
					cout<<"\n\n 1. SMALL ";
					cout<<"\n\n 2. MEDIUM ";
					cout<<"\n\n 3. LARGE ";
					cout<<"\n\n 4. RETURN TO PREVIOUS MENU ";
					cout<<"\n\n__________________________________________\n";
					cout<<"\n\n ENTER YOUR CHOICE  ";
					cin>>size;
					hr();
					switch(size)
					{
						case 1:			//SMALL DOUBLE CHEESE MARGHERITA PIZZA
						pcost=200;
						pname="DOUBLE CHEESE MARGHERITA PIZZA";
						ptype="SMALL";
						goto pizzaend;
						break;
						
						case 2:			//MEDIUM DOUBLE CHEESE MARGHERITA PIZZA
						pcost=250;
						pname="DOUBLE CHEESE MARGHERITA PIZZA";
						ptype="MEDIUM";
						goto pizzaend;
						break;
						
						case 3:			//LARGE DOUBLE CHEESE MARGHERITA PIZZA
						pcost=300;
						pname="DOUBLE CHEESE MARGHERITA PIZZA";
						ptype="LARGE";
						goto pizzaend;
						break;
						
						case 4:			// RETURN TO ALL PIZZA MENU
						goto ptype;
						break;
						
						default:
						cout<<"\n\nINVALID CHOICE\n";
						hr();	
						goto sizetype3;
							
					}
					break;
					
				case 4:			// FARM HOUSE PIZZA
					sizetype4:
					cout<<"\n\n - - FARM HOUSE PIZZA SIZE ??";
					cout<<"\n\n__________________________________________\n";
					cout<<"\n\n 1. SMALL ";
					cout<<"\n\n 2. MEDIUM ";
					cout<<"\n\n 3. LARGE ";
					cout<<"\n\n 4. RETURN TO PREVIOUS MENU ";
					cout<<"\n\n__________________________________________\n";
					cout<<"\n\n ENTER YOUR CHOICE  ";
					cin>>size;
					hr();
					switch(size)
					{
						case 1:			//SMALL FARM HOUSE PIZZA
						pcost=250;
						pname="FARM HOUSE PIZZA              ";
						ptype="SMALL";
						goto pizzaend;
						break;
						
						case 2:			//MEDIUM FARM HOUSE PIZZA
						pcost=300;
						pname="FARM HOUSE PIZZA              ";
						ptype="MEDIUM";
						goto pizzaend;
						break;
						
						case 3:			//LARGE FARM HOUSE PIZZA
						pcost=400;
						pname="FARM HOUSE PIZZA              ";
						ptype="LARGE";
						goto pizzaend;
						break;
						
						case 4:			// RETURN TO ALL PIZZA MENU
						goto ptype;
						break;
						
						default:
						cout<<"\n\nINVALID CHOICE\n";
						hr();	
						goto sizetype4;
							
					}
					break;
					
				case 5:		// RETURN TO MAIN MENU
					goto start;
					break;
					
				default:
					cout<<"\n\nINVALID CHOICE\n";
					hr();
					goto ptype;
					
			}
			pizzaend:
			int quantity;
			cout<<"\n\n ENTER QUANTITY = ";
			cin>>quantity;
			cout<<"\n\n______________________________________________________________________________\n";
			p[i].cost=pcost;
			p[i].quantity=quantity;
			p[i].name=pname;
			p[i].total=pcost*quantity;
			p[i].type=ptype;
			cout<<"\nNo. NAME\t\t\t\tTYPE\tCOST\tQUANTITY\tTOTAL\n\n ";
			
			for(i=0;i<=m;i++)
			{
			p[i].display(i);
			}
			m++;
			break;
			
 //__________________________________________________________________________________________________			
		
			case 2:
			f2.open("pizzaRecords.txt");
			while(f2)
			{
			f2.getline(line,z);
			cout<<line<<"\n";
			}
			f2.close();
			cout<<"\n PRESS ANY KEY \n";
			getch();
			goto start;
			break;
			
//__________________________________________________________________________________________________		

			
			case 3:
				cout<<"\nNo. NAME \t\t\tSMALL\t\tMEDIUM\t\tLARGE\n";
				cout<<"\n 1. MARGHERITA \t\t\tRs 100\t\tRs 150\t\tRs 200\n";
				cout<<"\n 2. SPICY TANGO \t\tRs 150\t\tRs 200\t\tRs 250\n";
				cout<<"\n 3. DOUBLE CHEESE MARGHERITA\tRs 200\t\tRs 250\t\tRs 300\n";
				cout<<"\n 4. FARM HOUSE \t\t\tRs 250\t\tRs 300\t\tRs 400\n";
				cout<<"\n\n PRESS ANY KEY \n";
				getch();
				goto start;
				break;
				
			case 4:
				cout<<"\n ENTER ANY KEY \n";
				goto end;
				break;
				
			default:
				cout<<"\n INVLAID CHOICE \n";
				goto start;
		}
		up:
		cout<<"\n\n______________________________________________________________________________\n";
		cout<<"\n\n 1. ADD ITEM ";
		cout<<"\n\n 2. CHANGE QUANTITY ";
		cout<<"\n\n 3. PAY BILL ";
		cout<<"\n\n 4. CANCEL ORDER";
		cout<<"\n\n__________________________________________\n";
		cout<<"\n\n ENTER YOUR CHOICE  ";
		cin>>ch;
		hr();
		switch(ch)
		{
			case 1:
			goto ptype;				// ADD ITEM 
			break;
			
			case 2:					// Change QUANTITY
			cout<<"\n ENTER ITEM NO. = ";
			cin>>n;
			if(n>i)
			{
				cout<<"\n ITEM NOT FOUND";
				goto up;
			}
			cout<<" ENETR NEW QUANTITY = ";
			cin>>nq;
			p[n-1].quantity=nq;
			p[n-1].total=nq*p[n-1].cost;
			cout<<"\n\n______________________________________________________________________________\n";
			cout<<"\nNo. NAME\t\t\t\tTYPE\tCOST\tQUANTITY\tTOTAL\n\n ";
			
			for(i=0;i<=m-1;i++)
			{
			p[i].display(i);
			
			}
			goto up;
			break;
			
			case 3:		// PAY BILL
			cout<<"\n\n ENTER CUSTOMER NAME = ";
			cin>>cusname;
			cout<<"\n ENTER MOBILE NUMBER = ";
			cin>>mobno;
			p[i].cname=cusname;
			p[i].mob=mobno;
			p[i].bill(i);
			getch();
			goto start;
			break;
			
			case 4:
			goto start;
			break;
			
			default:
			cout<<"\n\nINVALID CHOICE\n";
			hr();
			goto up;
			
		}
		end:
		getch();
	}
	else
	{
		cout<<"\n\n\t --- WRONG USERNAME --- \n\n";
		cout<<"\n__________________________________________\n\n\n";
		goto uptop;
	}
	}
