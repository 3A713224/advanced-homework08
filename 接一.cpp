#include<iostream> 

#include <stdio.h> 

int main()

{

    int N;

    int T;

    int n, t, m; 

    int money[105];

    int i;

	

	printf("請輸入有幾個顧客："); 

    scanf("%d",&N);

    printf("請輸入有幾筆交易："); 

    scanf("%d",&T);

    

    i=0; 

    while( i<N) 

    {

        money[i] = 0;  



        i = i+1;

    }



    

    printf("請輸入有幾個顧客，存款還是提款，存款或提款了m元：\n"); 

    i = 0;

    while( i<T )

    {

    scanf("%d%d%d",&n,&t,&m); 



        if( t==1 )

        {

            money[n] = money[n] + m; 

        }

        if( t==2 ) 

        {

            money[n] = money[n] - m; 

        }



        i = i+1;

    }

    printf("每名顧客的存款如下：\n");  

    

    i = 0;

    while( i<N )

    {

    	printf("第%d名顧客：剩餘存款為%d元\n",i+1,money[i]); 

        i = i+1;

    }



    return 0;  

}
