#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i= 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	cin >> grade;
	do{
		cout << "Student [" << i << "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0]++;
		}else if(grade == 'B'){
			count[1]++;// if grade is B
		}else if(grade == 'C'){
			count[2]++;
		}else if(grade == 'D'){
			count[3]++;//and so on ... for grade = C, D, F	
		}else if(grade == 'F'){
			count[4]++;
		}else{
		 	i--;
		 	if(grade == '0')break;
		 	cout << "Wrong Input"<<endl;
			 }
	i++;
	} 
	while(1);
	
	
	cout << endl << "In total " << i << " students." << endl;
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";
		
	return 0;
}
