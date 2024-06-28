#ifndef VAR1
void FUN1(int VAR2[]);
void FUN2()
{
 int VAR3;
 int VAR2[5];
 VAR3 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
