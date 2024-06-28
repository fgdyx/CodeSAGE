#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 }
 else
 {
 {
 VAR2 * VAR4 = new VAR2;
 VAR4->VAR5 = 0;
 VAR4->VAR5 = 0;
 VAR3 = VAR4;
 }
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN3(VAR3->VAR5);
 delete VAR3;
 }
 else
 {
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR5);
 delete VAR3;
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
