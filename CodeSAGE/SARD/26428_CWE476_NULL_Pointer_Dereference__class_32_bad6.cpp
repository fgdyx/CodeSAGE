#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 {
 VAR2 * VAR3 = *VAR4;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR3->VAR6);
 delete VAR3;
 }
}
#endif
