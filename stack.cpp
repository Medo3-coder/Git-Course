#include<iostream>
#include <typeinfo>
using namespace std;
const int MAX_SIZE = 100 ;
template <class t>
class stack
{
	int top ;
	t item[100] ;
	
	public:
	
	stack()
	{
		top = -1 ;
	}
	
	//to push item into stack 
   void push(t Element)
   { 
	   
	   if(top >= MAX_SIZE - 1)  // 0-99   
	   {
		   cout<<"stack is full on push"<<endl;
	   }
	    else
	    {
	   top++;
	   item[top]= Element ;
        }
	   
   }
   
   //to check if the stack is Empty or no 
   bool isEmpty()
   {
	   if(top== -1 )
	   {
		   return true ;
		}
		else
		{ 
			return false ;
	     }
	     
    }
    //delete item without save the value of item 
    void pop()
    {
		if(isEmpty())
		{ 
			cout<<"stack empty on pop ";
		}
		else 
		{
		  top-- ;
	      }
		
     }
     
     
   //delete item and  save the value of item 

       void pop(t&Element)
    {
		if(isEmpty())
		{ 
			cout<<"stack empty on pop ";
		}
		else 
		{
			//save the item and delete it 
			Element = item[top];
		  top-- ;
	      }
		
     }
     
     
     
     
     // to hold the item on the top of stack
      void getTop(t&stackTop)
    {
		if(isEmpty())
		{ 
			cout<<"stack empty on getTop ";
		}
		else 
		{
			//
			stackTop = item[top];
		  cout<<stackTop<<endl;
	      }
		
     }
     
     
     
     void print ()
 { 
	 cout<<"[";
	 for(int i = 0 ; i < top+1 ; i++)
	 {
		 cout<<item[i]<< " ";
	  }
	  cout<<"]";
	 cout<<endl;
	 }
	
};

int main()
{
	stack <string>s ;
	s.push("A");
	s.push("f");

	s.push("d");
	

	s.print(); 
	
	
}
