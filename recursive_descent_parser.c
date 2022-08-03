#include<stdio.h>
#include<string.h>
int T(),Fdash(),F();
char *la;
char string[50];
int main(){
  printf("enter the string to parse:\n");
  scanf("%s",string);
  la=string;
  printf("\n\nInput\t\tAction\n-----------------------\n");
  if(T()){
    printf("successfully parsed.");
  }
  else{
    printf("not acceptedd");
  }
}
int F(){
    printf("%s\t\tL->SL' \n",la);
    if(T()){
        if(Fdash()){
            return 1;
        }
        else
            return 0;
        }
    else
        return 0;
    }
int Fdash(){
    if(*la==','){
            printf("%s\t\tL'->,SL \n",la);
        la++;
        if(T()){
            if(Fdash()){
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
    }
    else
        {
            printf("%s\t\tL'->epsilon \n",la);
            return 1;
        }


}
int T(){
    if(*la=='('){
        printf("%s\t\tS->(L) \n",la);
        la++;
        if(F()){
            if(*la==')'){
                la++;
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
       }
       else if(*la=='a'){
        la++;
    printf("%s\t\tS->a \n",la);
        return 1;
       }
       else
            return 0;
}
