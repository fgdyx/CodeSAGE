#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = new int[10];
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR2[VAR4]);
 }
 }
 delete [] VAR2;
 }
}
#endif
