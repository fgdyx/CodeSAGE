#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 FUN1(&VAR3);
}
#endif
