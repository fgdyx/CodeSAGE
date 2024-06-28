#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
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
#endif
