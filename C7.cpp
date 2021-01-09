#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n) ;
	getchar();
	int a[n];
	int b[1000];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		int m=0;
		int num1=a[i];
		for(int p=0;;p++)
		{
		b[p]=num1%10;
		num1=num1/10;
		if(num1==0)
		break;
	    }
	    printf("%d:\n",a[i]);
		for(int p;p>-1;p--)
		{
			if(b[p]==0)
			printf("*****");
			printf("\n");
			        printf("*   *");
			        printf("\n");
			        
		       	    *   *\
					  \
				    *   *\
					  \
	                *   *\
					  \
					*   *\
					  \
				    *****\
					  ");
			if(b[p]==1)
			printf("    *\
			\
			            *\
			              \
		                *\
					      \
					    *\
					      \
					    *\
					      \
					    *\
					    \
					    *")	;	 
				if(b[p]==2) 
			printf("*****\
			\
			            *\
			              \
					    *\
					      \
					*****\
					  \
				    *\
					  \
					*\
					  \
		            *****")	;	  		  
		    	if(b[p]==3)
				printf("*****\
		    \
			                * \
			              \
					        * \
					      \
					    *****\
					  \
					        *  \
					      \
					        *\
					      \
					    *****")	;	  	  
				if(b[p]==4)
			printf("*   *\
			    \
				    *   *\
			  \
					  *   *\
					  \
					  *****\
					  \
					      *\
					      \
						  *\
						  \
						  *\
						  ");
						  	if(b[p]==5)
				printf("  *****\
			    \
				          *\
					  \
					      *\
					  \
					      *****\
					  \
					          *\
					      \
						      *\
						  \
						  *****\
						  ");
						  	if(b[p]==6)
				printf("      *****\
			    \
				              * \
					  \
					          *   \
					  \
					          *****\
					  \
					          *   *\
					      \
						      *   *\
						  \
						      *****\
						  ");
						  	if(b[p]==7)
			    	printf("  *****\
			    \
				                  *\
					  \
					              *\
					  \
					              *\
					  \
					              *\
					      \
						          *\
						  \
						          *\
						  ");		 
						  	if(b[p]==8) 
				printf("  *****\
			    \
				          *   *\
					  \
					      *   *\
					  \
					      *****\
					  \
					      *   *\
					      \
						  *   *\
						  \
						  *****\
						  ");
						  	if(b[p]==9)
					printf("  *****\
			    \
				              *   *\
					  \
					          *   *\
					  \
					          *****\
					  \
					              * \
					      \
						          *\
						  \
						      *****\
						  "); 
					  
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
}



















