#ifndef VAR1
void FUN1()
{
 char * VAR2;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(VAR2);
}
#endif
