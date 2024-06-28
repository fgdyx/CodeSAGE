#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5;
 }
 }
 /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
 free(VAR2);
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use of data that may have been freed */
 FUN3(VAR2[0]);
 }
}
#endif
