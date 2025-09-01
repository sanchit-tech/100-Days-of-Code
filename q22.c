//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main(){
	int cp,sp;
	printf("Enter Cost Price:");
	scanf("%d",&cp);
	printf("Enter Selling Price: ");
	scanf("%d",&sp);
	int profit,loss,profitper,lossper;
	
	if (sp>cp) {
        profit=sp-cp;
        profitper=(profit*100)/cp;
        printf("Profit = %d %%",profitper);
	}
	
		
	 else if (cp > sp) 
	 {
        loss = cp - sp;
        lossper = (loss * 100) / cp;
        printf("Loss = %d %%", lossper);
    }
		
	else if (sp==cp)
		{
		printf("NO PROFIT NO LOSS");}
		
	return 0;
}