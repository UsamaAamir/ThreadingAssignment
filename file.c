#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* func1(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=0;i<100;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
void* func2(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=100;i<200;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
void* func3(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=200;i<300;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
void* func4(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=300;i<400;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
void* func5(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=400;i<500;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
void* func6(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=500;i<600;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
void* func7(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=600;i<700;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
void* func8(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=700;i<800;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
void* func9(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=800;i<900;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
void* func10(void* arg)
{
    int* arra=(int*)arg;
    int i,sum=0;
    for(i=900;i<1000;i++)
    {
        sum+=arra[i];
    }
    return (void*)sum;
}
int main()
{
    int array[1000];
    int i;int total=0;
    for(i=0;i<1000;i++)
    {
        array[i]=i;
    }
    pthread_t a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    int * sum[10];
    pthread_create(&a1,NULL,func1,(void*)array);
    pthread_create(&a2,NULL,func2,(void*)array);
    pthread_create(&a3,NULL,func3,(void*)array);
    pthread_create(&a4,NULL,func4,(void*)array);
    pthread_create(&a5,NULL,func5,(void*)array);
    pthread_create(&a6,NULL,func6,(void*)array);
    pthread_create(&a7,NULL,func7,(void*)array);
    pthread_create(&a8,NULL,func8,(void*)array);
    pthread_create(&a9,NULL,func9,(void*)array);
    pthread_create(&a10,NULL,func10,(void*)array);
    pthread_join(a1,(void*)&sum[0]);
    pthread_join(a2,(void*)&sum[1]);
    pthread_join(a3,(void*)&sum[2]);
    pthread_join(a4,(void*)&sum[3]);
    pthread_join(a5,(void*)&sum[4]);
    pthread_join(a6,(void*)&sum[5]);
    pthread_join(a7,(void*)&sum[6]);
    pthread_join(a8,(void*)&sum[7]);
    pthread_join(a9,(void*)&sum[8]);
    pthread_join(a10,(void*)&sum[9]);
int tempsum[10];
    for(i=0;i<10;i++)
    {
    tempsum[i]=(int)sum[i];
	total+=tempsum[i];
    }
    printf("the sum of first thread is: %d",total);

    return 0;
}
