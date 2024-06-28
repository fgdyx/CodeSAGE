#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 /* FLAW: Set data to a value that will cause an integer overflow in the call to malloc() in the sink */
 VAR2 = VAR3 / 2 + 2;
 {
 int VAR4 = VAR2;
 int VAR2 = VAR4;
 {
 size_t VAR5;
 int *VAR6;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR6 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR5 = 0; VAR5 < (VAR7)VAR2; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN2(VAR6[0]);
 free(VAR6);
 }
 }
}
#endif
