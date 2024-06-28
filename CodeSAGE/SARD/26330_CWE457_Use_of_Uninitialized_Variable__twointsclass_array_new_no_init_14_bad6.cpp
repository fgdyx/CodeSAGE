#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = new VAR2[10];
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR3[VAR5].VAR6);
 FUN2(VAR3[VAR5].VAR7);
 }
 }
}
#endif
