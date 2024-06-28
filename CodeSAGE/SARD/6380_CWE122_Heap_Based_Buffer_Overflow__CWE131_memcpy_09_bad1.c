#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 }
 {
 int VAR4[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memcpy(VAR2, VAR4, 10*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
#endif
