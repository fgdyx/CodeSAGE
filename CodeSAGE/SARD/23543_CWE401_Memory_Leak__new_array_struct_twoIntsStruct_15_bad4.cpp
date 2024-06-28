#ifndef VAR1
void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new struct VAR2[100];
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: No deallocation */
 ;
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
