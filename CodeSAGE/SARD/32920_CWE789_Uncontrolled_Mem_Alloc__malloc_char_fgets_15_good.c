#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3, NULL, 0);
 }
 else
 {
 FUN3("");
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
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6) && VAR2 < 100)
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN3(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3, NULL, 0);
 }
 else
 {
 FUN3("");
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
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6) && VAR2 < 100)
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN3(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR2 = 20;
 break;
 }
 switch(7)
 {
 case 7:
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN3(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN6()
{
 size_t VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 VAR2 = 20;
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN3(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
