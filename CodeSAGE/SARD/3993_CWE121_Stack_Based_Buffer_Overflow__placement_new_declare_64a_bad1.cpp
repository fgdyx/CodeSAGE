#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 char VAR4[sizeof(VAR5)];
 char VAR6[sizeof(VAR7)];
 /* POTENTIAL FLAW: Initialize data to a buffer smaller than the sizeof(TwoIntsClass) */
 VAR3 = VAR4;
 FUN1(&VAR3);
}
#endif
