class Ques{ 
public static void main(String args[]){ 

	int age;
	age = 10;
	
	if(age < 12){
		System.out.printf("The person is Child");
	}else if(age >= 12 && age <= 19){
		System.out.printf("The person is Teenager");
	}else if(age >= 20 && age<= 59){
		System.out.printf("The person is Adult");
	}else if(age >= 60){
		System.out.printf("The person is Senior");
	}else{
		System.out.printf("Invalid age");
	}
	 }
 }