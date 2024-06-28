#ifndef VAR1
void FUN1(CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 size_t VAR5;
 int *VAR6;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR6 = (int*)malloc(VAR3 * sizeof(int));
 for (VAR5 = 0; VAR5 < (VAR7)VAR3; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN2(VAR6[0]);
 free(VAR6);
 }
}
#endif
