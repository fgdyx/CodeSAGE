#ifndef VAR1
void FUN1()
{
 int VAR2;
 int * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR3 = (int *)malloc(10);
 }
 {
 int VAR4[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memmove(VAR3, VAR4, 10*sizeof(int));
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
#endif
