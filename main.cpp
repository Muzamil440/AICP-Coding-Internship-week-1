#include<iostream>
#include<string>
using namespace std;

int main()
{   int classSize = 30;
    double initialWeight[classSize] , finalWeight[classSize] , weightDifference[classSize];
    string name[classSize];
    int i;
    
    //Name input
    
    cout<<"Enter the name of the students:\n\n";
    for(i=0; i<classSize; i++){
       cout << "Name of student no "<<i+1<<":";
       cin>>name[i];
    }
    
    //Weight input at the first day of term
    
    cout<<"\nEnter the weights of the students at first day of term:"<<endl<<"Weight should be positive and in kilograms!\n\n";
    for(i=0; i < classSize; i++){
       do{
       cout << "Weight of student no "<<i+1<<":";
       cin>>initialWeight[i];
       
       if(initialWeight[i] < 0){
          cout<<"Error: Weight should be a positive number. Please enter a valid weight."<<endl;
       }
       } while( initialWeight[i] < 0);
    }
    
    //Name and Weight output
    
    cout<<"\nNames and Weights of the students at the first day of term:"<<endl<<endl;
    for(i=0; i < classSize; i++){
       cout<<"Name:"<<name[i]<<"\nWeight:"<<initialWeight[i]<<" kg"<<endl;
    }
    
    //Weight input at the last day of term
    
    cout<<endl<<"Enter the weights of the students at last day of term:"<<endl<<"Weight should be positive and in kilograms!\n\n";
    for(i=0; i < classSize; i++){
       do{
       cout << "Weight of student no "<<i+1<<":";
       cin>>finalWeight[i];
       
       if(finalWeight[i] < 0){
          cout<<"Error: Weight should be a positive number. Please enter a valid weight."<<endl;
       }
       } while( finalWeight[i] < 0);
    }
    
    //Difference calculation
    
    for(i=0; i < classSize; i++){
       weightDifference[i] = finalWeight[i] - initialWeight[i] ;
    }
    
    //Displaying weight difference of each student
    
    cout<<endl<<endl<<"Weight difference of each student:\n\n";
    for(i=0; i < classSize; i++){
       cout<<"Name: "<<name[i]<<endl;
       cout<<"Weight difference: "<<weightDifference[i]<<" kg\n\n";
    }
    
    //Status of students' weight
    
    for(i=0; i<classSize; i++){
    
       cout<<"Difference in "<<name[i]<<"'s initial and final weight is "<<weightDifference[i]<<" kg.";
       if(weightDifference[i] > 2.5){
           cout<<" He/She has a rise in his/her weight.\n\n";
       } 
       else if(weightDifference[i] < -2.5){
           cout<<" He/She has a fall in his/her weight.\n\n";
       }
       else {
          cout<<" He/She has no significant rise or fall in his/her weight.\n\n";
       }
    }
    return 0;
}
