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
 size_t VAR5;
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR2[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
#endif
