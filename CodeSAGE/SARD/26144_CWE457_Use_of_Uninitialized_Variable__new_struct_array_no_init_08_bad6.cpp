#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = new VAR2[10];
 if(FUN2())
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
 delete [] VAR3;
 }
}
#endif
