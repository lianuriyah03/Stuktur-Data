#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct antri
{
    int data;
};

struct identitas
{
    char nama[20];
    char no_pes[15];
    char transaksi;
    int nominal;
};

main()
{

    identitas id[15];
    antri ant[15];
    int cek=0, y=0, hapus;
    int makan,minum;
	char makanan[20],minuman[20],c;
	float jml_makan,jml_minum,harga_makan,harga_minum,ppn,jml_bayar,bayar,kembali,total;
    char pil;
    do {
            system("cls");
            cout<<"\n\t\t ===============================================";
            cout<<"\n\t\t ||  PROGRAM ANTRIAN PADA RESTAURANT MAKANAN  ||";
            cout<<"\n\t\t ================================================"<<endl<<endl;
            cout<<"1. Masukan Antrian"<<endl;
            cout<<"2. Proses Antrian"<<endl;
            cout<<"3. Daftar Menu Makanan & Minuman"<<endl;
            cout<<"4. Keluar"<<endl;
         cout<<endl;
            cout<<"Masukkan pilihan Anda (1-4)\t= ";
            cin>>pil;
         cout<<endl;
if(pil!='1' && pil !='2' && pil !='3' && pil !='4' )
{
    cout<<"Anda salah memasukkan pilihan\n\n";
    system("PAUSE");
}
            else
            {
                if(pil=='1')   //PUSH
                {
                    if(cek==5 && y==5)
                    {
                        cout<<"ANTRIAN PENUH!!!";
                    }

                        cout<<endl;
                        system("cls");
                        cout<<"Nama Pengunjung\t: ";
                        cin>>id[cek].nama;
                        cout<<"Nomor Pesanan\t: ";
                        cin>>id[cek].no_pes;
                        ulang:
                        cout<<"Jenis Transaksi (Pembayaran)\t: \n";
                        cout<<"\t: A.Cash\n";
                        cout<<"\t  B.Kredit\n"<<"Pilih\t: ";
                        cin>>id[cek].transaksi;
                        if(id[cek].transaksi=='a' || id[cek].transaksi=='A' || id[cek].transaksi=='b' || id[cek].transaksi=='B')
                        {
                            cout<<"Nominal\t\t: ";
                            cin>>id[cek].nominal;
                        }
                        else
                        {

                            cout<<"\n\nAnda Salah Memilih Jenis Transaksi\n\n";
                            cout<<"\n\n";
                            goto ulang;
                        }

                        cout<<endl;
                        cek++;
                        system("cls");

                        cout<<"Antrian saat ini\t:\n\n";
                                for(int z=0;z<cek;z++)
                                {

                                    cout<<"Nomor Antri\t: "<<z+1;
                                    cout<<endl;
                                    cout<<"Nama Pengunjung\t: "<<id[z].nama<<endl;
                                    cout<<"Nomor Pesanan\t: "<<id[z].no_pes<<endl;
                                    cout<<"Jenis Transaksi\t: ";
                                    if(id[z].transaksi=='a' || id[z].transaksi=='A')
                                    {
                                        cout<<"Cash";
                                    }
                                    else if(id[z].transaksi=='b' || id[z].transaksi=='B')
                                    {
                                        cout<<"Kredit";
                                    }
                                    cout<<endl;
                                    cout<<"Nominal\t\t: "<<id[z].nominal<<endl;
                                    cout<<endl<<endl;

                                }




                    cout<<"\n\n";
                    system("PAUSE");
                }
                else
                {
                    if(pil=='2')     //POP
                    {
                        if(cek==0)
                            cout<<"Antrian kosong";
                        else
                        {
                            for(int z=0;z<cek;z++)
                            hapus=z;
                            for(int v=0;v<cek;v++)
                                ant[v].data=ant[v+1].data;
                            ant[cek].data=NULL;
                            cek--;
                            system("cls");
                            cout<<"\nAntrian dengan nomor 1 diproses\n";
                            cout<<"\n\t\tData Nasabah \n\n";
                            cout<<"Nama Pengunjung\t: "<<id[0].nama<<endl;
                            cout<<"Nomor Pesanan\t: "<<id[0].no_pes<<endl;
                            cout<<"Jenis Transaksi\t: "<<id[0].transaksi<<endl;
                            cout<<"Nominal\t\t: "<<id[0].nominal<<endl;
                            cout<<endl;
                            {
                                int b;
                                for(b=0;b<cek;b++)
                                id[b]=id[b+1];
                                b--;
                            }
                        }

                        cout<<endl;
                        if(cek==0)
                            cout<<"Antrian kosong";
                        else
                            cout<<"Nomor Antrian saat ini : ";
                                for(int z=0;z<cek;z++)
                                {
                                    cout<<" | ";
                                    cout<<" "<<z+1;
                                    cout<<" | ";
                                }
                    cout<<endl<<endl;
                    system("PAUSE");
                    }
                    else
                {
                    if(pil=='3')     
                    {
                    	cout<<"-------------------------\n";
cout<<"|DAFTAR MENU MAKANAN & MINUMAN    |\n";
cout<<"-------------------------\n";
atas:      //pernyataan atas jika salah input kode makanan
cout<<"Daftar Makanan             \n";
cout<<"1. Nasi Goreng \n";
cout<<"2. Mie Ayam \n";
cout<<"3. Nasi Soto \n";
cout<<"3. Bakso \n";
cout<<"Pilihan Anda Adalah [1/2/3/4]  : ";
cin>>makan;
if (makan==1)
{
strcpy(makanan,"Nasi Goreng");
harga_makan=10000;
 }
else
if (makan==2)
{
strcpy(makanan,"Mie Ayam");
harga_makan=13000;
}
else
if (makan==3)
{
strcpy(makanan,"Nasi Soto");
harga_makan=20000;
}
else
if (makan==4)
{
strcpy(makanan,"Bakso");
harga_makan=15000;
}
else
{
cout<<"Pilihan Makanan Tidak Ada \n";
goto atas;
}
cout<<"                 Jumlah Porsi  : ";
cin>>jml_makan;
tengah:    //pernyataan tengah jika salah input kode minuman
cout<<"Daftar Minuman             \n";
cout<<"1. Es Teh Manis/Panas \n";
cout<<"2. Jus Alpukat \n";
cout<<"3. Air Mineral \n";
cout<<"4. Es Jeruk/Panas \n";
cout<<"Pilihan Anda Adalah [1/2/3/4]  : ";
cin>>minum;
if (minum==1)
{
strcpy(minuman,"Es Teh Manis/Panas");
harga_minum=3000;
}
else
if (minum==2)
{
strcpy(minuman,"Jus Alpukat");
harga_minum=10000;
}
else
if (minum==3)
{
strcpy(minuman,"Air Mineral");
harga_minum=5000;
}
else
if (minum==4)
{
strcpy(minuman,"Es Jeruk/Panas");
 harga_minum=7000;
}
else
{
cout<<"Pilihan Minuman Tidak Ada \n";
goto tengah;
}
cout<<"                 Jumlah Gelas  : ";
cin>>jml_minum;
cout<<endl;
jml_bayar=(jml_makan*harga_makan)+(jml_minum*harga_minum);
ppn=jml_bayar*0.1;
total=jml_bayar+ppn;
system("cls");
cout<<"-------------------------\n";
cout<<"|Daftar Pesanan    |\n";
cout<<"-------------------------\n";
cout<<"Menu Pilihan Makanan     : "<<makanan<<endl;
cout<<"Jumlah Pesan             : "<<jml_makan<<" Porsi"<<endl;
cout<<"Menu Pilihan Minuman     : "<<minuman<<endl;
cout<<"Jumlah Pesan             : "<<jml_minum<<" Gelas"<<endl;
cout<<"PPN 10%                  : Rp."<<ppn<<endl;
cout<<"Jumlah Total             : Rp."<<total<<endl;
bawah:      //pernyataan bawah jika uang pembayaran kurang
cout<<"Jumlah Bayar             : Rp.";cin>>bayar;
cout<<endl;
kembali=bayar-total;
if (kembali<0)
{
cout<<"Uang Pembayaran Kurang \n";
goto bawah;
}
else
cout<<"Uang Kembalian            : Rp."<<kembali<<endl;
cout<<"Ingin Mengulang Lagi (Y/T) ? ";cin>>c;
if (c=='Y' || c=='y')
    goto ulang;
else
        cout<<"Terima Kasih";
    	cout<<endl<<endl;
                    system("PAUSE");
                    }
				}
            }
        }

    }while(pil!='4');
}
