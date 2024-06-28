#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 int VAR5;
 int VAR6[10] = { 0 };
 if (VAR3 >= 0)
 {
 VAR6[VAR3] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN2(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4(CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 int VAR5;
 int VAR6[10] = { 0 };
 if (VAR3 >= 0 && VAR3 < (10))
 {
 VAR6[VAR3] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN2(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
