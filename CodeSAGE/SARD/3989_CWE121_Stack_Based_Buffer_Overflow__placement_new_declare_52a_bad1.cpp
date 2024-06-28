#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[sizeof(VAR4)];
 char VAR5[sizeof(VAR6)];
 /* POTENTIAL FLAW: Initialize data to a buffer smaller than the sizeof(TwoIntsClass) */
 VAR2 = VAR3;
 FUN1(VAR2);
}
#endif
