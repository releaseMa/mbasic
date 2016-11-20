char inputbuff[Inputbuff_size];
char outputbuff[Outputbuff_size];
int readnum;
bool output_isEmpty(void)
{
	if(outputbuff[readnum+1]=='\0')
	{
		if(outputbuff[readnum+2]=='\0')
		{
			if(outputbuff[readnum+3]=='\0')
			{return 1;}
		}
	}
	return 0;
}
bool input_isEmpty(void)//analzy whether or not the inputbuff is empty from the position(readonly)
{
	if(outputbuff[position+1]=='\0')
	{
		if(outputbuff[position+2]=='\0')
		{
			if(outputbuff[position+3]=='\0')
			{return 1;}
		}
	}
	return 0;
}
char outlineRead(void)//read then erase
{
	char tmp=outputbuff[readnum];
	if (!output_isEmpty())
	{
		outputbuff[readnum]='\0';
		readnum++;
		return tmp;
	}
		
}

