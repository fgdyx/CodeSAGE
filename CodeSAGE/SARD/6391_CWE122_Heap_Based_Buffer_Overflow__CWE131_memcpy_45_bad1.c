#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 {
 int VAR4[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memcpy(VAR2, VAR4, 10*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 VAR3 = VAR2;
 FUN1();
}
#endif
