#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (int *)malloc(100*sizeof(int));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
