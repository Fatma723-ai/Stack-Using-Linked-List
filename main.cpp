#include<bits/stdc++.h>

using namespace std;
class node
{
    public:
    int date;
    node *next ;
   node()
   {
       date=0;
       next = NULL;
   }
};
class Stack
{
    node *top;
public :
    Stack()
    {
        top = NULL;
    }
    bool isempty()
    {
        return top== NULL;
    }
    bool isfull()
    {
        node *ptr= new node;
        if (ptr == NULL)
        {
            cout<<"The Stack Is Full"<<endl;
        }
    }
    void push(int item)
    {
      if ( isempty())
      {
          node *newnode = new node;
          newnode->date = item;
          newnode->next  =NULL;
          top = newnode;
      }else
      {
          node *newnode = new node;
          newnode->date = item;
             newnode->next = top;
               top = newnode;
      }
    }
    int pop ()
    {
        int value;
      node *delptr=top;
      value = top->date;
      top = top->next;
      delete delptr;
      return value;
    }
    int peek()
    {
        return   top->date;
    }

    void display()
    {
            node *temp =top;
            while(temp != NULL)
            {
            cout<<temp->date<<" ";
          temp = temp->next;
            }
            cout<<endl;
    }
       int Count()
    {
        int counter=0;
            node *temp =top;
            while(temp != NULL)
            {
          counter++;
          temp = temp->next;
            }
          return counter;
    }
    bool isfound(int item)
    {
    bool found= false;
      node *temp = top;
      while(temp != NULL)
      {
          if(temp->date == item)
            found = true;

          temp = temp->next;
      }
      return found;
    }

};
int main()
{
    int item;
    Stack s;
    for (int i=0; i<3; i++)
    {
           cout <<"Enter Item to push"  << endl;
           cin >>item;
           s.push(item);
           s.display();
    }
    /*
 cout<<s.pop()  <<" Was Deleted From Stack "<<endl;
     s.display();
 cout<<s.pop()<<"Was Deleted From Stack "<<endl;
     s.display();
     */
     cout<<"Enter Item for Search for"<<endl;
     cin>>item;
   if  ( s.isfound(item))
   {
       cout<< "Is Found"<<endl;
   } else
   {
         cout<< "Is Not Found"<<endl;
   }
   cout <<"Count= "<<s.Count()<<endl;
    return 0;
}
