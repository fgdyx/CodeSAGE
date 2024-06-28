#ifndef VAR1
void FUN1()
{
 char * VAR2;
 while(1)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 break;
 }
 while(1)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(VAR2);
 break;
 }
}
#endif
