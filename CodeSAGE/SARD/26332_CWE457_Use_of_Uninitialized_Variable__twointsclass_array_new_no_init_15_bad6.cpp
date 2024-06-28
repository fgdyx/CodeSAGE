#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = new VAR2[10];
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
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
