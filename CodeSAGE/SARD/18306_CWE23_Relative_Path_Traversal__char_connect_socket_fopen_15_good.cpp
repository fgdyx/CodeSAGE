#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 strcat(VAR2, "");
 break;
 }
 {
 VAR6 *VAR7 = NULL;
 VAR7 = FUN3(VAR2, "");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 strcat(VAR2, "");
 break;
 default:
 FUN2("");
 break;
 }
 {
 VAR6 *VAR7 = NULL;
 VAR7 = FUN3(VAR2, "");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
