#include<iostream>
#include<fstream>

using namespace std;

void layemail(int i, string s){
	string data;
	int j,k=i;
	for(j=i;(s[j]!=' ');j--) k--;
	//for(j=k+1;(s[j]!='@');j++) data=data+s[j];
	for(j=k+1;(s[j]!=' ');j++)
	data=data+s[j];
	cout<<data<<endl;
	fstream fo("output.txt",ios::out | ios::app);
	fo << data << endl;
   	fo.close();
   	}
   	
int main(){
  fstream f("input.txt", fstream::in );
    string s;
  getline( f, s, '\0');
  f.close();
  cout << s << endl;
  cout << "============="<<endl;
  int i;
  for(i=0;i<s.length();i++){
  	if (s[i]=='@') {
	layemail(i,s);
}
}
return 0;
}
	
