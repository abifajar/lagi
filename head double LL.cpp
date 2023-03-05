#include <iostream>
#include<conio.h>
using namespace std;


class Node{ 

	public:
		char data;
		Node *next;
};


class head{
	
	public:
		int n;
		Node *penunjuk;
};


int main()

{
	cout<<"Hello World"<<endl;
	head *kepala = new head; 
	kepala->n=0;
	kepala->penunjuk=0;
	
	Node *A = new Node; //4
	A->data ='A';
	A->next =0;
	
	kepala->n++;
	kepala->penunjuk=A; //5
	
	cout<<"Banyak data di link list kepala : "<<kepala->n<<endl;
	cout<<"Datanya : \n";
	cout<<kepala->penunjuk->data; 
	
	Node *B = new Node; //6
	B->data='B';
	B->next =0;
	
	kepala->n++;
	kepala->penunjuk->next=B; //7
	
	Node *X = new Node;
	X->data = 'X';
	X->next = kepala->penunjuk;
	
	kepala->penunjuk = X;
	
	cout<<"\nBanyak data di link list kepala : "<<kepala->n<<endl;
	cout<<"Datanya : \n";
	Node *cetak = kepala->penunjuk;
	while(cetak !=0){
		cout<<"data : "<<cetak->data<<endl;
		cetak=cetak->next;
	}
	
}


