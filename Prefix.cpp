#include <stdlib.h>
#include <string>
#include <string.h>
 
typedef struct prexp
{
  int top;
  int stack[1030];
}stck;//????stack struck
void init(stck *st )
{
  st->top=-1;
}
void push(stck *st,int num)
{
    st->top++;
    st->stack[st->top]=num;
}
int pop(stck *st)
{
    int num;
    
    num=st->stack[st->top];
    st->top--;
    return num;
}
int top(stck *st)
{
	return st->stack[st->top];
}
bool empty(stck *st)
{
    if(st->top<0)return true;
    return false;
}
int eval(stck *st,char op)
{
    int res;
    if(empty(st))return 0;
    int num1 =pop(st);;
    if(empty(st))return 0;//???????????
    int num2 = pop(st);
	switch(op)
	{
		case '+': res=num1+num2;
		break;
		case '-': res=num1-num2;
		break;
		case '*': res=num1*num2;
		break;
		case '/': res=num1/num2;
		break;
		case '%': res=num1%num2;
		break;
	}
    push(st,res);
    return 1;
}
int main()
{
    //std::string input;
    char input[1030];
    //while(getline(cin,input) && input[0]!='.')
    while(gets(input) && input[0]!='.')//??????
    {
        stck s;
        init(&s);
        int operand =0;
        int flag=0;
        //for(int i=input.size()-1; i>=0; i--)//from tail to head
        for(int i=strlen(input)-1;i>=0;i--)//?????
        {
            if(flag)break;
            switch(input[i])
            {
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
                
                if(!eval(&s,input[i]))
                {
                    printf("illegal\n");
                    flag = 1;
                    break;
                }
            case ' '://????
                break;
            default:
                int pow=1;//??????
                while(input[i]>='0' && input[i]<='9')
                {
                    operand = operand + (input[i]-'0')*pow;
                    pow*=10;
                    i--;
                }
                push(&s,operand);
                operand=0;
                break;
            }
        }
        if(!flag)
        {
            printf("%d\n",top(&s));
        }
    }
    return 0;
}
