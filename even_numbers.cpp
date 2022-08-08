# include<iostream>
using namespace std;
int main (){
   int i;
   int sum=0;
   int count=0;
   double Average;

      for( i=2; i<10000;i++){
        if( i % 2==0){
          cout<<i<<endl;
          sum+=i;
          count++;
        }
      }
  Average=sum/count;
  cout<<"the Average of even numbers between 1 and 10000 is "<<Average<<endl;
  return 0;

}