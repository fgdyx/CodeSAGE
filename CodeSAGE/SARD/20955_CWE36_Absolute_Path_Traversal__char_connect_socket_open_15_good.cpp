#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 break;
 }
 {
 int VAR6;
 VAR6 = FUN3(VAR2, VAR7|VAR8, VAR9|VAR10);
 if (VAR6 != -1)
 {
 FUN4(VAR6);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 break;
 default:
 FUN2("");
 break;
 }
 {
 int VAR6;
 VAR6 = FUN3(VAR2, VAR7|VAR8, VAR9|VAR10);
 if (VAR6 != -1)
 {
 FUN4(VAR6);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
