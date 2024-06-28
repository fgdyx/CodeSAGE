#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
 free(VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Use of data that may have been freed */
 FUN3(VAR2[0]);
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
