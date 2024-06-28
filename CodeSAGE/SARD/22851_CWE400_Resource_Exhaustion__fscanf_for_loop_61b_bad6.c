#ifndef VAR1
int FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Read count from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 return VAR2;
}
#endif
