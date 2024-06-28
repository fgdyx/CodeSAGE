#ifndef VAR1
void FUN1()
{
 long * VAR2;
 while(1)
 {
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 break;
 }
 while(1)
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(*VAR2);
 break;
 }
}
#endif
