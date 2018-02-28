#include <fstream>
#include <iostream>
#include <string>

using namespace std;

const n = 100;

int main(){
    char buff[n];
    string cppfile[300];
    ifstream fin("cpp.txt");
    ofstream fout("Pascal.txt");
    if((fin.is_open())&&(fout.is_open())){
        for(int i = 0; i < 5; ++i){
            cppfile[i] = "";
            fin.getline(buff, n);
            fout << buff << endl;
            for(int j = 0; j < n; ++j)
                cppfile[i] += buff[j];
            string result;

            cppfile[i].copy(0, 10, result);
            if (result == "//int_perem")



        }
        fout.close();
        fin.close();
    } else cout << "ERROR: file not found";
    return 0;
}
