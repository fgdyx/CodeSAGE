#ifndef VAR1
int VAR2 = 0;
int FUN1(int VAR3);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 size_t VAR4;
 int *VAR5;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR5 = (int*)malloc(VAR3 * sizeof(int));
 for (VAR4 = 0; VAR4 < (VAR6)VAR3; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN3(VAR5[0]);
 free(VAR5);
 }
}
#endif
