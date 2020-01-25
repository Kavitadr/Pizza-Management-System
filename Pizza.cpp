#include<iostream>
//#include<stdlib>
using namespace std;

class pizza
{
        int front,rear,q[5];	
int no;
int static sum;
        public:
                pizza()
                {
  	                front=-1;
  	                rear=-1;
                }
 
                int isfull()
                {
                        if((front==0&&rear==4)||front==rear+1)
                        {
  		                return 1;
                        }
                        else
                        {
   		                return 0;
                        }
                }      
 
                int isempty()
                {
                        if(front==-1&&rear==-1)
                        {
   	                        return 1;
                        }
                        else
                        {
   	                        return 0;
                        }
                }
 
                void add()
                {
  	                if(isfull()==0)
  	                {
  	 	                cout<<"\n WHICH PIZZA DO YOU WANT: ";
                
  	 	                if(front==-1&&rear==-1)
  	 	                {
  	  		                front=0;
  	  		                rear=0;
  	  		                cin>>q[rear];
  	 	                }
  	 	                else
  	 	                {
  	   		                rear=(rear+1)%5;
  	   		                cin>>q[rear];
  	 	                }
                               cout<<"\n ";

                               if(q[rear]==1)
                                {
                                   sum=sum+100;
                                }
                                else if(q[rear]==2)
                                 {
                                    sum=sum+150;
                                  }
                                 else if(q[rear]==3) 
                                 {
                                     sum=sum+200;
                                  }
                                   else if(q[rear]==4) 
                                 {
                                     sum=sum+250;
                                  } 
                                  else if(q[rear]==5) 
                                 {
                                     sum=sum+300;
                                  } 
                                  else if(q[rear]==6) 
                                 {
                                     sum=sum+350;
                                  }
                                   else if(q[rear]==7) 
                                 {
                                     sum=sum+400;
                                  }
                                   else if(q[rear]==8) 
                                 {
                                     sum=sum+450;
                                  }
                                   else if(q[rear]==9) 
                                 {
                                     sum=sum+500;
                                  }
                                   else if(q[rear]==10) 
                                 {
                                     sum=sum+550;
                                  }
                                   else if(q[rear]==11) 
                                 {
                                     sum=sum+600;
                                  }
                                 else
                                   {
                                      cout<<"YOUR ORDER IS NOT AVAILABLE";
                                   }   
   		                char c;
 		                cout<<" \n DO YOU WANT TO ORDER ANY OTHER PIZZA ? ";
   		                cin>>c;
   		                if(c=='y'||c=='Y')
  	 	                add();
  	                }//close if
  	                else
  	                {
  	 	                cout<<"\nORDERS ARE FULL ";
  	                }
  	
                }//fun close
 
                void serve()
                {
  	                if(isempty()==0)
  	                {
  	 	                if(front==rear)
  	 	                {
  	 	 	                cout<<"\nORDER SERVED IS : "<<q[front];
  	 	 	                front=-1;
  	 	 	                rear=-1;
  	 	                }
  	 	                else
  	 	                {
  	 	 	                cout<<"\n ORDER SERVED IS  : "<<q[front];
  	 	 	                front=(front+1)%5;
  	 	                }
  	                }
  	                else
  	                {
  	 	                cout<<" \nNO ORDERS ";
  	                }
                }
 
                void display()
                {
  	                if(isempty()==0)
  	                {
				for(int i=front;i!=rear;i=(i+1)%5)
				{
					cout<<"\n"<<q[i]<<" <- ";
				}
				cout<<"\n"<<q[rear];
				cout <<"TOTAL PRICE:"<<sum;
			}
			else
			{
				cout<<"\n NO ORDERS";
			}
		}

		void check()
		{
			int ch;
			cout<<"\n\t******* WELCOME TO PIZZAINN *******\n";
			cout<<endl<<"----------- MENU CARD-------------";
	     cout<<endl<<"NAME:: ..................... PRICE::";
	     cout<<endl<<"1. MARGHERITA ................100/-";
	     cout<<endl<<"2. DOUBLE CHEESE MARGHERITA ..150/-";
	     cout<<endl<<"3. CHEESE AND CORN ...........200/-";
	     cout<<endl<<"4. VEGGIE PARADISE ...........250/-";
	     cout<<endl<<"5. MEXICAN GREEN WAVE ........300/-";
	     cout<<endl<<"6. PEPPY PANEER ..............350/-";
	     cout<<endl<<"7. GOURNET ...................400/-";
	     cout<<endl<<"8. CHEESE AND TOMATO .........450/-";
	     cout<<endl<<"9. FRESH VEGGIE ............. 500/-";
	     cout<<endl<<"10. DELUXE VEGGIE ............550/-";
	     cout<<endl<<"11. 5 PEPPER..................600/-" ;
	     cout<<endl<<"_____________________________________________________";
	     cout<<endl<<"_____________________________________________________";
	     cout<<endl<<endl<<"1. PLACE YOUR ORDER ";
	     cout<<endl<<"2. DISPLAY NO. OF ORDERS NOTED AND THEIR BILL";
	     cout<<endl<<"3. MAKE PAYMENT";
	     cout<<endl<<"4. EXIT";
	     cout<<endl<<"ENTER YOUR CHOICE : ";
			cin>>ch;
			switch(ch)
			{
				case 1:
					add();
					break;

				case 2:
					display();
					break;

				case 3:
					serve();
					break;

				case 4:
					exit(0);

				default:
					cout<<"\n INVALID CHOICE ";
					check();
			}
			char ch1;
			cout<<"\n DO YOU WANT TO  CONTINUE? ";
			cin>>ch1;
			if(ch1=='y'||ch1=='Y')
			check();
			else
			cout<<"THANKYOU!!........VISIT AGAIN";

	       }
};
 int pizza:: sum=0;

 int main()
 {
	pizza p1;
	p1.check();
	return 0;
 }

