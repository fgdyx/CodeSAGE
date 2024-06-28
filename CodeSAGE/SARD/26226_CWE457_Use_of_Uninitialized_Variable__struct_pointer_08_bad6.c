#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
 }
}
#endif
