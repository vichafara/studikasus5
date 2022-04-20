#include<iostream>
using namespace std;

class mahasiswa{
	public:
		void input(int);
		void output(int);
	private:
		string matkul[20];
		int sks[20];
    	int n, biaya, diskon, total, jumlah, totalsks;
};

void mahasiswa::input(int n){
	if(n==0){
	
	}
	else{
		cout<<"Mata Kuliah\t: "; cin>>matkul[n];
		cout<<"Banyak sks\t: ";cin>>sks[n];
		(input(n-1));
	}
}

void mahasiswa::output(int n){ 
	cout<<"No.\tDaftar Matkul\tsks"<<endl;
	for(int i=0; i<n; i++){
		cout<<i+1<<"\t"<<matkul[i+1]<<"\t\t"<<sks[i+1]<<endl;
		totalsks+=sks[i+1];
	}
	cout<<"\nTotal SKS = "<<totalsks;
	cout<<endl;
	biaya = totalsks * 120000;
	diskon = biaya * 0.15;
	jumlah = biaya - diskon;
	total = jumlah -diskon;
	cout<<"Total : "<<total<<endl;
	
}
int main(){
	int n;
	long nim;
	string nama;
	mahasiswa sks;
	cout<<"Masukkan Nama\t: "; cin>>nama;
	cout<<"Masukkan Nim\t: "; cin>>nim;
	cout<<"Masukkan jumlah matkul : "; cin>>n;
	sks.input(n);
	cout<<"================================="<<endl;
	cout<<"Nama mahasiswa : "<<nama<<endl;
	cout<<"Nim mahasiswa : "<<nim<<endl;
	sks.output(n);
	return 0;
}
