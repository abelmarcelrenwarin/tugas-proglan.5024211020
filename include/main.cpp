
#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(){
    vector<mahasiswa> recMhs;
    vector<dosen> recDosen;
    vector<tendik> recTendik;

    int pilihmenu;
    int idMhs=0;
    int idDosen=0;
    int idTendik=0;
    char Lanjut;

cout<<"Selamat Datang di unisversitas sebelas april"<< endl<<endl;
cout<<"1. Jumlah Mahasiswa       : "<<recMhs.size()<<"Mahasiswa"<<endl;
cout<<"2. Jumlah Dosen           : "<<recDosen.size()<<"Dosen"<<endl;
cout<<"3. Jumlah Tenaga Pendidik :"<<recTendik.size()<<"Tendik"<<endl;

cout<<"Pilih menu :";
cin<<pilihmenu;

switch(pilihmenu){
    case1:{
        idMhs++;
        string id,nama,nrp,departemen;
        int dd,mm,yy, tahunmasuk;
        id= "mhs" + to+string(idMhs);

        cout<<"Nama Mahasiswa : ";
        cin.ingore();
        getline(cin,nama);
        cout<<"Tanggal lahir : ";
        cin<<dd;
        cout<<"Bulan Lahir : ";
        cin<<mm;
        cout<<"Tahun Lahir : ";
        cin<<yy;
        cout<<"Masukkan NRP : ";
        cin<<nrp;
        cout<<"Masukkan departemen : ";
        cin.ignore();
        getline(cin,departemen);

        cout<<"Masukkan Tahun Masuk : ";
        cin<<tahunmasuk
        mahsiswa inputMhs= mahasiswa(id,nama,dd,mm,yy,nrp,departemen,tahunmasuk);
        cout<<"Semester ke- :";
        cin<<semesterke;
        cout<<"Masukkan Jumlah SKS Lulus semester lalu";
        cin<<skslulus;
        //menetapkan inputan yang dimasukkan ke object penyimpanan inputMhs
        mahasiswa inputMhs= mahasiswa(id,nama,dd,mm,yy,nrp,departemen,tahunmasuk);
        inputMhs,setSemester(semesterke-);
        inputMhs.setSKSLulus(skslullus);
        //data di pushback dari input Mhs ke vector recMhs dijadikan sebagai database
        recMhs.push_back(inputMhs);
    } break;

    case 2:{

        idDosen++;
        string id,nama,npp,departemen,pendidikan;
        
        int dd,mm,yy;
        id= "dsn"+ to_string(idDosen);
        cout<<"Masukkan nama Dosen : ";
        cin.ignore();
        getline(cin,nama);
        cout<<"Masukkan Tanggal Lahir : ";
        cin>> dd;
        cout<<"Masukkan Bulan Lahir : ";
        cin>> mm;
        
        cin.ignore();
        getline(cin,pendidikann);
        dosen inputDosen= dosen(id,nama,dd,mm,yy,departemen,pendidikan);
        //Menetapkan inputan yang di masikkan ke object penyimpanan inputDosen
    } break;

    case 3;{
        idTendik++;
        string id, nama, npp, unit;
        
        int dd, mm, yy;
        // untuk mengambil input
        id="tdk" + to_string(idTendik);
        cout<<"Masukkan Nama Tendik : ";
        cin.ignore();
        getline(cin, nama);
        cout<<" Masukkan Tanggal Lahir : ";
        cin>> dd;
        cout<<"Masukkan Bulan Lahir : ";
        cin<< mm;
        cout<<"Masukkan unit : ";
        cin.ignore();
        getline(cin, unit);
        tendik inputTendik = tendik(id, nama, dd, mm, yy, npp, unit);
        //menetapkan inputan yang dimasukkan ke object penyimpanan yaitu input dosen
        recTendik.push_back(inputTendik);
    } break;

    case 4:{
        for(int i=0;i<idMhs;i++){
            cout<<i+1<<" Mahasiswa dengan ID : "<<recMhs[i].getid()<<endl;
            cout<<"\tNama  : "<< recMhs[i].getNama()<<endl;
            cout<<"\tdd-mm-yy   :"<<recMhs[i].getTglLahir()<<"-"recMhs[i].getBulanLahir()<<"-"<<recMhs[i].getTahunLahir()<<endl;
            cout<<"\tNRP     : "<<recMhs[i].getNRP()<<endl;
            cout<<"\tDepartemen : "<<recMhs[i].getDepartemen()<<endl;
            cout<<"\tTahun Masuk : "<<recMhs[i].getTahunmasuk()<<endl;
            //Untuk menampilkan data mahasiswa
             }
             cin.get();


    }break;

    case 5;
    for(int i=0;i<idDosen;i++){
        cout<<i+1<< "Dosen dengan id : " <<recDosen[I].getId()<<endl;
        cout<<"Nama : "<<recDosen[i].getNama()<<endl;
        cout<<"\tdd-mm-yy  : "<< recDosen[i].getTglLahir()<< endl;
        cout<<"\tNPP : "<< recDosen[I].npp()<<endl;
        cout<<"\tDepartemen  : "<< recDosen[i].getDepartemen()<<endl;
        cout<<"\tPendidikam : "<<recDosen[i].getPendidikan()<<endl;
        //menamilpilkan data dosen

    }
    cin.get();


}break;
case 6:{
    for(int i=0;i<idTendik;i++){
        cout<<i+1<< "Data tendik dengan ID: "<<recTendik[i].getId()<<endl;
        cout<<"Nama  : "<<recTendik[i].getNama()<<endl;
        cout<<"\tdd-mm-yy  : " <<recTendik[i].getTglLahir()<<"-"<<reccTendik[i].getTahunLahir()<<endl;
        cout<<"\tNPP     :"<<recTendik[i].getNPP()<<endl;
        cout<<"\tUnit  : "<<recTendik[i].getUnit()<<endl<<endl;
        //menampilkan data Tendik        
        }cin.get();
}break;
cout<<"Terima Kasih Atas Kungjungannya Ke SIAKAN UNIVERSITAS SEBALAS APRIL ";
return 0;
}
