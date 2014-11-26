#include <algorithm>
#include <iostream>
 
int main()
{
  const int N = 22;
 int result[N]={ 0,1,2,0,0,2,2,1,0,2,0,1,2,0,0,2,2,1,0,2,2,0 };

  std::cout<<"Proigrish:"<<std::count(result,result+N,0) << std::endl;
  std::cout<<"Nichya:"<<std::count(result,result+N, 1) << std::endl;
  std::cout<<"Pobeda:"<<std::count(result,result+N, 2) << std::endl;
 
    system("PAUSE");
    return 0;
}

