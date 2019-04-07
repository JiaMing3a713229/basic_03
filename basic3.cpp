/* 
題目名稱:請撰寫一個程式，使用者可以輸入身高與體重，
程式會輸出該使用者的BMI資訊
製作:呂家明 
修改/完成日期:2019/4/7 
*/
#include <stdio.h>   //載入標頭檔 
#include <stdlib.h>   
int main(void){
	float h;
	float BMI,height,weight; //建立變數BMI,heigth(身高),weight(體重) 
	printf("請輸入身高:");
	scanf("%f",&height);
	printf("請輸入體重:");
	scanf(" %f", &weight);
    h=(height/100);
	BMI=(weight/(h*h));  //BMI=體重的平方除以身高 
	printf("your BMI is:%4.2f\n",BMI);//顯示BMI 
	system("pause");
	
}    
