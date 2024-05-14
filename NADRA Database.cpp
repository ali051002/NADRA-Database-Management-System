#include<iostream>


using namespace std;

struct node
{
	string nm,gen,dob,fname,mname,pob,reg;
	bool nic=false;
	node *link;
};

class list
{
	private:
		node *head, *current, *temp;
		string name;
		bool createe=false;
	
	public:
		
		
	    list()
		{
			head=NULL;
		}
		
		void create()
		{
                createe=true;
				name= "Database";
		
		}
		
		
		
		void insert_end(string n,string ge,string d,string fnam,string mnam,string po,string re)
		{
			if(createe==true)
			{
			if(head==NULL)
			{
				head=new node;
				head->nm=n;
				head->gen=ge;
				head->dob=d;
				head->fname=fnam;
				head->mname=mnam;
				head->pob=po;
				head->reg=re;
				head->link=NULL;
			}
			else
			{
			    current=head;
				while(current->link!=NULL)
				{
				  current=current->link;	
				}
				
				temp=new node;
				temp->nm=n;
				temp->gen=ge;
				temp->dob=d;
				temp->fname=fnam;
				temp->mname=mnam;
				temp->pob=po;
				temp->reg=re;
				temp->link=NULL;
				current->link=temp;	
			}
			}
		    else
		    {
		    	cout<<"Database is Empty"<<endl;
			}
		}
		
		int count()
		{
			int c=0;
			current=head;
			c++;
			while(current->link!=NULL)
			{
				current=current->link;
				c++;
			}
			
			return c;
		}
			
		
	
		
		
		void del_reg(string re)
		{
			if(createe==true)
			{
			bool ch=false;
			current=head;
			int c=1;
			int p=1;
			while(current->link!=NULL)
			{
				
				if(current->reg==re)
				{
				    
					break;
				}
				else
				{
				current=current->link;
				p++;
			    }
			}
			current=head;
			c=1;
			while(current->link!=NULL)
			{
				if(p==1)
				{
			    	head=current->link;
			    	delete current;
			    	ch=true;
					break;	
				}
				
				if(c==(p-1))
				{
				    temp=current->link;
				    current->link=temp->link;
				    delete temp;
				    ch=true;
					break;
				}
				else
				{
				current=current->link;
				c++;
			    }
			}
			if(ch==true)
			{
				cout<<re<<" found and deleted..."<<endl;	
			}
			else
			{
				cout<<re<<" is not in the DataBase."<<endl;
			}
			
		    }
		    else
		    {
		    	cout<<"Database is Empty"<<endl;
			}
		}
		
		
		
		void find_disp(string re)
		{
			if(createe==true)
			{
			
			bool ch=false;
			current=head;
			
			while(current->link!=NULL)
			{
				
				if(current->reg==re)
				{
				    ch=true;
					break;
				}
				else
				{
				current=current->link;
				
			    }
			}
			
			if(current->reg==re)
				{
				    ch=true;
				}
			
			if(ch==true)
			{
				cout<<re<<" found..."<<endl<<endl;
				cout<<"\tName of Child :"<<current->nm<<endl;
				cout<<"\tGender :"<<current->gen<<endl;
				cout<<"\tDate of Birth(dd/mm/yyyy) :"<<current->dob<<endl;
				cout<<"\tFather Name :"<<current->fname<<endl;
				cout<<"\tMother Name :"<<current->mname<<endl;
				cout<<"\tPlace of Birth :"<<current->pob<<endl;
				cout<<"\tReg. No. :"<<current->reg<<endl;
				
			}
			else
			{
				cout<<re<<" is not in the DataBase."<<endl;
			}
		    }
		    else
		    {
		    	cout<<"Database is Empty"<<endl;
			}
		}
		
		void cnic_disp(string re)
		{
			if(createe==true)
			{
			
			bool ch=false;
			current=head;
			
			while(current->link!=NULL)
			{
				
				if(current->reg==re)
				{
				    ch=true;
					break;
				}
				else
				{
				current=current->link;
				
			    }
			}
			
			if(current->reg==re)
				{
				    ch=true;
				}
			
			if(ch==true)
			{
				cout<<re<<" found..."<<endl;
				if(current->nic==true)
				{
				cout<<"\t____________________________________________________"<<endl;
				cout<<"\tPAKISTAN  National Identity Card"<<endl<<endl;
				cout<<"\t----------------------------------------------------"<<endl;
				cout<<"\tName"<<endl;
				cout<<"\t"<<current->nm<<endl;
				cout<<"\t----------------------------------------------------"<<endl;
				cout<<"\tFather's Name"<<endl;
				cout<<"\t"<<current->fname<<endl;
				cout<<"\t----------------------------------------------------"<<endl;
				cout<<"\tGender"<<"\t"<<"\tCountry of Stay"<<endl;
				cout<<"\t"<<current->gen<<"\t"<<"\tPakistan"<<endl;
				cout<<"\t----------------------------------------------------"<<endl;
				cout<<"\tIdentity Number"<<"\t"<<"\tDate of Birth"<<endl;
				cout<<"\t"<<current->reg<<"\t\t\t"<<current->dob<<endl;
				cout<<"\t____________________________________________________"<<endl;
				}
				else
				{
					cout<<"CNIC not issued..."<<endl;
				}
				
				
			}
			else
			{
				cout<<re<<" is not in the DataBase."<<endl;
			}
		    }
		    else
		    {
		    	cout<<"Database is Empty"<<endl;
			}
		}
		
		
		void nic(string re)
		{
			if(createe==true)
			{
			
			bool ch=false;
			current=head;
			
			while(current->link!=NULL)
			{
				
				if(current->reg==re)
				{
				    ch=true;
					break;
				}
				else
				{
				current=current->link;
				
			    }
			}
			
			if(current->reg==re)
				{
				    ch=true;
				}
			
			if(ch==true)
			{
				cout<<re<<" found..."<<endl;
				cout<<"NIC Issued..."<<endl;
				current->nic=true;
				
			}
			else
			{
				cout<<re<<" is not in the DataBase."<<endl;
			}
		    }
		    else
		    {
		    	cout<<"Database is Empty"<<endl;
			}
		}
		
		void del_list()
		{
			if(createe==true)
			{
			    head=NULL;
		    }
		    else
		    {
		    	cout<<"Database is Empty"<<endl;
			}
		}
		
		void print()
		{
			if(createe==true)
			{
			if(head!=NULL)
			{
			current=head;
			cout<<"Names"<<"\t\t"<<"CNICs"<<endl<<endl;
			while(current->link!=NULL)
			{
				cout<<current->nm<<"\t\t"<<current->reg<<endl;
				current=current->link;
			}
			cout<<current->nm<<"\t\t"<<current->reg<<endl;
			}
			else
			{
				cout<<name<<" is empty."<<endl;
			}
			}
		    else
		    {
		    	cout<<"Database is Empty"<<endl;
			}
		}
			
			
};

		void main_menu()
		{
			cout<<"\n\tDeveloper: Ali Sufyan(210891)"<<endl<<endl;
			
			cout<<"\tBSCS                    DSA PROJECT                     "<<endl;
			
			cout<<"\n\t       ******** Computer Science Department ********      "<<endl;
			
			cout<<"\n\t                ******** WELCOME ********      "<<endl;
			
			cout<<"\n\n\t========== NADRA MENU =========="<<endl<<endl;
		

			cout<<"\n\t1.  Initialize Registration\n\n\t2.  Child Registration Certificate\n\n\t3.  National Id. Card Registraion\n\n\t4.  Cancellation Certificate\n\n\t5.  Search/Display Menu\n\n\t6.  Display List of Registries\n\n\t7.  Register Random values\n\n\t8.  Exit"<<endl;
		
		
		}
		
		

int main()
{
	list l1;
	
	int ch;
	char con;
	string user="admin",
	       pass="4321",
	       uuser,
	       ppass;
	
	do
	{
		cout<<"<<<----------NATIONAL DATABASE AND REGISTRATION AUTHORITY---------->>>"<<endl<<endl;
		cout<<"<<<---------------------------ADMIN LOGIN-------------------------->>>"<<endl<<endl<<endl<<endl;
		cout<<"\t-->USER Id :";cin>>uuser;
		cout<<"\t-->PASSWORD  :";cin>>ppass;
		if(uuser==user && ppass==pass)
		{
			cout<<"\nLOGGED IN AS ADMINISTRATOR"<<endl;
			cout<<endl<<"Enter (y) to continue : ";cin>>con;
		}
		else
		{
			cout<<"\nWrong Id or Password"<<endl;
			cout<<endl<<"Enter (y) to enter again : ";cin>>con;
		}
		system("CLS");
	}
	while(uuser!=user || ppass!=pass);
	

		do
		{
			jump:
			system("CLS");
			main_menu();
			
			cout<<"\nEnter your Choice: ";cin>>ch;
			
			
			switch(ch)
			{
				case 1:
					{
						l1.create();
						break;
					}
				
				case 2:
					{
						string nm,gen,dob,fname,mname,pob,reg;
						
						system("CLS");
						cout<<endl<<endl;
						cout<<"\n\n\n\t===== Child Registeration Certificate ====="<<endl;
						cout<<"Enter :"<<endl;
						cout<<"Name of Child :";cin>>nm;
						cout<<"Gender :";cin>>gen;
						cout<<"Date of Birth(dd/mm/yyyy) :";cin>>dob;
						cout<<"Father Name :";cin>>fname;
						cout<<"Mother Name :";cin>>mname;
						cout<<"Place of Birth :";cin>>pob;
						cout<<"Reg. No. :";cin>>reg;
						l1.insert_end(nm,gen,dob,fname,mname,pob,reg);
						
						break;
					}
					
				case 3:
					{
						string no;
						int age;
						char cont;
						system("CLS");
						
						cout<<"\n\n\n\t=====  National Id. Card Registraion ====="<<endl;
						cout<<"Enter B Form No. :";cin>>no;
						cout<<"Enter Age :";cin>>age;
						if(age>=18)
						{
							l1.nic(no);
							cout<<endl<<"Enter (y) to continue : ";cin>>cont;
						}
						else
						{
							cout<<"Age is below 18. CNIC can't be issued"<<endl;
							cout<<endl<<"Enter (y) to continue : ";cin>>cont;
						}
						
						break;	
					}
				
				
				
				case 4:
					{
						char cont;
						string re;
						system("CLS");
					
						cout<<"\n\n\n\t===== Cancellation Certificate ====="<<endl;
						cout<<"Enter CNIC : ";cin>>re;
						l1.del_reg(re);
						cout<<endl<<"Enter (y) to continue : ";cin>>cont;
						
						
						break;	
					}
				
				case 5:
					{
						
						system("CLS");
						
						int ch;
						string re;
						char cont;
						do
						{
							system("CLS");
							cout<<"\n\n\n\t===== Search/Display Menu ====="<<endl;
							cout<<"\n\t1. Display B form "<<endl;
							cout<<"\n\t2. Display CNIC "<<endl;
							cout<<"\n\t3. Back to Main Menu "<<endl;
							cout<<"\n\tEnter your Choice : ";cin>>ch;
							switch(ch)
							{
								case 1:
								{
									cout<<"Enter CNIC: ";cin>>re;
									l1.find_disp(re);
									cout<<endl<<"Enter (y) to continue : ";cin>>cont;
									break;
								}
								
								case 2:
								{
									cout<<"Enter CNIC: ";cin>>re;
									l1.cnic_disp(re);
									cout<<endl<<"Enter (y) to continue : ";cin>>cont;
									break;		
								}
								
								case 3:
								{
									goto jump;	
								}	
						
							}	
						}
						while(ch==1 || ch==2);
						
						
						break;	
					}
				
				case 6:
					{
						char cont;
						system("CLS");
					
						cout<<"\n\n\n\t===== Display List of Registries ====="<<endl;
						l1.print();
						cout<<endl<<"Enter (y) to continue : ";cin>>cont;
						
						
						break;	
					}
					
					
				case 7:
					{
						char cont;
						system("CLS");
						
						string nm[10]={"Ahmed","Shakir","Asghar","Aleena","Rehmat","Faizan","Abdullah","Mahad","Usman","Fareeha"},
							   gen[10]={"MALE","MALE","MALE","FEMALE","MALE","MALE","MALE","MALE","MALE","FEMALE"},
							   dob[10]={"10-05-2000","02-03-2009","11-12-1999","25-02-2002","15-05-1998","05-05-1996","22-09-1995","10-10-2001","11-06-1996","12-07-2000"},
							   fname[10]={"Kashif","Aslam","Farhan","Shan","Mubeen","Kamran","Taimoor","Umer","Adnan","Noman"},
							   mname[10]={"Shazia","Ambreen","Sofia","Farhana","Rehana","Tayyaba","Dua","Laraib","Rabia","Sagheera"},
							   pob[10]={"Karachi","Lahore","Islamabad","Rawalpindi","Lahore","Multan","Peshawar","Faisalabad","Quetta","Kashmir"},
							   reg[10]={"2211","4213","2567","2332","9998","1290","0987","5289","1864","1119"};
						
						for(int i=0;i<10;i++)
						{
							l1.insert_end(nm[i],gen[i],dob[i],fname[i],mname[i],pob[i],reg[i]);
						}
						
						cout<<endl<<"10 Random values Registered..."<<endl;
						cout<<endl<<"Enter (y) to continue : ";cin>>cont;
						
						break;	   	
					}	
				
					
				case 8:
					{
						return 0;
						break;	
					}										
			}
		}
		while(ch>=1 && ch<=8);

	
	return 0;
}














