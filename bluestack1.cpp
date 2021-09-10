#include <iostream>
#include <sys/types.h>
#include <dirent.h>
#include <elf.h>

using namespace std;

void list_lib(const char *path) {

   struct dirent *e;
   DIR *dir = opendir(path);
   int i=0;

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

   cout << e->d_name << endl;
   }
   closedir(dir);
}
int main()
{
    cout<<"Enter the path =";
    char str[100];

   cin.getline(str,100);
   list_lib(str);
}
