#ifndef VAR1
static void FUN1()
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
 FUN2(VAR5[0]);
 free(VAR5);
 }
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 {
 char VAR7[VAR8] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR2 = FUN4(VAR7);
 }
 else
 {
 FUN5("");
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
