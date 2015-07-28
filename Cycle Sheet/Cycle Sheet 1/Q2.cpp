/*Q2. Implement Queue ADT(Abstract Data Type) with main ADT functions like enqueue(), dequeue(),
getQueueSize(), isQueueFull(), isQueueEmpty(). Use Structure or Class for defining the ADT. Use Static Array
as a Data Member it can be of any type (Primitive or User-defined).Declare necessary parameters and return
types for the functions

Structure used as ADT.
*/
#include<iostream>
#include<cstdlib>

using namespace std;

struct node{

    int info;

    struct node *next;

};

class Queue{

    private:

        node *rear;

        node *front;

    public:

        Queue();

        void enqueue();

        void dequeue();

        void display();
        
		int isQueueEmpty();
        
        int isQueueFull();

		void size();
};

Queue::Queue(){

    rear = NULL;

    front = NULL;

}

int Queue::isQueueEmpty()
{
	if(front==NULL)
	{
		return 1; // Queue is empty
	}
	else return 0;
}	
void Queue::enqueue(){

    int data;

    node *temp = new node;

    cout<<"Enter the data to enqueue: ";

    cin>>data;

    temp->info = data;

    temp->next = NULL;

    if(front == NULL){

        front = temp;

    }else{

        rear->next = temp;

    }

    rear = temp;

}

void Queue::dequeue(){

    node *temp = new node;

    if(isQueueEmpty()==1){

        cout<<"\nQueue is Emtpty\n";

    }else{

        temp = front;

        front = front->next;

        cout<<"The data Dequeued is "<<temp->info;

        delete temp;

    }

}

void Queue::display(){

    node *p = new node;

    p = front;

    if(isQueueEmpty()==1){

        cout<<"\nNothing to Display\n";

    }else{

        while(p!=NULL){

            cout<<endl<<p->info;

            p = p->next;

        }

    }

}

void Queue::size(){

    node *p = new node;

    p = front;
    
    int counter =0 ;

    if(isQueueEmpty()==1){

        cout<<"\nQueue Size = 0\n";

    }else{

        while(p!=NULL){
        	
			counter ++;
            p = p->next;

        }

    }
	cout<<"\nQueue Size: \n"<<counter;
}

int main(){

    Queue queue;

    int choice;

    while(true){

        cout<<"\n1. Enqueue\n2. Dequeue\n3. Display\n4. Queue Size\n5. Quit";

        cout<<"\nEnter your choice: ";

        cin>>choice;

        switch(choice){

            case 1:

                queue.enqueue();

                break;

            case 2:

                queue.dequeue();

                break;

            case 3:

                queue.display();

                break;
			case 4:
				
				queue.size();
				
				break;
            case 5:

                exit(0);

                break;

            default:

                cout<<"\nInvalid Input. Try again! \n";

                break;

        }

    }

    return 0;

}
