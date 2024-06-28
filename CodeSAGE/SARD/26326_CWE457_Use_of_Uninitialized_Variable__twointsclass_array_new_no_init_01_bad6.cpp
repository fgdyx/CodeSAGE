#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = new VAR2[10];
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR3[VAR4].VAR5);
 FUN2(VAR3[VAR4].VAR6);
 }
}
#endif
