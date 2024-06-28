#ifndef VAR1
static void FUN1()
{
 int64_t VAR2;
 CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_unionType VAR3;
 VAR2 = 0LL;
 VAR2 = 2;
 VAR3.VAR4 = VAR2;
 {
 int64_t VAR2 = VAR3.VAR5;
 if(VAR2 > 0)
 {
 int64_t VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 int64_t VAR2;
 CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_unionType VAR3;
 VAR2 = 0LL;
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 int64_t VAR2 = VAR3.VAR5;
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR7/2))
 {
 int64_t VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
