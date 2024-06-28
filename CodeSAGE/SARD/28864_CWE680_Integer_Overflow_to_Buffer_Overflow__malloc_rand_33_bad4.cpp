#ifndef VAR1
void FUN1()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 {
 int VAR2 = VAR3;
 {
 size_t VAR4;
 int *VAR5;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR5 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN3(VAR5[0]);
 free(VAR5);
 }
 }
}
#endif
