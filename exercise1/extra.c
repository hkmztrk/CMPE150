

int main()
{

	  int hour, min;
	  scanf("%d %d", &hour, &min);
	  
	  if(hour <= 23 && hour >= 0){

	      if(min <= 59 && min >= 0 ){
	         
	         printf("%d:%d is ", hour, min);
	         
	         if(hour > 12){ 
	             
	           if (hour-12 < 10){
	                printf("0%d:", hour-12); 
	             }
	             else {
	                 printf("%d:", hour-12);
	             }  
	         }
	         else {

	             if (hour < 10){
	                printf("0%d:", hour); 
	             }
	             else {
	                 printf("%d:", hour);
	             }
	             
	         }
	             
	         if(min <10){  
	          printf("0%d ", min);   
	         }
	         else{
	             printf("%d ", min);
	         }
	         
	         if(hour > 12){
	             printf("PM");
	         }
	         else{
	             printf("AM");
	         }
	         
	      } 
	       else{
	         printf("Error: minute out of range."); 
	      }
	      
	  }
	  else{
	      printf("Error: hour out of range.");
	  }

return 0;

}