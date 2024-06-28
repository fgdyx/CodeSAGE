#ifndef VAR1
void FUN1();
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
