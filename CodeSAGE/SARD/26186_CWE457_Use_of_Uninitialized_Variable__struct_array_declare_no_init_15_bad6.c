#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[10];
 VAR3 = VAR4;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
