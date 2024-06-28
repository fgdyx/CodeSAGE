#ifndef VAR1
void FUN1()
{
 int VAR2;
 int * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR3 = (int *)FUN2(10);
 }
 {
 int VAR4[10] = {0};
 size_t VAR2;
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 for (VAR2 = 0; VAR2 < 10; VAR2++)
 {
 VAR3[VAR2] = VAR4[VAR2];
 }
 FUN3(VAR3[0]);
 }
}
#endif
