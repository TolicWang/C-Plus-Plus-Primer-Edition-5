#include"sales_data.h"
#include<iostream>

int main()
{

    Sales_data total(std::cin);
    if(!total.isbn().empty())
    {
        while(1)
        {
            Sales_data trans(std::cin);
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout,total)<<std::endl;
                total = trans;
            }
        }
        print(std::cout,total)<<std::endl;
    }
    else
        std::cerr<<"No data!"<<std::endl;
    return 0;
}
