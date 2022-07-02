#include <stdio.h>
#include <stdlib.h>



int main(){


	int i,j,secim,secim2,para,miktar,eskiBakiye,sayac1=0,sayac2=0,sayac3=0,sayac4=0;
	printf("Bankamatik Uygulamasina Hos Geldiniz...\n\n");	
	printf("Bakiyenizi Giriniz:");
	scanf("%d",&para);
	system("CLS"); 
	  
	
	
	for(i=0;i<2;i++){
		printf("\n\n---------------ISLEM MENUSU---------------\n");
		printf("\n1 - Bakiye Goruntule\n2 - Para Yatir\n3 - Para Cek\n4 - Fatura Ode\n5 - Cikis Yap\nSeciminiz: ");
		scanf("%d",&secim);
		system("CLS"); 
		
		switch(secim){
			
			case 1: 
			
					printf("\n\nBakiyeniz %d TL \n\n",para);
					i=0;
			break;
			
			case 2:
			 
					printf("\nMiktar Giriniz: ");
					scanf("%d",&miktar);
					eskiBakiye = para;
					para = para + miktar;
					system("CLS"); 
					printf("\n\n-------------------------------\n\n");
					printf("Eski Bakiyeniz: %d TL\n",eskiBakiye);
					printf("Yatirilacak Tutar: %d TL\n",miktar);
					printf("Guncel Bakiyeniz: %d TL",para);
					printf("\n\n-------------------------------\n\n");
					i=0;
			break;
				
			case 3:
				
				    printf("\nMiktar Giriniz: ");
					scanf("%d",&miktar);
					eskiBakiye = para;
					para = para - miktar;
					system("CLS"); 
					printf("\n\n-------------------------------\n\n");
					printf("Eski Bakiyeniz: %d TL\n",eskiBakiye);
					printf("Cekilecek Tutar: %d TL\n",miktar);
					printf("Guncel Bakiyeniz: %d TL",para);
					printf("\n\n-------------------------------\n\n");
					i=0;
			break;	
			
			case 4:
				for(j=0;j<2;j++){
					printf("\n1 - Su\n2 - Elektrik\n3 - Internet\n4 - Telefon\n5 - Cikis Yap\nSeciminiz: ");
		            scanf("%d",&secim2);
		            system("CLS"); 
		            
		            switch(secim2){
		            	
		            	case 1: 
						sayac1++; 
						   if(sayac1 < 2){
						       para = para - 100;
						       printf("\n\nSu Faturaniz Odendi\nKalan Bakiyeniz: %d TL\n",para); 
		            	       j=0;
						 }
						else printf("\nFatura Borcu Bulunmamaktadir...\n");
						j=0;
		            	break;
		            		
		            		
		            	case 2: 
						sayac2++; 
						   if(sayac2 < 2){
						       para = para - 300;
						       printf("\n\nElektrik Faturaniz Odendi\nKalan Bakiyeniz: %d TL\n",para); 
		            	       j=0;
						 }
						else printf("\nFatura Borcu Bulunmamaktadir...\n");
						j=0;
		            	break;
		            		
		            		
		                case 3:  sayac3++; 
						   if(sayac3 < 2){
						       para = para - 120;
						       printf("\n\nInternet Faturaniz Odendi\nKalan Bakiyeniz: %d TL\n",para); 
		            	       j=0;
						 }
						else printf("\nFatura Borcu Bulunmamaktadir...\n");
						j=0;
		            	break;
		                	
		                	
		                case 4: sayac4++; 
						   if(sayac4 < 2){
						       para = para - 50;
						       printf("\n\nTelefon Faturaniz Odendi\nKalan Bakiyeniz: %d TL\n",para); 
		            	       j=0;
						 }
						else printf("\nFatura Borcu Bulunmamaktadir...\n");
						j=0;
		            	break;
		                	
		                case 5:
			            j=2;
			            system("CLS");
			            break;
		            	
		            	default: printf("\n\n Yanlis Secim Yaptiniz...\n\n"); j=0; break;
					}
				}
				
			i=0;
			break;	
			
			case 5:
			i=2;
			system("CLS"); 
			printf("\niyi Gunler Dileriz...\n\n"); 
			
			break;	
		       
			
			default: printf("\n\n Yanlis Secim Yaptiniz...\n\n"); i=0; break;
			
		} 
		
	}
		
	printf("\n\n"); 
	return 0;
}
