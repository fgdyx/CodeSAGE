#ifndef VAR1
void FUN1()
{
 long * VAR2;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 }
 else
 {
 {
 long VAR3 = 5L;
 VAR2 = &VAR3;
 }
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN3(*VAR2);
 }
 else
 {
 if (VAR2 != NULL)
 {
 FUN3(*VAR2);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
