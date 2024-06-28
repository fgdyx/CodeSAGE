#ifndef VAR1
static void FUN1()
{
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 char * VAR2 = (char *)FUN3(100*sizeof(char));
 size_t VAR3 = 0;
 HANDLE VAR4;
 char * VAR5 = "";
 char * VAR6 = "";
 VAR2[0] = '';
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN2("");
 VAR2[0] = '';
 }
 VAR3 = strlen(VAR2);
 if (VAR3 > 0)
 {
 VAR2[VAR3-1] = '';
 }
 if (FUN4(
 VAR5,
 VAR6,
 VAR2,
 VAR7,
 VAR8,
 &VAR4) != 0)
 {
 FUN2("");
 FUN5(VAR4);
 }
 else
 {
 FUN2("");
 }
 VAR3 = strlen(VAR2);
 FUN6(VAR2, VAR3 * sizeof(char));
 }
 break;
 }
}
static void FUN7()
{
 switch(6)
 {
 case 6:
 {
 char * VAR2 = (char *)FUN3(100*sizeof(char));
 size_t VAR3 = 0;
 HANDLE VAR4;
 char * VAR5 = "";
 char * VAR6 = "";
 VAR2[0] = '';
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN2("");
 VAR2[0] = '';
 }
 VAR3 = strlen(VAR2);
 if (VAR3 > 0)
 {
 VAR2[VAR3-1] = '';
 }
 if (FUN4(
 VAR5,
 VAR6,
 VAR2,
 VAR7,
 VAR8,
 &VAR4) != 0)
 {
 FUN2("");
 FUN5(VAR4);
 }
 else
 {
 FUN2("");
 }
 VAR3 = strlen(VAR2);
 FUN6(VAR2, VAR3 * sizeof(char));
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN8()
{
 FUN1();
 FUN7();
}
#endif
