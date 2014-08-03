#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{
    vector<int> odd, even;
    string file_name("output.txt");
    ofstream print(file_name);
    int page, slides_per_page;
    int print_page = 0;
    cout << "How many slides does the document have?"<<endl
         << ">>";
    cin >> page;
    cout << "How many slides per page?" <<endl
         << ">>";
    cin >> slides_per_page;

    int j = 1;
    while(j<page)   {
    for(int i = 0;i < slides_per_page && j < page;i++,j++)
        odd.push_back(j);
    for(int i = 0;i < slides_per_page && j < page;i++,j++)
        even.push_back(j);
    print_page++;
    }
    print << "ODD"<<endl;
    for (auto &i : odd)
        print << i <<",";
    print << endl;
    print << "EVEN" <<endl;
    for(auto &j : even)
        print << j <<",";
    print << endl << "Sheets of Paper needed :" << print_page <<endl;
    cout << "Results printed to file named " << file_name <<endl;
    system("notepad.exe output.txt");
    return 0;

}
