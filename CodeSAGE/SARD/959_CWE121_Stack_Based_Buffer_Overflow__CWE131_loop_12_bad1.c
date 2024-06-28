#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)FUN3(10);
 }
 else
 {
 VAR2 = (int *)FUN3(10*sizeof(int));
 }
 {
 int VAR3[10] = {0};
 size_t VAR4;
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN4(VAR2[0]);
 }
}
#endif
