double var[25];
double varRead(char temp)
{
	return var[(int)(temp-'a')];
	
}
void varWrite(char temp,double num)
{
	 var[(int)(temp-'a')]=num;
	
}
void func_run()