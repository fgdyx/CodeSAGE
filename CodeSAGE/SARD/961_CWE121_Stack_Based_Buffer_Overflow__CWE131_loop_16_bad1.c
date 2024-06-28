#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)FUN2(10);
 break;
 }
 {
 int VAR3[10] = {0};
 size_t VAR4;
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN3(VAR2[0]);
 }
}
#endif
