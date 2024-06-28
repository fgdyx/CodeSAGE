#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
 while(1)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 break;
 }
 while(1)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR3[VAR4].VAR5);
 FUN2(VAR3[VAR4].VAR6);
 }
 }
 break;
 }
}
#endif
