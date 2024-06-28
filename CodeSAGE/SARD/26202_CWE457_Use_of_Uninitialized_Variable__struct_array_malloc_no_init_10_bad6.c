#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
 if(VAR4)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(VAR4)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR3[VAR5].VAR6);
 FUN2(VAR3[VAR5].VAR7);
 }
 }
 }
}
#endif
