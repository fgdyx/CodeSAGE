#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(VAR3);
 free(VAR3);
}
void FUN3()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR3 = (VAR2 *)malloc(sizeof(VAR3));
 VAR3->VAR6 = 1;
 VAR3->VAR7 = 2;
 FUN4(VAR3);
}
#endif
