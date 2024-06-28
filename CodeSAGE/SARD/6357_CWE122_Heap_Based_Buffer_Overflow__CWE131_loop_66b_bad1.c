#ifndef VAR1
void FUN1(int * VAR2[])
{
 int * VAR3 = VAR2[2];
 {
 int VAR4[10] = {0};
 size_t VAR5;
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
#endif
