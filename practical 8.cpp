#include<iostream>
using namespace std;

class student
{

	
		public:
		class result
		{
			 int maths,oops,sst;
			 int result;
			 public:
			 	void fun2()
			 	{
				 
			cout<<"THE MARKS OF STUDENT IN \n 1=MATHS\n 2=OOPS\n 3=SST"<<endl;
			cin>>maths>>oops>>sst;
			result=maths+oops+sst;
			cout<<endl<<endl;
			cout<<"RESULT OF STUDENT="<<result<<endl<<endl;
			
		    }
		};
		
		
		result obj3;
		
		public:
	void getdata()
	{
		cout<<"ENTER YOUR MARKS \n";
		obj3.fun2();
	}
		
	
		public:
			
				class address
				{
					  public:
				char home[10];
			
			 public:
			 void fun3()
			 {
			 	cout<<"enter your address=";
			 	cin>>home;
			 	cout<<endl<<endl;
			 	cout<<"ADDRESS OF STUDENT="<<home;
		    }
				
			};
			
			address obj5;
			void fun4()
			{
				obj5.fun3();
				
			}
				
		
	
		
};

int main()
{
	student obj9;
	student obj1;
	
	obj9.getdata();
	obj1.fun4();
}
