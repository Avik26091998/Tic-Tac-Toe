#include <iostream> 
using namespace std;
char ch='x',r;
int i,j,n=0;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
bool play=true;
void draw()
{
	system("CLS");
	cout<<"TIC-TAC-TOE!!!   version-0.1  \n";
	cout<<"------------------------------\n";
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j){
		   if(j!=2) cout<<matrix[i][j]<<" | ";
		   else cout<<matrix[i][j];	
		}
		cout<<"\n";
		if(i!=2) cout<<"----------"; 
	    cout<<"\n";
	}
}
void input()
{
	int a;
	cout<<"Enter The Field To Be Entered (Between 1 and 9) :- ";
	cin>>a;
	if(a==1) {
		if(matrix[0][0]=='1') matrix[0][0]=ch;
		else {
		    cout<<"Field Already Filled\n";
			input();
		}
		
	}
	else if(a==2) {
		if(matrix[0][1]=='2') matrix[0][1]=ch;
		else {
		    cout<<"Field Already Filled\n";
			input();
		}
	}
	else if(a==3) {
		if(matrix[0][2]=='3') matrix[0][2]=ch;
		else {
		    cout<<"Field Already Filled\n";
			input();
		}
	} 
	else if(a==4) {
		if(matrix[1][0]=='4') matrix[1][0]=ch;
		else {
		    cout<<"Field Already Filled\n";
			input();
		}
	}
	else if(a==5){
		if(matrix[1][1]=='5') matrix[1][1]=ch;
		else {
		    cout<<"Field Already Filled\n";
			input();
		}
	} 
	else if(a==6) {
		if(matrix[1][2]=='6') matrix[1][2]=ch;
		else {
		    cout<<"Field Already Filled\n";
			input();
		}
	}
	else if(a==7) {
		if(matrix[2][0]=='7') matrix[2][0]=ch;
	else {
		    cout<<"Field Already Filled\n";
			input();
		}
	}
	else if(a==8){
		if(matrix[2][1]=='8') matrix[2][1]=ch;
		else {
		    cout<<"Field Already Filled\n";
			input();
		}
	} 
	else if(a==9) {
		if(matrix[2][2]=='9') matrix[2][2]=ch;
		else {
		    cout<<"Field Already Filled\n";
			input();
		}
	}
	else{
		cout<<"IDIOT!!!Insert Field Between 1 and 9\n";
	   input();	
	} 
}
void turn()
{
	if(ch=='x') ch='o';
	else ch='x';
}
char winner()
{
	if(matrix[0][0]=='x'&&matrix[0][1]=='x'&&matrix[0][2]=='x') return 'x';
	else if(matrix[1][0]=='x'&&matrix[1][1]=='x'&&matrix[1][2]=='x') return 'x';
	else if(matrix[2][0]=='x'&&matrix[2][1]=='x'&&matrix[2][2]=='x') return 'x';
	else if(matrix[0][0]=='x'&&matrix[1][0]=='x'&&matrix[2][0]=='x') return 'x';
	else if(matrix[0][1]=='x'&&matrix[1][1]=='x'&&matrix[2][1]=='x') return 'x';
	else if(matrix[0][2]=='x'&&matrix[1][2]=='x'&&matrix[2][2]=='x') return 'x';
	else if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x') return 'x';
	else if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x') return 'x';
	else if(matrix[0][0]=='o'&&matrix[0][1]=='o'&&matrix[0][2]=='o') return 'o';
	else if(matrix[1][0]=='o'&&matrix[1][1]=='o'&&matrix[1][2]=='o') return 'o';
	else if(matrix[2][0]=='o'&&matrix[2][1]=='o'&&matrix[2][2]=='o') return 'o';
	else if(matrix[0][0]=='o'&&matrix[1][0]=='o'&&matrix[2][0]=='o') return 'o';
	else if(matrix[0][1]=='o'&&matrix[1][1]=='o'&&matrix[2][1]=='o') return 'o';
	else if(matrix[0][2]=='o'&&matrix[1][2]=='o'&&matrix[2][2]=='o') return 'o';
	else if(matrix[0][0]=='o'&&matrix[1][1]=='o'&&matrix[2][2]=='o') return 'o';
	else if(matrix[0][2]=='o'&&matrix[1][1]=='o'&&matrix[2][0]=='o') return 'o';
	else return '\0';
}
int main() {
	draw();
	while(play)
	{
	  ++n;
	  input();
	  draw();
	  if(r=winner())
	  {
	  	cout<<"The Winner Is : "<<r<<"\n";
	  	play=false;
	  }
	  if(r=='\0'&&n==9) {cout<<"It is a Draw!!!!\n";play=false;}
	  turn();
    }
    
    return 0;
}
