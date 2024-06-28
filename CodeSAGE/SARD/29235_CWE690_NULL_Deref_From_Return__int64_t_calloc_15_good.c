#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(1, sizeof(VAR2));
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 free(VAR3);
 }
 break;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(1, sizeof(VAR2));
 switch(6)
 {
 case 6:
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 free(VAR3);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
