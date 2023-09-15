#include<iostream>
#include<string>

using namespace std;
	float num1;
	float num2;

	void add()
	{
		float sum=num1+num2;
		cout<<"The sum is"<<" "<<sum<<"\n";
	
	}
	
	void sub()
	{
		float diff=num2-num1;
		cout<<"The difference is"<<" "<<diff<<"\n";
	}
	
	void mult()
	{
		float prod=num1*num2;
		cout<<"The product is"<<" "<<prod<<"\n";
	}
	
	void div()
	{
		float quot=num2/num1;
		cout<<"The quotient is"<<" "<<quot<<"\n";
	}
	
	
			int main()
			{
			
				int choice;
				
				cout<<"Enter first number:";
				cin>>num1;
				cout<<"Enter second number:";
				cin>>num2;
				
				do
				{
					cout<<"Enter your choice:"<<"\n"<<"1.Addition"<<"\n"<<"2.Subtraction"<<"\n"<<"3.Multiplication"<<"\n"<<"4.Division"<<"\n"<<"5.Exit"<<"\n";
					cin>>choice;
					switch(choice)
					{
							case 1: {
								
							
								if(choice==1)
								{
									add();
										break;
								
								}
							
					}
							case 2:
								{
									if(choice==2)
									{
										sub();
										break;
									}
								}
							case 3:
								{
									if(choice==3)
									{
										mult();
										break;
									}
								}
							case 4:
								{
									if(choice==4)
									{
										div();
										break;
									}
								}
							case 5:
								{
									if(choice==5)
									{
										cout<<"You have exited";
										break;
									}
								}
								
									
						
									
				
				}
			}while(choice!=5);
		}
		
