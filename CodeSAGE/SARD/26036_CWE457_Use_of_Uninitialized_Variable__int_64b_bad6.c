#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(VAR4);
}
#endif
