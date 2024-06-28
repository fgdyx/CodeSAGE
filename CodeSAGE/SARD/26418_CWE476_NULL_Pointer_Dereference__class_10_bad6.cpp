#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 if(VAR4)
 {
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 }
 if(VAR4)
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR3->VAR5);
 delete VAR3;
 }
}
#endif
