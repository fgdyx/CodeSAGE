#ifndef VAR1
static int VAR2 = 0;
static VAR3 * FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR4 = (VAR3 *)malloc(sizeof(VAR4));
 *VAR4 = 2147483643LL;
 }
 return VAR4;
}
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR2 = 1;
 VAR4 = FUN1(VAR4);
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN3(*VAR4);
 free(VAR4);
}
#endif
