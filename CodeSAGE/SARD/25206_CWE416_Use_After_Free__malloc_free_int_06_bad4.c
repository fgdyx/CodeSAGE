#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5;
 }
 }
 /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
 free(VAR2);
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use of data that may have been freed */
 FUN2(VAR2[0]);
 }
}
#endif
