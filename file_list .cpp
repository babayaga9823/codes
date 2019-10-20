#include <iostream> 
using namespace std;

int main(void) 
{ 
	struct dirent *de; // Pointer for directory entry 

	// opendir() returns a pointer of DIR type. 
	DIR *dr = opendir("."); 

	if (dr == NULL) // opendir returns NULL if couldn't open directory 
	{ 
		cout<<"Could not open current directory" <<endl; 
		return 0; 
	} 

	// Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html 
	// for readdir() 
	while ((de = readdir(dr)) != NULL) 
	{
		
			cout<<de->d_name<<endl;
	}

	closedir(dr);	 
	return 0; 
} 
