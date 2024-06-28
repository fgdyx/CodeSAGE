#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 {
 VAR2 * VAR3 = VAR4;
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR3->VAR5);
 }
}
#endif
