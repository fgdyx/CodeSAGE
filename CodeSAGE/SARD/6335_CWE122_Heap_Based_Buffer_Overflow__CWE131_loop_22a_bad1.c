#ifndef VAR1
int VAR2 = 0;
int * FUN1(int * VAR3);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 int VAR4[10] = {0};
 size_t VAR5;
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN3(VAR3[0]);
 free(VAR3);
 }
}
#endif
