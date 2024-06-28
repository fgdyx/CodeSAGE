#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR3->VAR4);
 delete VAR3;
}
#endif
