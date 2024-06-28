#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
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
 }
}
#endif
