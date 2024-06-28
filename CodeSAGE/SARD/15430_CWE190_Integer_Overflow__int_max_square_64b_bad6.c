#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR5 = VAR4 * VAR4;
 FUN2(VAR5);
 }
}
#endif
