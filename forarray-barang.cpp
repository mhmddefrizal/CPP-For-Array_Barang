#include <iostream>

using namespace std;
main()
{
	char nama_barang[50][20];
	int harga[50];
	int stok[50];
	int jumlah_data, n=1, m=1;
	
	cout<<"Input Jumlah Data : ";cin>>jumlah_data;
	
	//Input
	for(int a=1; a<=jumlah_data; a++)
	{
		cout<<"Entry Nama Barang "<<m <<":";cin>>nama_barang[a];
		cout<<"Entry Harga : ";cin>>harga[a];
		cout<<"Entry Stok : ";cin>>stok[a];
		m++;
	}
	cout<<"========================================================"<<endl;
	cout<<"No\tBarang\t\tHarga\tStok"<<endl;
	cout<<"========================================================"<<endl;
	
	//Output
	for (int a=1; a<=jumlah_data; a++)
	{
		cout<<n<<"\t"<<nama_barang[a]<<"\t"<<"\t"<<harga[a]<<"\t"<<stok[a]<<endl;
		n++;
	}
}
