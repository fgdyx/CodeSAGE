#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE400_Resource_Exhaustion__fscanf_for_loop_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = 20;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 size_t VAR6 = 0;
 for (VAR6 = 0; VAR6 < (VAR7)VAR2; VAR6++)
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 int VAR2;
 CWE400_Resource_Exhaustion__fscanf_for_loop_34_unionType VAR3;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 size_t VAR6 = 0;
 if (VAR2 > 0 && VAR2 <= 20)
 {
 for (VAR6 = 0; VAR6 < (VAR7)VAR2; VAR6++)
 {
 FUN2("");
 }
 }
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
