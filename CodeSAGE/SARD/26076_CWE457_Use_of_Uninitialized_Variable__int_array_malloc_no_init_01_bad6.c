#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN2(VAR2[VAR3]);
 }
 }
}
#endif
