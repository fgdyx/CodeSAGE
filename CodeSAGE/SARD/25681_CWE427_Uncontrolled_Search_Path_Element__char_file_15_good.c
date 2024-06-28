#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 strcat(VAR2, VAR4);
 break;
 }
 FUN3(VAR2);
}
static void FUN4()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 strcat(VAR2, VAR4);
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(VAR2);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
