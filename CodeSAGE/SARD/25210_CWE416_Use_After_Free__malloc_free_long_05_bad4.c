#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5L;
 }
 }
 /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
 free(VAR2);
 }
 if(VAR3)
 {
 /* POTENTIAL FLAW: Use of data that may have been freed */
 FUN2(VAR2[0]);
 }
}
#endif
