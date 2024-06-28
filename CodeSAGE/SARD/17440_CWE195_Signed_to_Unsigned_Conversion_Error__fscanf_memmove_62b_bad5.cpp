#ifndef VAR1
void FUN1(int &VAR2)
{
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
}
#endif
