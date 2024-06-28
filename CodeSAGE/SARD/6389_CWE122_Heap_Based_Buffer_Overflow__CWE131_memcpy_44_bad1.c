#ifndef VAR1
static void FUN1(int * VAR2)
{
 {
 int VAR3[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memcpy(VAR2, VAR3, 10*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
void FUN3()
{
 int * VAR2;
 void (*VAR4) (int *) = VAR5;
 VAR2 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 FUN4(VAR2);
}
#endif
