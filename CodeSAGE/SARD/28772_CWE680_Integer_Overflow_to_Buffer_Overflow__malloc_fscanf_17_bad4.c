#ifndef VAR1
void FUN1()
{
 int VAR2;
 int VAR3;
 VAR3 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 }
 {
 size_t VAR2;
 int *VAR4;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR4 = (int*)malloc(VAR3 * sizeof(int));
 for (VAR2 = 0; VAR2 < (VAR5)VAR3; VAR2++)
 {
 VAR4[VAR2] = 0;
 }
 FUN2(VAR4[0]);
 free(VAR4);
 }
}
#endif
