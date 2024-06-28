#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_67_structType VAR2);
static void FUN2()
{
 int * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_67_structType VAR2;
 VAR3 = NULL;
 VAR3 = (int *)FUN3(10*sizeof(int));
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
