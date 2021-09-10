#include <iostream>
#include <sys/types.h>
#include <dirent.h>
#include <elf.h>

using namespace std;

int read_elf_header(const char* elfFile);
void list_lib(const char *path) {

   struct dirent *e;
   DIR *dir = opendir(path);
   int i=0;
   int r;

   if (dir == NULL) {
      cout<<"Wrong directory path entered";
      return;
   }
   while ((e = readdir(dir)) != NULL) {
        i++;

   }
    rewinddir (dir);

   cout<<"Total number of libraries: "<<i;
   cout<<endl;
   cout<<"File"<<endl<<"===="<<endl;

   while ((e = readdir(dir)) != NULL) {

   r=read_elf_header(e->d_name);
   cout<<r<<endl;
   //cout << e->d_name << endl;
   }
   closedir(dir);
}


int read_elf_header(const char* elfFile) {
  Elf64_Ehdr header;

  FILE* file = fopen(elfFile, "rb");

  if(file) {
    // read the header
    fread(&header, 1, sizeof(header), file);
    //if(header.e_type == 3)
    //{
      // if(header.e_machine ==
  //cout<<header.e_type<<endl;
  return header.e_machine;
    }
  }

int main()
{
    cout<<"Enter the path =";
    char str[100];

   cin.getline(str,100);
   list_lib(str);
}
