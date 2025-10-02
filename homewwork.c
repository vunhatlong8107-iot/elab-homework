#include<stdio.h>
#include<math.h>
int main(){
    // Bài 1 INPUT :nhập vận tốc km/h OUTPUT : trả về vận tốc m/s
    // Bài 2 INPUT :nhập giá trị bán kinh  OUTPUT : trả về CHU VI DIỆN TÍCH
    // Bài 3 Trả về giá trị chiều rộng phần nguyên và phần thập phân 
   float v_ban_dau;
   float R;

   printf("nhap gia tri van toc ban dau : ");
   scanf("%f",&v_ban_dau);
   printf("nhap_gia_tri_ban_kinh: ");
   scanf("%f",&R);
   float v_quy_doi = v_ban_dau/3.6;
   float chu_vi = 2*3.14*R;
   float dien_tich = 3.14*pow(2,R);

   printf("van toc sau khi quy doi la : %.3f\n",v_quy_doi);
   printf("chu vi hinh tron la : %.3f\n",chu_vi);
   printf("dien tich hinh tron la : %.3f\n",dien_tich);
   
   int   cd = 4;// anh duy tính nhầm chiều dài rồi nhé 
   float dt = 30.0;
   float cr=dt/cd;

   printf("chieu rong man hinh chi co phan nguyen la : %.0f\n",cr);
   printf ("chieu rong man hinh co phan thap phan la : %f\n",cr);

   return 0;
}