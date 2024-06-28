#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 if(5==5)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(VAR3->VAR4);
 FUN2(VAR3->VAR5);
 }
}
#endif
