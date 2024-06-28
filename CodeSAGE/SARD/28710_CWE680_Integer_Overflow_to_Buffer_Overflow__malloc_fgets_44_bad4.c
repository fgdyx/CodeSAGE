#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 size_t VAR3;
 int *VAR4;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR4 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 FUN2(VAR4[0]);
 free(VAR4);
 }
}
void FUN3()
{
 int VAR2;
 void (*VAR6) (int) = VAR7;
 VAR2 = -1;
 {
 char VAR8[VAR9] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR8, VAR9, stdin) != NULL)
 {
 VAR2 = FUN4(VAR8);
 }
 else
 {
 FUN5("");
 }
 }
 FUN6(VAR2);
}
#endif
