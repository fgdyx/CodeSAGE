#ifndef VAR1
void FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read count from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 FUN1(VAR2);
}
#endif
