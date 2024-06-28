#ifndef VAR1
void FUN1(CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType VAR2;
 VAR4 = NULL;
 VAR4 = (VAR3 *)FUN3(100*sizeof(VAR3));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN4(&VAR4[0]);
 VAR2.VAR7 = VAR4;
 FUN1(VAR2);
}
void FUN5(CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType VAR2);
static void FUN6()
{
 VAR3 * VAR4;
 CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType VAR2;
 VAR4 = NULL;
 VAR4 = (VAR3 *)realloc(VAR4, 100*sizeof(VAR3));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN4(&VAR4[0]);
 VAR2.VAR7 = VAR4;
 FUN5(VAR2);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
