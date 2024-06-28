#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE400_Resource_Exhaustion__rand_fwrite_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = 20;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 size_t VAR6 = 0;
 VAR7 *VAR8 = NULL;
 const char *VAR9 = "";
 VAR8 = fopen(VAR9, "");
 if (VAR8 == NULL)
 {
 FUN2(1);
 }
 for (VAR6 = 0; VAR6 < (VAR10)VAR2; VAR6++)
 {
 if (strlen(VAR11) != fwrite(VAR11, sizeof(char), strlen(VAR11), VAR8))
 {
 FUN2(1);
 }
 }
 if (VAR8)
 {
 fclose(VAR8);
 }
 }
 }
}
static void FUN3()
{
 int VAR2;
 CWE400_Resource_Exhaustion__rand_fwrite_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = FUN4();
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 size_t VAR6 = 0;
 VAR7 *VAR8 = NULL;
 const char *VAR9 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 == NULL)
 {
 FUN2(1);
 }
 for (VAR6 = 0; VAR6 < (VAR10)VAR2; VAR6++)
 {
 if (strlen(VAR11) != fwrite(VAR11, sizeof(char), strlen(VAR11), VAR8)) FUN2(1);
 }
 if (VAR8)
 {
 fclose(VAR8);
 }
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
