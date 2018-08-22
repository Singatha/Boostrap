#include <stdio.h>
#include <math.h>

char* Dec2RadixN(int decValue, int radValue){
	   char arr[100];
	   if (radValue == 2)
		   arr = base_2(decValue);
	   
	   else if(radValue == 3)
		   arr = base_3(decValue);
	   
	   else if(radValue == 4)
		   arr = base_4(decValue);
	   
	   else if(radvalue == 5)
		   arr = base_5(decValue);
	   
	   else if(radValue == 6)
		   arr = base_6(decValue);
	   
	   else if(radValue == 7)
		   arr = base_7(decValue);
	   
	   else if(radValue == 8)
		   arr = base_8(decValue);
	   
	   else if(radValue == 9)
		   arr = base_9(decValue);
	   
       else if(radValue == 10)
		   arr = base_10(decValue);
	   
	   else if(radValue == 11)
		   arr = base_11(decValue);
	   
	   else if(radValue == 12)
		   arr = base_12(decValue);
	   
	   else if(radValue == 13)
		   arr = base_13(decValue);
	   
	   else if(radValue == 14)
		   arr = base_14(decValue);
	   
	   else if(radValue == 15)
		   arr = base_15(decValue);
	   
	   else if(radValue == 16)
		   arr = base_16(decValue);
	   
	   return arr;
		  
}
char * base_2(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%2;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
               
           quot = quot/2;
           rem = quot%2;               
           count++;
       }
       
       return binary;
}

char * base_3(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%3;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
              binary[count] = '1';
           
           else if (rem == 2)
              binary[count] = '2';
              
           quot = quot/3;
           rem = quot%3;               
           count++;
       }
       
       return binary;
}

char * base_4(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%4;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
               
           else if (rem == 2)
               binary[count] = '2';
               
           else if (rem == 3)
               binary[count] = '3';
               
           quot = quot/4;
           rem = quot%4;               
           count++;
       }
       
       return binary;
}

char * base_5(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%5;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';			   
          quot = quot/5;
          rem = quot%5;               
           count++;
       }
       
       return binary;
}

char * base_6(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%6;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
          quot = quot/6;
          rem = quot%6;               
           count++;
       }
       
       return binary;
}

char * base_7(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%7;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
           quot = quot/7;
           rem = quot%7;               
           count++;
       }
       
       return binary;
}

char * base_8(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%8;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
		   else if (rem == 7)
			   binary[count] = '7';
		   
           quot = quot/8;
           rem = quot%8;               
           count++;
       }
       
       return binary;
}

char * base_9(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%9;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
		   else if (rem == 7)
			   binary[count] = '7';
		   
		   else if (rem == 8)
			   binary[count] = '8';
           
		   quot = quot/9;
           rem = quot%9;               
           count++;
       }
       
       return binary;
}

char * base_10(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%10;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
		   else if (rem == 7)
			   binary[count] = '7';
		   
		   else if (rem == 8)
			   binary[count] = '8';
           
		   else if (rem == 9)
			   binary[count] = '9';
		   
		   quot = quot/10;
           rem = quot%10;               
           count++;
       }
       
       return binary;
}

char * base_11(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%11;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
		   else if (rem == 7)
			   binary[count] = '7';
		   
		   else if (rem == 8)
			   binary[count] = '8';
           
		   else if (rem == 9)
			   binary[count] = '9';
		   
		   else if (rem == 10)
			   binary[count] = 'A';
		   
		   quot = quot/11;
           rem = quot%11;               
           count++;
       }
       
       return binary;
}

char * base_12(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%12;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
		   else if (rem == 7)
			   binary[count] = '7';
		   
		   else if (rem == 8)
			   binary[count] = '8';
           
		   else if (rem == 9)
			   binary[count] = '9';
		   
		   else if (rem == 10)
			   binary[count] = 'A';
		   
		   else if (rem == 11)
		       binary[count] = 'B';
		   
		   quot = quot/12;
           rem = quot%12;               
           count++;
       }
       
       return binary;
}

char * base_13(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%13;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
		   else if (rem == 7)
			   binary[count] = '7';
		   
		   else if (rem == 8)
			   binary[count] = '8';
           
		   else if (rem == 9)
			   binary[count] = '9';
		   
		   else if (rem == 10)
			   binary[count] = 'A';
		   
		   else if (rem == 11)
		       binary[count] = 'B';
		   
		   else if (rem == 12)
			   binary[count] = 'C';
		   
		   quot = quot/13;
           rem = quot%13;               
           count++;
       }
       
       return binary;
}

char * base_14(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%14;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
		   else if (rem == 7)
			   binary[count] = '7';
		   
		   else if (rem == 8)
			   binary[count] = '8';
           
		   else if (rem == 9)
			   binary[count] = '9';
		   
		   else if (rem == 10)
			   binary[count] = 'A';
		   
		   else if (rem == 11)
		       binary[count] = 'B';
		   
		   else if (rem == 12)
			   binary[count] = 'C';
		   
		   else if (rem == 13)
			   binary[count] = 'D';
		   
		   quot = quot/14;
           rem = quot%14;               
           count++;
       }
       
       return binary;
}

char * base_15(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%15;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
		   else if (rem == 7)
			   binary[count] = '7';
		   
		   else if (rem == 8)
			   binary[count] = '8';
           
		   else if (rem == 9)
			   binary[count] = '9';
		   
		   else if (rem == 10)
			   binary[count] = 'A';
		   
		   else if (rem == 11)
		       binary[count] = 'B';
		   
		   else if (rem == 12)
			   binary[count] = 'C';
		   
		   else if (rem == 13)
			   binary[count] = 'D';
		   
		   else if (rem == 14)
			   binary[count] = 'E';
		   
		   quot = quot/15;
           rem = quot%15;               
           count++;
       }
       
       return binary;
}

char * base_15(int num){
       
       static char binary[100];
       int quot = num;
       int rem = num%16;
       int count = 0;
       while(quot > 0){
           if (rem == 0)
              binary[count] = '0';
            
           else if (rem == 1)
               binary[count] = '1';
		   
		   else if (rem == 2)
			   binary[count] = '2';
           
           else if (rem == 3)
               binary[count] = '3';
            
           else if (rem == 4)
               binary[count] = '4';

           else if (rem == 5)
               binary[count] = '5';	
		   
		   else if (rem == 6)
			   binary[count] = '6';
		   
		   else if (rem == 7)
			   binary[count] = '7';
		   
		   else if (rem == 8)
			   binary[count] = '8';
           
		   else if (rem == 9)
			   binary[count] = '9';
		   
		   else if (rem == 10)
			   binary[count] = 'A';
		   
		   else if (rem == 11)
		       binary[count] = 'B';
		   
		   else if (rem == 12)
			   binary[count] = 'C';
		   
		   else if (rem == 13)
			   binary[count] = 'D';
		   
		   else if (rem == 14)
			   binary[count] = 'E';
		   
		   else if (rem == 15)
			   binary[count] = 'F';
		   
		   quot = quot/16;
           rem = quot%16;               
           count++;
       }
       
       return binary;
}

int main()
{
    char *ptr;
    ptr = base_2(3);
    printf("Hello, World!\n");
    int i;
    
    for (i = 0; i < (sizeof(ptr)/sizeof(char)); i++){
        printf("%c",*(ptr+i));
    }
    
    return 0;
}