#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = (int *)FUN2(10*sizeof(int));
 if(1)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(1)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 }
}
#endif
