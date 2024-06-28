#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[10];
 VAR3 = VAR4;
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
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR3[VAR5].VAR6);
 FUN2(VAR3[VAR5].VAR7);
 }
 }
 break;
 }
}
#endif
