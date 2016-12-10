#include <iostream>
#include <conio.h>
using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
  int top;
  int maxelem;
};

int main() {
  Stack * s = new Stack(100);
  int pushh;
  int x, y;
  int num;
 do{
 	int num;
	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n";
	cin >> num;
	switch(num)
	{
	case 1:
	int pushh;	
	cout << "PUSH" << endl;;
	cout << "ENTER WHAT NUMBER YOU WANT TO PUSH"<< endl;
	cin >> pushh;
	  s -> push(pushh);	
	  s -> display();
	break;
	case 2:
	cout << "POP";
	s -> pop();
	s -> display();
	break;
	case 3:
	cout << "DISPLAY";
	s -> display();
	cout << endl;
	break;
	case 4:
	cout << "EXIT";
	system("pause");
	break;
	default:
	cout << "WRONG INPUT"<< endl;
	system("pause");
	return 0;	
	}
}
while(y=5);
 
}
