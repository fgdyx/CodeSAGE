#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 {
 int VAR5 = VAR2;
 int VAR2 = VAR5;
 {
 size_t VAR6;
 int *VAR7;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR7 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR6 = 0; VAR6 < (VAR8)VAR2; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN4(VAR7[0]);
 free(VAR7);
 }
 }
}
#endif
