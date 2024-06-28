#ifndef VAR1
void FUN1(int VAR2[])
{
 int VAR3 = VAR2[2];
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN2(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR3; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6))
 {
 FUN2(1);
 }
 }
 if (VAR6)
 {
 fclose(VAR6);
 }
 }
}
void FUN3(int VAR2[])
{
 int VAR3 = VAR2[2];
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 if (VAR3 > 0 && VAR3 <= 20)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN2(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR3; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6)) FUN2(1);
 }
 if (VAR6)
 {
 fclose(VAR6);
 }
 }
 }
}
#endif
