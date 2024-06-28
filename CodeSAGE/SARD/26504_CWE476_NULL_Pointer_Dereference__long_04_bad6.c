#ifndef VAR1
void FUN1()
{
 long * VAR2;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 }
 if(VAR3)
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(*VAR2);
 }
}
#endif
