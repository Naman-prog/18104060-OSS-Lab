#include<iostream>
#include<fstream>

using namespace std;
int main(){
	// Writing
	string st = "Naman Mehra";
    ofstream out("sample.txt");
    out<<st; 
    out.close();
    
	
	//Reading 
    string st2;
    ifstream in("Sample2.txt");
//    getline(in,st2);
//    cout<<st2;
    
    while(in.eof()==0){
    	getline(in,st2);
    	cout<<st2<<endl;
	}
    in.close();
    
	
	return 0;
    
}
