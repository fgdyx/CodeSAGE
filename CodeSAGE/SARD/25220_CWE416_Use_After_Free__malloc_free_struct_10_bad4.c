#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5].VAR6 = 1;
 VAR3[VAR5].VAR7 = 2;
 }
 }
 /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
 free(VAR3);
 }
 if(VAR4)
 {
 /* POTENTIAL FLAW: Use of data that may have been freed */
 FUN2(&VAR3[0]);
 }
}
#endif
