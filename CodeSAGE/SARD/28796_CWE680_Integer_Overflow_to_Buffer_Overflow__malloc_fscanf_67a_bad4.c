#ifndef VAR1
void FUN1(CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_67_structType VAR2);
void FUN2()
{
 int VAR3;
 CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_67_structType VAR2;
 VAR3 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
