#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType VAR2);
static void FUN2()
{
 int VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType VAR2;
 VAR3 = -1;
 VAR3 = 7;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType VAR2);
static void FUN4()
{
 int VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType VAR2;
 VAR3 = -1;
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR3 = FUN5(VAR5);
 }
 else
 {
 FUN6("");
 }
 }
 VAR2.VAR4 = VAR3;
 FUN3(VAR2);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
