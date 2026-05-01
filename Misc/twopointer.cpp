#include <iostream>
#include <vector>
using namespace std; 

int main()
{
  vector<int> arr = {1,2,3,4,5,6,7};
  int target = 10;

  int head = 0;
  int tail = arr.size()-1;

  while (head < tail)
  {
    int sum = arr[head]+arr[tail];

    if (sum == target)
    {
      cout<<"Found at indices: "<<head<<" and "<<tail<<endl;
      return 0;
    }
    else if (sum < target)
    {
      head ++;
    }
    else
    {
      tail--;
    }
  }
  return 0;
}
