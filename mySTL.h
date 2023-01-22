
using namespace std;
template<typename T>

class SingleLinkedList
{


private:
    typedef class Node
    {

    public:
        T data;
        Node *next;

        Node() {}
        Node(T value)
        {
            data=value;
            next=NULL;

        }


    } * nodePointer;

    nodePointer head = NULL ;

    nodePointer curr = NULL ;

public:


    nodePointer createNode(T value)
    {

        return new Node (value);
    }



    void insertNelements(T n)
    {


        T value;
        cout<< " Insert "<< n << " Elements - " <<endl;

        for( int i=0 ; i < n ; i++ )
        {
            cin >> value;
            nodePointer newnode = createNode(value);
            newnode->next = NULL;
            if(head==NULL)
            {
                head = newnode;
            }
            else
            {
                curr->next = newnode;
            }
            curr = newnode;
        }


    }







    void insertAtLast(T value)
    {

        nodePointer temp = head;

        if(head == NULL)
        {
            head = createNode(value);

            curr = head;
        }


        else
        {

            curr-> next = createNode(value);
            curr= curr->next;
        }
    }




    void insertAtFirst (T value)
    {
        nodePointer newnode = createNode(value);
        newnode->next = head;
        head = newnode;
    }





    void insertBeforeElement(T value, T n)
    {
        nodePointer newnode = createNode(value);
        nodePointer temp = head;
        while(temp->data != n && temp->next !=NULL)
            temp = temp->next;

        if(temp->data==n)
        {
            temp->data= value;
            newnode->data= n;
            newnode->next = temp->next;
            temp->next = newnode;

        }

        else
            cout<< n <<" not found ";

    }



    void insertAfter (T value, T n)
    {
        nodePointer newnode = createNode(value);
        nodePointer temp = head;
        while(temp->data != n && temp->next !=NULL)
            temp = temp->next;
        if(temp->data==n)
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
        else
            cout<< n <<" not found ";
    }





    void deleteFirst()
    {

        nodePointer oldHead =head;
        head = head->next;
        delete oldHead;
    }

    void deletLast()
    {

        nodePointer temp =head,curr;
        while(temp->next->next!=NULL)
            temp=temp->next;
        curr = temp->next;
        temp->next = NULL;
        delete(curr);



    }
    void deleteElementByValue(T p)
    {

        nodePointer temp =head,curr;
        while(temp->next->data != p && temp->next !=NULL)
        {
            temp= temp->next;
        }
        curr = temp->next;
        temp->next = temp->next->next;
        delete(curr);



    }

    void display ()
    {

        nodePointer temp = head;
        while (temp != NULL)
        {

            cout<<temp->data<<" ";

            temp = temp->next;
        }
        cout<<endl;
    }


};



// Double Link List Class


class DoubleLinkedList
{
private:
    typedef class List
{
    public:
    int a;
     List *prev,*next;
}*nodeptr;
public:
nodeptr head=NULL,tail=NULL;
nodeptr ptr;
public:
void createList(int item)
{
   nodeptr node= new List;
   node->a=item;
   node->prev=NULL;
   node->next=NULL;

   if(head==NULL)
   {
       head=node;
    }
   else
   {
       node->prev=ptr;
       ptr->next=node;
    }
    tail=node;
    ptr=node;
}

void printFromFirst(nodeptr p)
{
    while(p!=NULL)
    {
        cout<<p->a<<" ";
        p=p->next;
    }
}

void printFromLast(nodeptr p)
{
    while(p!=NULL)
    {
        cout<<p->a<<" ";
        p=p->prev;
    }
}
void insertFirst(int item)
{
   nodeptr node= new List;
   node->a=item;
   node->prev=NULL;
   node->next=NULL;

   head->prev=node;
   node->next=head;
   head=node;
}
void insurtdatamiddle(int item)
{
    nodeptr node = new List;
    node->a=item;
    node->next=NULL;
    node->prev=NULL;
    int n;
    cout<<"\n After which value you went to insert: ";
    cin>>n;
    nodeptr pq=head, dq;
    while(pq->a!=n&&pq->next!=NULL)
    {
        pq=pq->next;
    }
    dq=pq->next;

    if(pq->a==n)
    {
        pq->next=node;
        node->prev=pq;
        dq->prev=node;
        node->next=dq;
    }
    else
    {
        cout<<"\n Node not found"<<endl;
    }
    cout<<endl;
    cout<<endl;

}

void insertLast(int item)
{
    nodeptr node = new List;
    node->a=item;
    node->next=NULL;
    node->prev=NULL;

    tail->next=node;
    node->prev=tail;
    tail=node;
}

void deletion1st()
{
    nodeptr pq=head;

    head=head->next;
    head->prev=NULL;

    delete pq;


}

void deleteLastnode()
{
    nodeptr pw=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete pw;

}

void deleteMiddle()
{
    nodeptr pu=head,dq,cu;
    int v;
    cout<<"  which node you went to delete: ";
    cin>>v;
    while(pu->next->a!=v&&pu->next!=NULL)
    {
        pu=pu->next;
    }
    if(pu->next->a==v)
    {
        dq=pu->next;
        pu->next=pu->next->next;
        cu=dq->next;
        delete dq;
        cu->prev=pu;
    }
    else
    {
        cout<<" Node not Found "<<endl;
    }

}



};


// Demo for Stack





class Stack
{
    private:
    int *datas;
    int maxSize=0;
    int top=0;

    public:
    Stack(int maxSize)
    {
        this->maxSize=maxSize;
        datas=new int[maxSize];
    }
    bool isFull()
    {
        //!(maxSize==top);
        return (top==maxSize);

    }
    bool isEmpty()
    {
        return (top==0);
    }
    void push(int num)
    {
        if(!isFull())
        {
            datas[top]=num;

            cout<<datas[top]<<" is pushed"<<endl;

            top++;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    int topElement()
    {
        return datas[top-1];
         cout<<datas[top];
    }

        void pop()
        {
        if(!isEmpty())
        {
            --top;
            cout<<datas[top]<<" is poped"<<endl;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
        }
        }
void Top()
{
    cout<<"Top element= "<<datas[top]<<endl;
}

        void show()
{
    int i;
    for(i=top-1;i>=0;i--)
    {
        cout<<datas[i]<<" ";
    }
    cout<<endl;
}

};

// Demo For Queue
#define SIZE 5
class Queue {

   private:
  int items[SIZE], front, rear;

   public:
  Queue() {
    front = -1;
    rear = -1;
  }

  bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    return false;
  }

  bool isEmpty() {
    if (front == -1)
      return true;
    else
      return false;
  }

  void enQueue(int element) {
    if (isFull()) {
      cout << "Queue is full";
    } else {
      if (front == -1) front = 0;
      rear++;
      items[rear] = element;
      cout << endl
         << "Inserted " << element << endl;
    }
  }

  int deQueue() {
    int element;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
      return (-1);
    } else {
      element = items[front];
      if (front >= rear) {
        front = -1;
        rear = -1;
      }
      else {
        front++;
      }
      cout << endl
         << "Deleted -> " << element << endl;
      return (element);
    }
  }

  void display() {
    /* Function to display elements of Queue */
    int i;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << endl
         << "Front index-> " << front;
      cout << endl
         << "Items -> ";
      for (i = front; i <= rear; i++)
        cout << items[i] << "  ";
      cout << endl
         << "Rear index-> " << rear << endl;
    }
  }
};


// BST Function


class BST {

typedef class tree
{
    public:
    int data;
     tree *left, *right;
}*node;
public:
node root, ptr;
public:
void makeRoot(int item)
{
    root=new tree;
    root->data=item;
    root->left=NULL;
    root->right=NULL;
}

void insertIntoBST(int item)
{
    node np=new tree;
    np->data=item;
    np->left=NULL;
    np->right=NULL;

    ptr=root;
    while(ptr!=NULL)
    {
        if(ptr->data==item)
        {
            cout<<"Duplicate value not inserted"<<endl;
            break;
        }
        else if(ptr->data>item)
        {
            if(ptr->left==NULL)
            {
                ptr->left=np;
                break;
            }
            else
            {
                ptr=ptr->left;
            }
        }
        else if(ptr->data<item)
        {
            if(ptr->right==NULL)
            {
                ptr->right=np;
                break;
            }
            else
            {
                ptr=ptr->right;
            }
        }
    }
}

void displayInorder(node p)
{
    if(p!=NULL)
    {
        displayInorder(p->left);
        cout<<p->data<<" ";
        displayInorder(p->right);
    }
}

void displayPreorder(node p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        displayPreorder(p->left);
        displayPreorder(p->right);
    }
}

void displayPostorder(node p)
{
    if(p!=NULL)
    {
        displayPostorder(p->left);
        displayPostorder(p->right);
        cout<<p->data<<" ";
    }
}

void insertNode(int item)
{
    insertIntoBST(item);
    cout<<"Inorder Traversal: "<<endl;
    displayInorder(root);
}

void searchInBST(int item)
{
    ptr=root;
    while(ptr!=NULL)
    {
        if(ptr->data==item)
        {
            cout<<"Found"<<endl;
            break;
        }
        else if(ptr->data>item)
        {
            if(ptr->left==NULL)
            {
                cout<<"Not Found"<<endl;
                break;
            }
            else
            {
                ptr=ptr->left;
            }
        }
        else if(ptr->data<item)
        {
            if(ptr->right==NULL)
            {
                cout<<"Not Found"<<endl;
                break;
            }
            else
            {
                ptr=ptr->right;
            }
        }
    }

}




};





