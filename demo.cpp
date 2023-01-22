

#include<iostream>
#include<conio.h>
#include"mySTL.h"

using namespace std;

int main()
{
    // Single Link List Demo
    cout<< "  SingleLinkList Demo : "<<endl<<endl;
    SingleLinkedList <int> linkedList;
linkedList. insertNelements(5);
linkedList. display();
linkedList.insertAtLast(17);
linkedList.insertAtLast(14);
linkedList.insertAtLast(27);
linkedList.insertAtLast(500);
linkedList.insertAtLast(55);
linkedList.insertAtLast(80);
linkedList. insertAtFirst(200);

    linkedList.insertAfter(453,17);


    linkedList.insertBeforeElement(69,27);

    cout<< "\n After Insertion "<<endl;
    linkedList. display();

    linkedList. deleteFirst();
    linkedList.  deletLast();
    linkedList.  deleteElementByValue(500);

    cout<< "\n After Deletion "<<endl;

    linkedList.  display();
cout<<endl;

//Demo for Double Link List
cout<< "***********************"<<endl;
    cout<< "  DoubleLinkList  Demo: "<<endl<<endl;


     DoubleLinkedList dl;
    int n,i,v;
    cout<<"Enter number of items: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter value: ";
        cin>>v;
        dl.createList(v);
    }
    cout<<"Traversing from First: "<<endl;
    dl.printFromFirst(dl.head);
    cout<<endl;
    cout<<"Traversing from Last: "<<endl;
    dl.printFromLast(dl.tail);
    cout<<endl;
    cout<<"Insertion at First:"<<endl;
    cout<<"Enter value: ";
    cin>>v;
    dl.insertFirst(v);
    dl.printFromFirst(dl.head);

    int x;
   cout<<"\n Insertion at Last:"<<endl;
    cout<<"Enter value: ";
    cin>>x;
    dl.insertLast(x);
     dl.printFromFirst(dl.head);
    cout<<"\n Insertion at Middle:"<<endl;
    cout<<"Enter value: ";
    cin>>x;

     dl.insurtdatamiddle(x);
      dl.printFromFirst(dl.head);


cout<<"\n Deletion 1st && Last :"<<endl;

   dl.deletion1st();
   dl.deleteLastnode();
    dl.printFromFirst(dl.head);

cout<<"\n Deletion Middle :"<<endl;
   dl.deleteMiddle();

cout<<"\n After Deletion Middle :"<<endl;
      dl.printFromFirst(dl.head);



  // Demo for stack

Stack s(5);
s.push(7);
s.push(9);
s.push(70);
s.push(80);
s.push(100);
s.show();
s.pop();
s.pop();
s.pop();
s.show();
//s.Top();


// Demo for Queue


Queue q;


  q.deQueue();

  //enQueue 5 elements
  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5);

  q.enQueue(6);

  q.display();

  q.deQueue();


  q.display();


  // BST Demo

  BST bt;

  bt.root=NULL;
    int z,d;

    cout<<"Enter no of Data: ";
    cin>>z;
    cout<< " Enter the data :" ;

    for(int i=1; i<=z; i++)
    {
        cin>>d;
        if(bt.root==NULL)
        {
            bt.makeRoot(d);
        }
        else
        {
            bt.insertIntoBST(d);
        }
    }


    cout<<" Inorder Traversal: "<<endl;
    bt.displayInorder(bt.root);
    cout<<endl;
    cout<<" Preorder Traversal: "<<endl;
    bt.displayPreorder(bt.root);
    cout<<endl;
    cout<<" Postorder Traversal: "<<endl;
    bt.displayPostorder(bt.root);


    cout<<"\n Enter value to insert: ";
    cin>>z;
    bt.insertNode(z);

    cout<<"\n Enter node to search: ";
    cin>>z;
    bt.searchInBST(z);




    getch();
    return 0;
}



