char stack[Stack_size];
int position=0;
int linenum;
void init_basic()
{
	
}
void jmpline(int line)
{
	int i,j;
	while(!input_isEmpty())
	{
		while((line-1)!=j)
		{
			i++;
			if(inputbuff[i]==';')
				{j++;}
		}
		position=i+1;
	}
}
void quickjmp(int row)//jump to next row
{
	while(inputbuff[i]!=';')
	{position++}
position++;
}
void cleanstack(int argu)//1-quick ,2-all
{	int n;
	switch(argu)
	{
	case 1:
	while((bool)stack[n]){stack[n]="\0";n++;}
	break;
	case 2:
	while(n!=Stack_size){stack[n]="\0";n++;}
	break;
	}
}
void dostack(void)
{
	int n=0;
	while(inputbuff[position]!=" ")
	{
		if(inputbuff[position]==';')
		{linenum++;}
		stack[n]=inputbuff[position]
		n++;
	}
	position++;
}
void dostack_readonly(void)
{
	
}
