#include <iostream>
int main()
{
    int i,j;	
	for(int i = 10, k=0; i >=0; i--, k++){
        for (int j = 1; j <=1+(i*2) ; j++){
            std::cout<<"-";
        }
        for (int j=1; j <=1+(k*4);j++)
        {
            std::cout << "*"  ;
        }
        for (int j = 1; j <=1+(i*2) ; j++){
            std::cout<<"-";
        }
        std::cout<<"\n";
    }
  
    return 0;
}
