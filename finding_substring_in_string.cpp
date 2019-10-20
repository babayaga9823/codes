    #include <iostream>

    using namespace std;

    int main()
    {
        
        string str6="She has a beautiful dog",str4="dog";
        
         if (str6.find(str4) != string::npos)//here scope resolution operator is must
        cout << "str4 found in str6 at " << str6.find(str4)
             << " pos" << endl;
    else
        cout << "str4 not found in str6" << endl;
        return 0;
    }
