#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
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
 char *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN3(VAR9, VAR4);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
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
 char *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN3(VAR9, VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
