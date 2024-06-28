#ifndef VAR1
void FUN1(CWE401_Memory_Leak__char_calloc_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE401_Memory_Leak__char_calloc_67_structType VAR2;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (char *)calloc(100, sizeof(char));
 strcpy(VAR3, "");
 FUN3(VAR3);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
