#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_67_structType VAR2);
void FUN2()
{
 int * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_67_structType VAR2;
 VAR3 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR3 = (int *)FUN3(10);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
