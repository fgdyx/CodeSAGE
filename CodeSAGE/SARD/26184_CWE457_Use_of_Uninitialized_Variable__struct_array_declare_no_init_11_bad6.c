#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[10];
 VAR3 = VAR4;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 }
 }
}
#endif
