#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)FUN2(10);
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 {
 int VAR5[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memmove(VAR2, VAR5, 10*sizeof(int));
 FUN3(VAR2[0]);
 }
 }
}
#endif
