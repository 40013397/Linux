#include"sol7.h"
void* sumfunc(void* sub_ary)
{
    int* partary = (int*)sub_ary;
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum+=partary[i];
    }
    pthread_exit((void*)sum);

}
int main()
{
    int ary[100];
    int finalsum=0;
    void* sum;
    for(int i=0;i<=100;i++)
    {
        ary[i]=i;
    }
    pthread_t threads[10];
    for(int i=0;i<10;i++)
    {
        int* sub_ary=ary + (i*10);
        pthread_create(&threads[i],NULL,sumfunc,(void*) sub_ary);
    }
    for(int i=0;i<10;i++)
    {
        pthread_join(threads[i],&sum);
        finalsum+=(int)sum;
    }
    printf("total = %d\n",finalsum);
    return 0;
}
