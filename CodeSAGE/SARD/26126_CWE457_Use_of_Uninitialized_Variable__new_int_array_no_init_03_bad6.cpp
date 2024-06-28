#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = new int[10];
 if(5==5)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN2(VAR2[VAR3]);
 }
 }
 delete [] VAR2;
 }
}
#endif
