#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN2(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR4; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7))
 {
 FUN2(1);
 }
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
}
void FUN3(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 if (VAR4 > 0 && VAR4 <= 20)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN2(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR4; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7)) FUN2(1);
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
}
#endif
