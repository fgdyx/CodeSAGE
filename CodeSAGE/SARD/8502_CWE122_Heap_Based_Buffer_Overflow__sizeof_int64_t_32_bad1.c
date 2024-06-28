#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR3 = (VAR2 *)malloc(sizeof(VAR3));
 *VAR3 = 2147483643LL;
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(*VAR3);
 free(VAR3);
 }
}
#endif
