#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 if(1)
 {
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 }
 if(1)
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR3->VAR4);
 }
}
#endif
