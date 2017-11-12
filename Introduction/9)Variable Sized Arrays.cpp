#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

/*class arrayinfo
{
    public:
    unsigned int size;
    vector<int> arr;
    arrayinfo(unsigned int size, vector<int> arr): size(size), arr(arr) {}
};*/

int main() {
    unsigned int no_array,queries;
    unsigned int arr_no, el_no;
    string first_line;
    getline(cin, first_line);
    sscanf(first_line.c_str(), "%d %d", &no_array, &queries);
    int c=1;
    vector<int> block;
    vector<int> q_sum ={0};
    string line;
    while(getline(cin,line))
    {
        if (c<=no_array)
        {
            char* end_ptr;
            const char* start_ptr = line.c_str();
            int no_elem = (int)strtol(start_ptr, &end_ptr, 10);
            start_ptr = end_ptr;
            for (unsigned int i=0; i< no_elem;i++)
            {
                int el=(int)strtol(start_ptr, &end_ptr, 10);
                block.push_back(el);
                start_ptr = end_ptr;
                            
            }
            q_sum.push_back(q_sum.back()+no_elem);
               
        }
        else    
        {
            sscanf(line.c_str(), "%d %d", &arr_no, &el_no);
            int result = block[q_sum[arr_no]+el_no];
            printf("%d \n",result);
        }
        c++;
    }
    return 0;
}
