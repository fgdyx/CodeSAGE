#ifndef VAR1
void FUN1(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 size_t VAR5;
 int *VAR6;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR6 = (int*)malloc(VAR4 * sizeof(int));
 for (VAR5 = 0; VAR5 < (VAR7)VAR4; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN2(VAR6[0]);
 free(VAR6);
 }
}
#endif
