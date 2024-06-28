#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN3("");
 break;
 default:
 FUN4("", VAR2);
 break;
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN4("", VAR2);
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 strcpy(VAR2, "");
 break;
 }
 switch(7)
 {
 case 7:
 FUN4(VAR2);
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN7()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 strcpy(VAR2, "");
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN4(VAR2);
 break;
 default:
 FUN3("");
 break;
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
