#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR3 = (VAR2 *)malloc(sizeof(VAR3));
 VAR3->VAR4 = 1;
 VAR3->VAR5 = 2;
 {
 VAR2 * VAR6 = VAR3;
 VAR2 * VAR3 = VAR6;
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
