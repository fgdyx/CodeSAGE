#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE126_Buffer_Overread__CWE129_rand_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = 7;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN2(VAR6[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 int VAR2;
 CWE126_Buffer_Overread__CWE129_rand_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = FUN5();
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN2(VAR6[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
