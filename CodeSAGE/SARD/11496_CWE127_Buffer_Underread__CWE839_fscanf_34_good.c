#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE127_Buffer_Underread__CWE839_fscanf_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = 7;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6[10] = { 0 };
 if (VAR2 < 10)
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
 CWE127_Buffer_Underread__CWE839_fscanf_34_unionType VAR3;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
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
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
