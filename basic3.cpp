/* 
�D�ئW��:�м��g�@�ӵ{���A�ϥΪ̥i�H��J�����P�魫�A
�{���|��X�ӨϥΪ̪�BMI��T
�s�@:�f�a�� 
�ק�/�������:2019/4/7 
*/
#include <stdio.h>   //���J���Y�� 
#include <stdlib.h>   
int main(void){
	float h;
	float BMI,height,weight; //�إ��ܼ�BMI,heigth(����),weight(�魫) 
	printf("�п�J����:");
	scanf("%f",&height);
	printf("�п�J�魫:");
	scanf(" %f", &weight);
    h=(height/100);
	BMI=(weight/(h*h));  //BMI=�魫�����谣�H���� 
	printf("your BMI is:%4.2f\n",BMI);//���BMI 
	system("pause");
	
}    
