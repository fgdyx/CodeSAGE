#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(*VAR3);
}
void FUN3()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 FUN4(VAR3);
}
#endif
