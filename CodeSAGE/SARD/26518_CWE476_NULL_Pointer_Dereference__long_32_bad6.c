#ifndef VAR1
void FUN1()
{
 long * VAR2;
 long * *VAR3 = &VAR2;
 long * *VAR4 = &VAR2;
 {
 long * VAR2 = *VAR3;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 *VAR3 = VAR2;
 }
 {
 long * VAR2 = *VAR4;
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(*VAR2);
 }
}
#endif
