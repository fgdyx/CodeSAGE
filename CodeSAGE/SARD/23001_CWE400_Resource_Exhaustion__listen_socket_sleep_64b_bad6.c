#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN2(VAR4);
 FUN3("");
}
#endif
