//#include <iostream>
//#include <file.h>
//using namespace std;
//
//int main()
//{
//    file test("test.txt");
//    cout<<test.get_line();
//
//    cout<<"\n";
//    int num=test.find("find");
//    cout<<"\"find\" was found at "<<num<<endl;
//    test.close();
//    cout<<"\ntest.txt has been closed\n";
//
//    return 0;
//}

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> temp;
    stringstream stream(str);
    int temp_num=0,temp_char;
    for(;stream;)
    {
        stream>>temp_num;
        temp.push_back(temp_num);
        if(!stream)
            break;
        stream>>temp_char;
    }
    return temp;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
