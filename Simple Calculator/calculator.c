#include<stdio.h>
#include<math.h>

double division(double, double);
int modulus(int, int);
void print_menu();

int main() {
  int choice; 
  double first, second, result;
  while(1) {
    print_menu();
    scanf("%d", &choice);
    if (choice == 7){
      break;
    }

    if (choice < 1 || choice > 7) {
      fprintf(stderr,"Invalid Menu choice.");
      continue;
    }
    printf("\n Please enter the first number: ");
    scanf("%lf", &first);
    printf("\n Please enter the second number: ");
    scanf("%lf", &second);
    
    switch(choice)
    {
      case 1://Add
        result = first + second;
        break;
      case 2://Subtract
        result = first - second;
        break;
      case 3://Multiply
        result = first * second;
        break; 
      case 4://Divide
        result = division(first, second);
        break; 
      case 5://Modulus
        result = modulus(first, second);
        break;
      case 6://Power
        result = pow(first, second);
        break;
      default:
        break;
    } 
    if(!isnan(result))  {
     printf("\nResult of operation is: %.2f", result);
   }
  };
 
  return 0; 
}  

double division(double a, double b){
  if(b == 0){
    fprintf(stderr,"Invalid Argument for Division");
    return NAN; //Not A Number
  } else{
    return a / b;
  }
}

int modulus(int a, int b) {
  if(b == 0){
    fprintf(stderr,"Invalid Argument for modulus");
    return NAN; //Not A Number
  } else{
      return a % b;
  }  
}
void print_menu() {
  printf("\n----------------------------------------------------\n");
  printf("\n\nWelcome To Simple Calculator\n\n");
  printf("\nChoose one the following option");
  printf("\n1. Add");
  printf("\n2. Subtract");
  printf("\n3. Multiply");
  printf("\n4. Divide");
  printf("\n5. Modulus");
  printf("\n6. power");
  printf("\n7. EXIT");
  printf("\n Now enter your choice:");
}