#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
	double count=0;
	double mean,sum,sd,sdd;
	string score;
	ifstream source("score.txt");
	while(getline(source,score)){
		sum+=atof(score.c_str());
		sdd+=pow(atof(score.c_str()),2);
		count++;
	}
	mean=(1/count)*sum;
	sd=sqrt((sdd/count)-pow(mean,2));
	cout <<"Number of data = " << count << endl;
	cout <<"Mean = " << mean << endl;
	cout <<"SD = " << sd << endl;
}
