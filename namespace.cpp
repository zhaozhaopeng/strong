#include<iostream>
#include<stdio.h>
#include <stdint.h>
namespace spaceA
{
    int m_id = 66;
}

namespace spaceB
{
    int m_id = 1;
    namespace spaceC
    {
        typedef struct 
        {
            uint8_t name[24];
            uint32_t m_age;
        }Teacher;

    }
}
int f()
{

}
int g(void)
{

}
int main(int argc,char **argv)
{
    using namespace spaceA;
    using namespace spaceB;
    printf("spacea =====%d\n",spaceA::m_id);
    printf("spaceb =======%d\n",spaceB::m_id);
    //int g_var;
    int g_var = 1;
    int g_ret = 3;
    (g_ret > g_var ? g_ret : g_var) = 4;
    printf("g_var = %d,g_ret = %d\n",g_var,g_ret);
    return 0;
}
