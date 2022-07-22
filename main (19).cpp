/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>

using namespace std;


class Customer {
    private:
    string customerName;
    int ArrivalTime;
    int ServiceTime;
    int FinishTime;
    
    public:
        Customer();
    void setCustomer(string Ana, int Bob, int Darcy );
    void displayCustomer();
    void displayTime();
    void displayLeavingTime();
    

};
Customer::Customer(){
    ArrivalTime=0;
    }
void Customer::displayTime(){
    cout<<ArrivalTime<<endl;
}

void Customer::setCustomer(string Ana,int Bob, int Darcy){
     customerName=Ana;
     ArrivalTime=Bob;
     ServiceTime=Darcy;
}
void Customer::displayLeavingTime(){
    cout<<ServiceTime<<endl;
}
void Customer::displayCustomer(){
    cout<<customerName<<endl;
}
class FCFSQueue{
    private:
    Customer CustomerList[100];
    int length;

    public:
    bool isEmpty();
    int GetLength();
    void enqueue(Customer x);
    void dequeue();
    FCFSQueue();
};

FCFSQueue::FCFSQueue(){
 length=0;
    
}

bool FCFSQueue::isEmpty(){
    if(length==0){
    return true;
}
    else{
        return false;
    }
}
void FCFSQueue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Underflow Program Terminated";
    return;
}
cout << "Removing " <<endl;
CustomerList[0].displayCustomer();

for(int i=0;i<length;i++){
    
CustomerList[i]=CustomerList[i+1];

}
length--;
}

void FCFSQueue::enqueue(Customer item)
{
    
if(length>=100)
{
    cout<<"overflow program terminated";
    return;
}
cout<<"Inserting"<<endl;
item.displayCustomer();
item.displayTime();
item.displayLeavingTime();
CustomerList[length]=item;
length++;
}
  
  int FCFSQueue::GetLength(){
      return length;
  }
  
  int main()
  {
      //create a queue of capacity 5
          FCFSQueue q;
 Customer Ana;
 Ana.setCustomer("Ana",2, 4);
 Customer Bob;
 Bob.setCustomer("Bob",3, 5);
 Customer Darcy;
 Darcy.setCustomer("Darcy", 1,6);
 Customer Jonas;
 Jonas.setCustomer("Jonas",2,5);
  Customer Lara;
Lara.setCustomer("Lara",3,6);
 
 
    q.enqueue(Ana);
    q.enqueue(Bob);
    q.enqueue(Darcy);
    q.enqueue(Jonas);
    q.enqueue(Lara);

    cout << "The queue size is " << q.GetLength() << endl;
 
    q.dequeue();
    q.dequeue();
    q.dequeue();
 
    if (q.isEmpty()) {
        cout << "The queue is empty\n";
    }
    else {
        cout << "The queue is not empty\n";
    }
 
    return 0;
}



