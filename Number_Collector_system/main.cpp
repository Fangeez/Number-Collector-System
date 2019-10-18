#include <iostream>
#include <vector>

using namespace std;



int main() {
    char selection{};
    vector <int> numbers {};
    
    do{
        cout<<"\nP - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"D - Display the sum of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>selection;
        
        if(selection!='p'&&selection!='P'&&selection!='a'&&selection!='A'&&selection!='m'&&selection!='M'&&selection!='s'&&selection!='S'&&selection!='q'&&selection!='Q'&&selection!='L'&&selection!='l'&&selection!='D'&&selection!='d')
            cout<<"\nUnknown selection, please try again"<<endl;
            
        if(selection=='p'||selection=='P'){
            if(numbers.size()==0)
                cout<<"[]- Sorry, the list is empty"<<endl;
            else{
                cout<<"\n[";
                for(auto num:numbers)
                cout<<num<<" ";
                cout<<"]"<<endl;
            }
        }
       else if(selection=='a'||selection=='A'){
           int added_number{};
           cout<<"Please enter a number to add: ";
           cin>>added_number;
           numbers.push_back(added_number);
           cout<<added_number<<" has been added to the list"<<endl;
       }
       else if(selection=='m'||selection=='M'){
           if(numbers.size()==0)
               cout<<"Sorry, there is no data"<<endl;
           else{    
           double sum{};
           for(auto num: numbers)
               sum+=num;
           cout<<"The mean of the numbers on the list is "<<(sum/numbers.size())<<endl; }   
       }            
       else if(selection=='s'||selection=='S')  {
           if(numbers.size()==0)
               cout<<"Sorry, unable to determine the smallest - no data"<<endl;
           else{ 
                int smallest = numbers.at(0);
                for(auto num:numbers){
                    if (num<smallest)
                        smallest=num; }
           cout<<"The smallest number is "<<smallest<<endl;
           }
       }  
       else if(selection=='l'||selection=='L'){
           if(numbers.size()==0)
               cout<<"Sorry, unable to determine the smallest - no data"<<endl;
           else{ 
                int largest = numbers.at(0);
                for(auto num:numbers){
                    if (num>largest)
                        largest=num; }
           cout<<"The largest number is "<<largest<<endl;    
       }
    }
       else if(selection=='d'||selection=='D'){
           if(numbers.size()==0)
               cout<<"Sorry, there is no data"<<endl;
           else{    
           double sum{};
           for(auto num: numbers)
               sum+=num;
           cout<<"The sum of the numbers on the list is "<<sum<<endl; }   
       }            
    }
    while(selection!='q'&&selection!='Q');
    
    if(selection=='q'||selection=='Q')
        cout<<"Goodbye! And thanks for using our service"<<endl;
    
    
    return 0;
}