#include <stdio.h>
int main(){
	//基础数据获取
	int N;
	scanf("%d",&N);
	
	int a[20]={0}; 
	int num[20]={0};
	int sum[20]={0}; 
	
	int i;
	for( i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<N;i++){  //每一个数字的统计 
	    int temp1=a[i];  //保护数字；
		int temp2=0; 	
		while(temp1>0){
			temp2=temp1%10;
			if(temp2%2==0){
			   num[i]++;
			   sum[i]+=temp2;
		    }
		    temp1/=10;
		}
    }
    
    int max_num=num[0];
    for(i=0;i<N;i++)
    	if(num[i]>max_num)
    		max_num=num[i];
    
    int max_sum=sum[0];
    for( i=0;i<N;i++)
    	if(sum[i]>max_sum)
    		max_sum=sum[i];
    
    
    int tof=0;
    if(max_num!=0)
    {
    	for(i=0;i<N;i++)
    	{
    		if(num[i]==max_num&&sum[i]==max_sum)
    		{
    			tof=1;
    			printf("Yes %d %d %d",a[i],num[i],sum[i]);
			}
		}
	}                     
      
	if(tof==0)
		printf("No");
	return 0;
} 
