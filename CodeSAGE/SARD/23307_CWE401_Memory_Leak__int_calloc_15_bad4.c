#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
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
