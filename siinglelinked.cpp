#include<iostream>
using namespace std;
struct mahasiswa{
// membuat tipe data struct yang berfungsi menyimpan beberapa tipe data yang berbeda.
int NIM;
char KELAS;

mahasiswa*next;
//nama_struct*next
};
void printlist(mahasiswa*n)
//membuat fungsi printlist
{
    while (n!=NULL) //syarat n tidak sama dengan NULL
    {
        cout<<"NIM :"<<n->NIM<<" "<<endl;
        cout<<"KELAS :"<<n->KELAS<<" "<<endl;
        cout<<" "<<endl;
        //n-.data adalah sebuah variabel yang akan dipanggil
        n=n->next;
    }
}
int main()
{
    mahasiswa*head=NULL;
    mahasiswa*second=NULL;
    mahasiswa*third=NULL;

    head = new mahasiswa();
    second= new mahasiswa();
    third = new mahasiswa();

    head->NIM= 1829141022;
    head->KELAS = 'TEKOM_B';
    head->next = second;

    second->NIM = 1829141016;
    second->KELAS = 'TEKOM_B';
    second->next = third;

    third->NIM = 1829141018;
    third->KELAS = 'TEKOM_B';
    third->next = NULL;

    printlist(head);

    cin.get();
    return 0;
}
