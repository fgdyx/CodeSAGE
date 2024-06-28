#ifndef VAR1
void FUN1()
{
 int VAR2;
 int VAR3;
 VAR3 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 {
 size_t VAR2;
 int *VAR6;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR6 = (int*)malloc(VAR3 * sizeof(int));
 for (VAR2 = 0; VAR2 < (VAR7)VAR3; VAR2++)
 {
 VAR6[VAR2] = 0;
 }
 FUN4(VAR6[0]);
 free(VAR6);
 }
}
#endif
