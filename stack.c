char stack[Stack_size];
int stackpos;
int position=0;
/*void putinint(int *p,int temp)
{
	while(*(p+n)!=0){n++}
	*(p+n)=temp;
}
void initprog(void)
{
	int t,g;
	while(t!=strlen(inputbuff))+1)
	{
		if(inputbuff[t]='\n')
		{
			while(inputbuff[t+g]=' ')
			{g++;}
		putinint(linenum,t+1);
		putinint(linenum_level,n+1);
		}
		t++;
	}
}*/
//------------------------------------------------------------------------
int linenum[Max_linenum];
short linenum_level[Max_linenum];
int n,k;//putinint
void putinlinenum(int temp)
{
	while(linenum[n]!=0){n++;}
	linenum[n]=temp;
}
void putinlinelevel(int temp)
{
	while(linenum_level[k]!=0){k++;}
	linenum_level[k]=temp;
}
void initprog(void)//读入脚本初始化函数，执行后自动将存在inputbuff中的脚本规范化并分析执行序列
{
	int t=0,g=0;
	while(!(t==(strlen(inputbuff)+1)))
	{
		if(inputbuff[t]=='\n')
		{
			while(inputbuff[t+g+1]==' ')
			{g++;}
		putinlinenum(t+1);
		putinlinelevel(g+1);
		g=0;

		}
		t++;
	}
}
//--------------------------------------------------------------------------------------------------------------------------
void putin(char *p,char str[])//累字符串函数，参1目标数组，参2插入内容
{
	char *pi=(char *)((int)p+strlen(p)+1);
	strcpy(pi,str);
}
int getintLength(int *p)
{
    int i;
	while((int *)((int)p+i)!='\0'){i++;}
	return i-1;
}
void pushnum(int *p,int x)
{
	int i=getintLength(linenum)+1;
	stack[i]=
	
}

void init_basic(void)
{
	/*int i;
	linenum
	while(input_isEmpty())
	while(inputbuff[i])
	inputbuff[i]*/

}
void jmpline(int line)
{
	/*int i,j;
	while(!input_isEmpty())
	{
		while((line-1)!=j)
		{
			i++;
			if(inputbuff[i]==';')
				{j++;}
		}
		position=i+1;
	}*/
	position=linenum[line];
}
void cleanstack(int argu)//1-quick ,2-all
{	int n;
	switch(argu)
	{
	case 1:
	while((stack[n]!='\0'){stack[n]="\0";n++;}
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
void dofunc(char *p)
{
	int a;
while(!strcmp(stack,func[a]))	
{
	switch()
	{
		case 3:op_AREAD();break;
	}
}
}

