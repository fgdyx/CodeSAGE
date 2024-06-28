#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
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
