#ifndef VAR1
void FUN1(CWE190_Integer_Overflow__int_fgets_square_67_structType VAR2);
static void FUN2()
{
 int VAR3;
 CWE190_Integer_Overflow__int_fgets_square_67_structType VAR2;
 VAR3 = 0;
 VAR3 = 2;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE190_Integer_Overflow__int_fgets_square_67_structType VAR2);
static void FUN4()
{
 int VAR3;
 CWE190_Integer_Overflow__int_fgets_square_67_structType VAR2;
 VAR3 = 0;
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
