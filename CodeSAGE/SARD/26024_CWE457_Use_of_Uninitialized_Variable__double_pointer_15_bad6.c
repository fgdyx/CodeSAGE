#ifndef VAR1
void FUN1()
{
 double * VAR2;
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
 FUN3(*VAR2);
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
