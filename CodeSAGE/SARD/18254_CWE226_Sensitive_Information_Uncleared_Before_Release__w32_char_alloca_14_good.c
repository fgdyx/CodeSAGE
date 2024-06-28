#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR3 = (char *)FUN3(100*sizeof(char));
 size_t VAR4 = 0;
 HANDLE VAR5;
 char * VAR6 = "";
 char * VAR7 = "";
 VAR3[0] = '';
 if (fgets(VAR3, 100, stdin) == NULL)
 {
 FUN2("");
 VAR3[0] = '';
 }
 VAR4 = strlen(VAR3);
 if (VAR4 > 0)
 {
 VAR3[VAR4-1] = '';
 }
 if (FUN4(
 VAR6,
 VAR7,
 VAR3,
 VAR8,
 VAR9,
 &VAR5) != 0)
 {
 FUN2("");
 FUN5(VAR5);
 }
 else
 {
 FUN2("");
 }
 VAR4 = strlen(VAR3);
 FUN6(VAR3, VAR4 * sizeof(char));
 }
 }
}
static void FUN7()
{
 if(VAR2==5)
 {
 {
 char * VAR3 = (char *)FUN3(100*sizeof(char));
 size_t VAR4 = 0;
 HANDLE VAR5;
 char * VAR6 = "";
 char * VAR7 = "";
 VAR3[0] = '';
 if (fgets(VAR3, 100, stdin) == NULL)
 {
 FUN2("");
 VAR3[0] = '';
 }
 VAR4 = strlen(VAR3);
 if (VAR4 > 0)
 {
 VAR3[VAR4-1] = '';
 }
 if (FUN4(
 VAR6,
 VAR7,
 VAR3,
 VAR8,
 VAR9,
 &VAR5) != 0)
 {
 FUN2("");
 FUN5(VAR5);
 }
 else
 {
 FUN2("");
 }
 VAR4 = strlen(VAR3);
 FUN6(VAR3, VAR4 * sizeof(char));
 }
 }
}
void FUN8()
{
 FUN1();
 FUN7();
}
#endif
