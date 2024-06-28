#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(VAR3->VAR4);
 FUN2(VAR3->VAR5);
}
#endif
