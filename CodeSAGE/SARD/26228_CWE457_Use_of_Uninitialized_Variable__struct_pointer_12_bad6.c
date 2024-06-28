#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 else
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 }
 else
 {
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 }
}
#endif
