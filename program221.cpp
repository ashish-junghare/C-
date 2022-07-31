#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class SinglyLL
{
	public:
		struct node<T> *head;
		int Count;

		SinglyLL();
		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T,int);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		void Display();
		int CountNode();

};

template<class T>
SinglyLL<T>::SinglyLL()
{
	head=NULL;
	Count=0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
	struct node<T> *newn;
	newn=new node<T>;

	newn->data=no;
	newn->next=NULL;

	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		newn->next=head;
		head=newn;
	}
	Count++;

}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
	struct node<T> *newn;
	newn=new node<T>;

	newn->data=no;
	newn->next=NULL;

	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		struct node<T> *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
	Count++;

}

template<class T>
void SinglyLL<T>::InsertAtPos(T no,int pos)
{
	int size=0,iCnt=0;
	size=CountNode();
	if(pos<1 || pos>(size+1))
	{
		return;
	}
	else if(pos==1)
	{
		InsertFirst(no);
	}
	else if(pos==(size+1))
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> *temp=head;
		struct node<T> *newn;
		newn=new node<T>;

		newn->data=no;
		newn->next=NULL;
		for(iCnt=1;iCnt<(pos-1);iCnt++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
		Count++;

	}
}


template<class T>
void SinglyLL<T>::DeleteFirst()
{
	struct node<T>* temp=head;
	if(head==NULL)
	{
		return;
	}
	else
	{
		head=temp->next;
		delete(temp);
	}
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
	struct node<T>* temp=head;
	if(head==NULL)
	{
		return;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		delete(temp->next);
		temp->next=NULL;

	}
	Count--;
}


template<class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
	int size=0,iCnt=0;
	size=CountNode();
	if(pos<1 || pos>(size))
	{
		return;
	}
	else if(pos==1)
	{
		DeleteFirst();
	}
	else if(pos==(size))
	{
		DeleteLast();
	}
	else
	{
		struct node<T>* temp=head;
		struct node<T>* tempDelete=NULL;
		for(iCnt=1;iCnt<(pos-1);iCnt++)
		{
			temp=temp->next;
		}
		tempDelete=temp->next;
		temp->next=temp->next->next;
		delete(tempDelete);
		Count--;
	}
}



template<class T>
void SinglyLL<T>::Display()
{
	struct node<T> *temp;
	temp=head;
	cout<<"Element from list is: "<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}


int main()
{
	char iValue='/0';
	int ipos = 0, iRet = 0;
	int iChoice=1;

	SinglyLL<char>sobj;

	while(iChoice != 0)
    {
        cout<<"Enter your choice : "<<endl;
        cout<<"1 : Insert First"<<endl;
        cout<<"2 : Insert Last"<<endl;
        cout<<"3 : Insert at position"<<endl;
        cout<<"4 : Delete First"<<endl;
        cout<<"5 : Delete Last"<<endl;
        cout<<"6 : Delete at position"<<endl;
        cout<<"7 : Display the data"<<endl;
        cout<<"8 : Count number of elements"<<endl;
        cout<<"9 : Terminate the application"<<endl;
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                sobj.InsertFirst(iValue);
                break;

             case 2:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                sobj.InsertLast(iValue);
                break;

             case 3:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                sobj.InsertAtPos(iValue,ipos);
                break;

            case 4:
                sobj.DeleteFirst();
               break;

           case 5:
                sobj.DeleteLast();
               break;

            case 6:
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                sobj.DeleteAtPos(ipos);
                break;

            case 7:
                sobj.Display();
                break;

            case 8:
                iRet = sobj.CountNode();
                cout<<"Number of elements are : "<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank you for using the application"<<endl;
                iChoice = 0;
                break;

			default:
				cout<<"Please enter proper choice\n";
				break;
        }  
	}
	/*
	int iRet=0;
	SinglyLL<int>obj1;
	obj1.InsertFirst(251);
	obj1.InsertFirst(201);
	obj1.InsertFirst(151);
	obj1.InsertFirst(101);
	obj1.InsertFirst(51);

	obj1.InsertLast(301);
	obj1.DeleteFirst();
	obj1.DeleteLast();

	obj1.InsertAtPos(75,3);
	obj1.DeleteAtPos(3);

	obj1.Display();
	iRet=obj1.CountNode();
	cout<<"\nNumber of nodes are: "<<iRet<<endl;

	char cRet='/0';
	SinglyLL<char>obj2;
	obj2.InsertFirst('E');
	obj2.InsertFirst('D');
	obj2.InsertFirst('C');
	obj2.InsertFirst('B');
	obj2.InsertFirst('A');

	obj2.InsertLast('F');

	obj2.DeleteFirst();
	obj2.DeleteLast();

	obj2.InsertAtPos('Z',3);
	obj2.DeleteAtPos(3);

	obj2.Display();
	iRet=obj2.CountNode();
	cout<<"\nNumber of nodes are: "<<iRet<<endl;
	*/

	return 0;
}