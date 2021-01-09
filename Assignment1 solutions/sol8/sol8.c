#include"sol8.h"
void* maximum(void* sub_ary)
{
    int* partary = (int*)sub_ary;
    int maxs=0;
    for(int i=0;i<10;i++)
    {
    	if(partary[i]>maxs)
    	     maxs=partary[i];
    }
    pthread_exit((void*)maxs);

}
int main()
{
    int ary[100];
    int finalval=0;
    void* maxs;
    for(int i=0;i<=100;i++)
    {
        ary[i]=i;
    }
    pthread_t threads[10];
    for(int i=0;i<10;i++)
    {
        int* sub_ary=ary + (i*10);
        pthread_create(&threads[i],NULL,maximum,(void*) sub_ary);
    }
    for(int i=0;i<10;i++)
    {
        pthread_join(threads[i],&maxs);
        finalval=(int)maxs;
    }
    printf("maxvalue is  = %d\n",finalval);
    return 0;
}




