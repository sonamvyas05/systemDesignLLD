#include "FileLeaf.h"
#include "DirectoryComposite.h"

int main()
{
    FileLeaf* file1 = new FileLeaf("File1.txt");
    FileLeaf* file2 = new FileLeaf("File1.txt");

    DirectoryComposite* folder = new DirectoryComposite("Folder");
    folder->addComponent(file1);
    folder->addComponent(file2);
    
     DirectoryComposite* root = new DirectoryComposite("root");
     root->addComponent(folder);

     root->display();
     return 0;
}