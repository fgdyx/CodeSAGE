#ifndef VAR1
void FUN1(char VAR2[]);
void FUN2()
{
 char VAR3;
 char VAR2[5];
 VAR3 = '';
 /* POTENTIAL FLAW: Use the minimum size of the data type */
 VAR3 = VAR4;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
