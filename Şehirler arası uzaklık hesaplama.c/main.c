/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>



FILE *fp;

struct uzaklik{
    
    char sehir[100];
    int mesafe1;
    int mesafe2;
    
};


/*struct ata{
  char shr[100];
  int mesafe_1;
  int mesafe_2;
};*/

int main()
{
    fp=fopen("dosya.txt","w");
    
    struct uzaklik sehirler[20]={"Kütahya-Eskişehir",26,12,
                                 "Kastamonu-Samsun",83,44,
                                 "Erzincan-Bingöl",56,25,
                                 "Mardin-Hakkari",47,19,
                                 "İstanbul-Kocaeli",32,11,
                                 "Ordu-Gümüşhane",86,56,
                                 "Erzurum-Ardahan",72,47,
                                 "Karaman-Adana",15,8,
                                 "Kırşehir-Kayseri",92,64,
                                 "Tunceli-Muş",74,22,
                                 "Manisa-Bursa",19,11,
                                 "Malatya-Hatay",93,10,
                                 "Konya-Isparta",20,10,
                                 "Ankara-Antalya",56,32,
                                 "Yozgat-Muş",38,21,
                                 "Artvin-Van",62,44,
                                 "Tokat-Çorum",66,26,
                                 "Aydın-Denizli",71,50,
                                 "Uşak-Düzce",83,62,
                                 "Sinop-Ordu",99,82
                                  
    };
    //sehirler[0].sehir="istanbul-ankara";
   // printf("%s %d %d",sehirler[0].sehir,sehirler[0].mesafe1,sehirler[0].mesafe2);
   
   for(int i=0;i<20;i++){
       fprintf(fp,"%s %d %d\n",sehirler[i].sehir,sehirler[i].mesafe1,sehirler[i].mesafe2);
   }
   fclose(fp);
   
   fp=fopen("dosya2.txt","w");
   struct uzaklik sehir1;
   struct uzaklik sehir2;
   sehir1=sehirler[0];
   sehir2=sehirler[0];
   
   for(int i=0;i<20;i++){
       
       if((sehir1.mesafe1-sehir1.mesafe2)<(sehirler[i].mesafe1-sehirler[i].mesafe2)){
           
           sehir1=sehirler[i];
       }
       
       if((sehir2.mesafe1-sehir2.mesafe2)>(sehirler[i].mesafe1-sehirler[i].mesafe2)){
           sehir2=sehirler[i];
       }
       
       
       
   }
   
   fprintf(fp,"En uzak şehirler:%s %d %d %d\nEn yakın şehirler:%s %d %d %d\n",sehir1.sehir,sehir1.mesafe1,sehir1.mesafe2,(sehir1.mesafe1-sehir1.mesafe2),sehir2.sehir,sehir2.mesafe1,sehir2.mesafe2,(sehir2.mesafe1-sehir2.mesafe2));
   
   fclose(fp);
    
    
    
    

    return 0;
}
